// Fill out your copyright notice in the Description page of Project Settings.


#include "NoSocketsWeapon.h"
#include "../Character/Unit.h"
#include "Bullet.h"
#include "kismet/KismetSystemLibrary.h"

FTransform ANoSocketsWeapon::CalcBulletTransform(bool bLocked, FVector target)
{
	if (bLocked)
		return Super::CalcBulletTransform(bLocked, target);

	FTransform transform;
	transform.SetLocation(GetActorLocation() + GetActorForwardVector() * 100.0f);
	transform.SetRotation(Owner->GetActorRotation().Quaternion());
	return transform;
}
