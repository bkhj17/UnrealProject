// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Components/ArrowComponent.h"
#include "kismet/GameplayStatics.h"
#include "kismet/KismetMathLibrary.h"
#include "kismet/KismetSystemLibrary.h"
#include "../Character/Unit.h"
#include "Bullet.h"

// Sets default values
AWeapon::AWeapon()
{
	Muzzle = CreateDefaultSubobject<UArrowComponent>("Muzzle");
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	CurCartridge = MaxCartridge;
	if (MaxCartridge > 0)
		UKismetSystemLibrary::K2_SetTimer(this, TEXT("Reload"), 1.0f, true);

	ShotAllowed = true;
	
	for (int i = 0; i < BulletsSize; i++) {
		FActorSpawnParameters actorParam;
		actorParam.Owner = this;

		ABullet* bullet = GetWorld()->SpawnActor<ABullet>(BulletClass, actorParam);
		Bullets.Push(bullet);
	}
}

void AWeapon::Reload()
{
	if (CurCartridge >= 0 && CurCartridge < MaxCartridge)
		CurCartridge++;
}

FTransform AWeapon::CalcBulletTransform(bool bLocked, FVector direction)
{
	FTransform transform;
	transform.SetLocation(GetActorLocation() + GetActorForwardVector() * 100.0f);
	
	FRotator rotation = bLocked ? direction.Rotation() : GetActorForwardVector().Rotation();
	transform.SetRotation(rotation.Quaternion());

	return transform;
}

void AWeapon::AttachWeapon(FName slot)
{
	Owner = Cast<AUnit>(GetOwner());
	AttachToComponent(Owner->GetMesh(), FAttachmentTransformRules(EAttachmentRule::KeepRelative, true), slot);
}

void AWeapon::Shot(bool bLocked, FVector direction)
{
	if (CurCartridge == 0)
		return;
	
	if (!ShotAllowed)
		return;

	for (ABullet* bullet : Bullets) {
		if (bullet->IsActive())
			continue;

		bullet->Shot(CalcBulletTransform(bLocked, direction), Range);

		if(CurCartridge > 0) 
			CurCartridge--;
		ShotAllowed = false;
		UKismetSystemLibrary::K2_SetTimer(this, TEXT("CoolDown"), ShotRate, false);
		return;
	}
}
