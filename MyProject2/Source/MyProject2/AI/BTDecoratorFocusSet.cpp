// Fill out your copyright notice in the Description page of Project Settings.


#include "../AI/BTDecoratorFocusSet.h"
#include "../Character/Unit.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecoratorFocusSet::UBTDecoratorFocusSet()
{
	NodeName = "IsFocusSet";
}

bool UBTDecoratorFocusSet::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	return blackboard ? blackboard->GetValueAsBool("FocusSet") : false;
}
