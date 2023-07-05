// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericTeamAgentInterface.h"
#include "Unit.generated.h"

UCLASS()
class MYPROJECT2_API AUnit : public ACharacter, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
protected:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		class UStatusComponent* Status;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TMap<FName, TSubclassOf<class AWeapon>> WeaponDatas;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		bool bActive = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		uint8 TeamID = 0;

public:
	// Sets default values for this character's properties
	AUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable)
		virtual void AttackAll(bool targetSet = false, FVector diraction = FVector(0, 0, 0));
	UFUNCTION(BlueprintCallable)
		virtual void Attack(FName slot, bool targetSet = false, FVector diraction = FVector(0, 0, 0));
	UFUNCTION(BlueprintCallable)
		virtual void AttackTargetAll(FVector target = FVector(0, 0, 0));
	UFUNCTION(BlueprintCallable)
		virtual void AttackTarget(FName slot, FVector target = FVector(0, 0, 0));

	UFUNCTION(BlueprintCallable)
		bool IsDead();

	virtual void SetActive(bool active);
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	FORCEINLINE uint8 GetTeamID() { return TeamID; }
	virtual FGenericTeamId GetGenericTeamId() const override;

	virtual void Death();
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UWidgetComponent* HPBarWidget = nullptr;

	TMap<FName, AWeapon*> Weapons;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UParticleSystem* DeadEffect;
};
