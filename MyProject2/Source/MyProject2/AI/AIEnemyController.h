// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIEnemyController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API AAIEnemyController : public AAIController
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool bDrawDebug = true;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float AttackRange = 150.0f;

	UPROPERTY(EditAnywhere)
	float AdjustCircleHeight = 50.0f;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float SightDist = 3000.0f;

	UPROPERTY(VisibleDefaultsOnly)
	UAIPerceptionComponent* Perception;

public:
	AAIEnemyController();

	virtual void Tick(float DeltaTime) override;

	virtual void OnPossess(APawn* InPawn) override;

	float GetAttackRange() { return AttackRange; }
	float GetSightRange();
private:
	UFUNCTION()
		void OnPerceptionUpdated(const TArray<AActor*>& UpdateActors);
private:
	class AEnemy* Owner;
	class UAISenseConfig_Sight* Sight;

};
