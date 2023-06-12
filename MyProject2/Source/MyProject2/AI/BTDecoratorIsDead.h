// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecoratorIsDead.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBTDecoratorIsDead : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTDecoratorIsDead();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
