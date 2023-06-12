// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskFocusingMoveTo.h"
#include "../Character/Enemy.h"
#include "AIController.h"
#include "kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTaskFocusingMoveTo::UBTTaskFocusingMoveTo()
{
	bNotifyTick = true;
}

void UBTTaskFocusingMoveTo::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* controller = Cast<AAIController>(OwnerComp.GetOwner());
	AEnemy* enemy = Cast<AEnemy>(controller->GetPawn());
	if (!enemy || enemy->IsDead())
		return;

	if (!enemy->GetTarget())
		return;

	FRotator rot = UKismetMathLibrary::FindLookAtRotation(enemy->GetActorLocation(), enemy->GetTarget()->GetActorLocation());
	enemy->GetMesh()->SetWorldRotation(rot.Quaternion());
}
