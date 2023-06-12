// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecoratorFocusSet.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBTDecoratorFocusSet : public UBTDecorator
{
	GENERATED_BODY()
public:
	UBTDecoratorFocusSet();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
