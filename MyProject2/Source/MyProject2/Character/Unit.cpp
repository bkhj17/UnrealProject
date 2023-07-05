// Fill out your copyright notice in the Description page of Project Settings.


#include "Unit.h"
#include "StatusComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "../Weapon/Weapon.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "kismet/GameplayStatics.h"
// Sets default values
AUnit::AUnit()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Status = CreateDefaultSubobject<UStatusComponent>("Status");
}

// Called when the game starts or when spawned
void AUnit::BeginPlay()
{
	Super::BeginPlay();
	SetActive(true);

	FActorSpawnParameters param;
	param.Owner = this;
	for (auto& data : WeaponDatas) {
		AWeapon* weapon = GetWorld()->SpawnActor<AWeapon>(data.Value, param);
		weapon->AttachWeapon(data.Key);
		Weapons.Add(data.Key, weapon);
	}
}

void AUnit::AttackAll(bool targetSet, FVector diraction)
{
	for (auto& slot : Weapons)
		Attack(slot.Key, targetSet, diraction);
}

void AUnit::Attack(FName slot, bool targetSet, FVector diraction)
{
	if (Weapons.Find(slot))
		Weapons[slot]->Shot(targetSet, diraction);
}

void AUnit::AttackTargetAll(FVector target)
{
	for (auto& slot : Weapons)
		AttackTarget(slot.Key, target);
}

void AUnit::AttackTarget(FName slot, FVector target)
{
	if (Weapons.Find(slot)) {
		FVector dir = target - Weapons[slot]->GetActorLocation();
		dir.Normalize();
		Attack(slot, true, dir);
	}
}

bool AUnit::IsDead()
{
	return !bActive || IsHidden() || Status->GetCurHP() <= 0.0f;
}

void AUnit::SetActive(bool Active)
{
	bActive = Active;
	PrimaryActorTick.bCanEverTick = Active;
	SetActorHiddenInGame(!Active);
	SetActorTickEnabled(Active);
	SetActorEnableCollision(Active);
	GetMovementComponent()->SetActive(Active);
}

float AUnit::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	Status->Damaged(DamageAmount);
	return DamageAmount;
}

FGenericTeamId AUnit::GetGenericTeamId() const
{
	return FGenericTeamId(TeamID);
}

void AUnit::Death()
{
	SetActive(false);
	if (DeadEffect)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), DeadEffect, GetActorTransform());
}
