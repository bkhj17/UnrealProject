// Fill out your copyright notice in the Description page of Project Settings.


#include "BTServiceSearchMovePoint.h"
#include "../Character/Enemy.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

void UBTServiceSearchMovePoint::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	UBlackboardComponent* blackboard = OwnerComp.GetBlackboardComponent();
	AActor* self = Cast<AActor>(blackboard->GetValueAsObject("SelfActor"));
	if (self == nullptr)
		return;

	FVector location = self->GetActorLocation();
	AEnemy* enemySelf = Cast<AEnemy>(self);
	if (enemySelf)
		location = enemySelf->GetCenterPoint();

	FVector point = UNavigationSystemV1::GetRandomReachablePointInRadius(GetWorld(), location, Range);
	blackboard->SetValueAsVector("MovePoint", point);
}
