// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTaskMovingAttack.h"
#include "../Character/Enemy.h"
#include "kismet/KismetMathLibrary.h"
#include "AIController.h"

void UMyBTTaskMovingAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* controller = Cast<AAIController>(OwnerComp.GetOwner());
	AEnemy* enemy = Cast<AEnemy>(controller->GetPawn());
	if (!enemy || enemy->IsDead())
		return;

	if (enemy->GetTarget() != nullptr)
		enemy->AttackTargetAll(enemy->GetTarget()->GetActorLocation());
}
