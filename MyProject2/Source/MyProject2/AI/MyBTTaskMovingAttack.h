// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../AI/BTTaskFocusingMoveTo.h"
#include "MyBTTaskMovingAttack.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UMyBTTaskMovingAttack : public UBTTaskFocusingMoveTo
{
	GENERATED_BODY()

protected:
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
