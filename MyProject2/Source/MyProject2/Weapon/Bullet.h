// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class MYPROJECT2_API ABullet : public AActor
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UProjectileMovementComponent* Movement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UParticleSystem* HitEffect;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bActive = true;
public:	
	// Sets default values for this actor's properties
	ABullet();

	void SetActive(bool Active);
	bool IsActive() { return bActive; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResultprivate);
	UFUNCTION()
	void Inactive() { SetActive(false); }
public:	

protected:
	class UShapeComponent* Collider;
	class AWeapon* Weapon;
};
