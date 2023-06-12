// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "NoSocketsWeapon.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API ANoSocketsWeapon : public AWeapon
{
	GENERATED_BODY()
protected:
	virtual FTransform CalcBulletTransform(bool bLocked = false, FVector target = FVector(0,0,0)) override;

};
