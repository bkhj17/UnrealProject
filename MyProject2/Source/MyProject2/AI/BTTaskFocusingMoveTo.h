// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTaskFocusingMoveTo.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBTTaskFocusingMoveTo : public UBTTask_MoveTo
{
	GENERATED_BODY()
public:
	UBTTaskFocusingMoveTo();

protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
