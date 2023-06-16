// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class MYPROJECT2_API AWeapon : public AActor
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FString Name = "";
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		float Power = 1.0f;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		float Range = 100000.0f;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		int MaxCartridge = 0;
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
		int CurCartridge = 0;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		float ShotRate = 0.5f;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		class UArrowComponent* Muzzle;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		TSubclassOf<class ABullet> BulletClass;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int BulletsSize = 20;
public:	
	// Sets default values for this actor's properties
	AWeapon();
	FORCEINLINE const FString& GetName() { return Name; }
	FORCEINLINE float GetPower() { return Power; }
	FORCEINLINE float GetRange() { return Range; }
	FORCEINLINE int GetMaxCartridge() { return MaxCartridge; }
	FORCEINLINE int GetCurCartridge() { return CurCartridge; }

	void AttachWeapon(FName slot);
	virtual void Shot(bool bLocked = false, FVector direction = FVector(1,0,0));
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void CoolDown() { ShotAllowed = true; }

	void Reload();
	virtual FTransform CalcBulletTransform(bool bLocked = false, FVector direction = FVector(1,0,0));
protected:
	TArray<ABullet*> Bullets;
	class AUnit* Owner = nullptr;

	bool ShotAllowed = true;
};
