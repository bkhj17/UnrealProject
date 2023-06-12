// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecoratorIsDead.h"
#include "../Character/Unit.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecoratorIsDead::UBTDecoratorIsDead()
{
	NodeName = "IsDead";
}

bool UBTDecoratorIsDead::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	AUnit* self = Cast<AUnit>(blackboard->GetValueAsObject("SelfActor"));
	
	return self != nullptr ? !self->IsDead() : false;
}
