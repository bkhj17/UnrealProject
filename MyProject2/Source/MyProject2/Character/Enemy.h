// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Unit.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API AEnemy : public AUnit
{
	GENERATED_BODY()
public:
	AEnemy();

protected:
	virtual void BeginPlay() override;

	void UpdateHPWidget();
public:
	UFUNCTION(BlueprintCallable)
	FVector GetCenterPoint();

	UFUNCTION(BlueprintCallable)
	void SetMissionPoint(class AMissionPoint* Point) { this->MissionPoint = Point; }

	UFUNCTION(BlueprintCallable)
	AMissionPoint* GetMissionPoint() { return MissionPoint; }

	UFUNCTION(BlueprintCallable)
	void SetTarget(AUnit* unit) { target = unit; }

	UFUNCTION(BlueprintCallable)
	AUnit* GetTarget() { return target; }

	FORCEINLINE class UBehaviorTree* GetTree() { return BehaviorTree; }

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	virtual void Death() override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UBehaviorTree* BehaviorTree;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	AMissionPoint* MissionPoint = nullptr;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite)
	AUnit* target = nullptr;
};
