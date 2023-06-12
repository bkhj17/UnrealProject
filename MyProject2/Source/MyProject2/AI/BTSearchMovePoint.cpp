// Fill out your copyright notice in the Description page of Project Settings.


#include "BTSearchMovePoint.h"
#include "../Character/Enemy.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTSearchMovePoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	AActor* self = Cast<AActor>(blackboard->GetValueAsObject("SelfActor"));
	if (self == nullptr)
		return EBTNodeResult::Aborted;

	FVector location = self->GetActorLocation();
	AEnemy* enemySelf = Cast<AEnemy>(self);
	if (enemySelf)
		location = enemySelf->GetCenterPoint();

	FVector point = UNavigationSystemV1::GetRandomReachablePointInRadius(GetWorld(), location, Range);
	blackboard->SetValueAsVector("MovePoint", point);

	return EBTNodeResult::Succeeded;
}
