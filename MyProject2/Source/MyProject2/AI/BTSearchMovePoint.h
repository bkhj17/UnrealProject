// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTSearchMovePoint.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBTSearchMovePoint : public UBTTaskNode
{
	GENERATED_BODY()

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;



protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float Range = 1000.0f;

};
