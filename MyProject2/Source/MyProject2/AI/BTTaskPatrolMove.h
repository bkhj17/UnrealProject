// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTaskPatrolMove.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBTTaskPatrolMove : public UBTTask_MoveTo
{
	GENERATED_BODY()
protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) {}
};
