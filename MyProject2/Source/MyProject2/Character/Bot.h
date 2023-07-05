// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Unit.h"
#include "Bot.generated.h"

UCLASS()
class MYPROJECT2_API ABot : public AUnit
{
	GENERATED_BODY()

public:
	ABot();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	virtual void SetActive(bool Active) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	void LockOff();
	void TickOff();
protected:
	virtual void BeginPlay() override;

	void OnMoveForward(float Axis);
	void OnMoveRight(float Axis);
	void OnMoveUp(float Axis);
	void OnRotateHorizontal(float Axis);
	void OnRotateVertical(float Axis);

	void OnJump();

	void OnWeaponShot(FName slot);
	void OnWeaponTrigger(FName slot, bool on);

	void OnLeftWeapon();
	void OffLeftWeapon();
	void OnRightWeapon();
	void OffRightWeapon();

	void RotateLockOn();
protected:
	void OnWalk();

protected:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	class UTargetComponent* Targets;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	class UBoosterComponent* Booster;

	UPROPERTY(VisibleAnywhere)
	float RotSpeed = 30.0f; 

	TMap<FName, bool> WeaponTriggered;
};
