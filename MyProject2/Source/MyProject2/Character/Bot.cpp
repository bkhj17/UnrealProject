// Fill out your copyright notice in the Description page of Project Settings.


#include "Bot.h"
#include "TargetComponent.h"
#include "BoosterComponent.h"
#include "../BotPlayerController.h"
#include "kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"

ABot::ABot()
{
	Targets = CreateDefaultSubobject<UTargetComponent>("Targets");
	Booster = CreateDefaultSubobject<UBoosterComponent>("Booster");

	TeamID = 2;
}

void ABot::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (Targets->GetLockedOn() != nullptr) {
		AUnit* curTarget = Targets->GetLockedOn();
		if (curTarget->IsDead())
			Targets->LockOff();
	}
	RotateLockOn();

	if (Booster->GetCurVolume() <= 0.0f)
		OnWalk();

	for (auto& trigger : WeaponTriggered) {
		if (trigger.Value)
			OnWeaponShot(trigger.Key);
	}
}

void ABot::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("MoveForward", this, &ABot::OnMoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABot::OnMoveRight);
	PlayerInputComponent->BindAxis("MoveUp", this, &ABot::OnMoveUp);
	PlayerInputComponent->BindAxis("RotateHorizontal", this, &ABot::OnRotateHorizontal);
	PlayerInputComponent->BindAxis("RotateVertical", this, &ABot::OnRotateVertical);

	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ABot::OnJump);
	PlayerInputComponent->BindAction("LeftWeapon", EInputEvent::IE_Pressed, this, &ABot::OnLeftWeapon);
	PlayerInputComponent->BindAction("LeftWeapon", EInputEvent::IE_Released, this, &ABot::OffLeftWeapon);
	PlayerInputComponent->BindAction("RightWeapon", EInputEvent::IE_Pressed, this, &ABot::OnRightWeapon);
	PlayerInputComponent->BindAction("RightWeapon", EInputEvent::IE_Released, this, &ABot::OffRightWeapon);

	PlayerInputComponent->BindAction("LockOn", EInputEvent::IE_Pressed, Targets, &UTargetComponent::LockOn);

	PlayerInputComponent->BindAction("Boost", EInputEvent::IE_DoubleClick, Booster, &UBoosterComponent::BoostOn);
}

FGenericTeamId ABot::GetGenericTeamId() const
{
	return FGenericTeamId(TeamID);
}

void ABot::SetActive(bool Active)
{
	AUnit::SetActive(Active);
	Targets->SetActive(Active);
	Booster->SetActive(Active);
}

float ABot::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float result = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	if (IsDead()) {
		ABotPlayerController* controller = Cast<ABotPlayerController>(GetController());
		controller->Lose();
	}

	return result;
}

void ABot::LockOff()
{
	Targets->LockOff();
}

void ABot::TickOff()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ABot::BeginPlay()
{
	Super::BeginPlay();
	PrimaryActorTick.bCanEverTick = true;
	SetActive(true);

	for (auto& weapon : Weapons)
		WeaponTriggered.Add(weapon.Key, false);
}

void ABot::OnMoveForward(float Axis)
{
	FVector dir = GetActorForwardVector();
	dir.Z = 0.0f;
	dir.Normalize();

	GetMovementComponent()->AddInputVector(dir * Axis * Booster->GetSpeed());
}

void ABot::OnMoveRight(float Axis)
{
	FVector dir = GetActorRightVector();
	dir.Z = 0.0f;
	dir.Normalize();

	GetMovementComponent()->AddInputVector(dir * Axis * Booster->GetSpeed());
}

void ABot::OnMoveUp(float Axis)
{
	if (!GetMovementComponent()->IsFlying())
		return;
	GetMovementComponent()->AddInputVector(GetActorUpVector() * Axis * Booster->GetSpeed());
}

void ABot::OnRotateHorizontal(float Axis)
{
	if (!Targets->GetLockedOn())
		AddControllerYawInput(Axis * RotSpeed * GetWorld()->GetDeltaSeconds());
}

void ABot::OnRotateVertical(float Axis)
{
	if (!Targets->GetLockedOn())
		AddControllerPitchInput(-Axis * RotSpeed * GetWorld()->GetDeltaSeconds());
}

void ABot::OnJump()
{
	if (GetMovementComponent()->IsFlying())
		OnWalk();
	else if (GetMovementComponent()->IsFalling())
		GetCharacterMovement()->SetMovementMode(EMovementMode::MOVE_Flying);
	else {
		bPressedJump = true;
		JumpKeyHoldTime = 0.0f;
	}
}

void ABot::OnWeaponShot(FName slot)
{
	if (Targets->GetLockedOn() != nullptr) {
		AUnit* target = Targets->GetLockedOn();
		FVector targetPos = target->GetActorLocation();
		FVector targetVelocity = target->GetMovementComponent()->Velocity * 0.5f;

		AttackTarget(slot, targetPos + targetVelocity);
	}
	else {
		FVector controllerForward = GetControlRotation().Vector();
		Attack(slot, true, controllerForward);
	}
}

void ABot::OnWeaponTrigger(FName slot, bool on)
{
	WeaponTriggered[slot] = on;
}

void ABot::OnLeftWeapon()
{
	//OnWeaponShot("LeftArm");
	OnWeaponTrigger("LeftArm", true);
}

void ABot::OffLeftWeapon()
{
	OnWeaponTrigger("LeftArm", false);
}

void ABot::OnRightWeapon()
{
	//OnWeaponShot("RightArm");
	OnWeaponTrigger("RightArm", true);
}

void ABot::OffRightWeapon()
{
	OnWeaponTrigger("RightArm", false);
}

void ABot::RotateLockOn()
{
	AController* controller = GetController();

	if (Targets->GetLockedOn() && controller) {
		FRotator rotator = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Targets->GetLockedOn()->GetActorLocation());
		controller->SetControlRotation(rotator);
	}
}

void ABot::OnWalk()
{
	Cast<UCharacterMovementComponent>(GetMovementComponent())->SetMovementMode(EMovementMode::MOVE_Walking);
}
