// Fill out your copyright notice in the Description page of Project Settings.


#include "AIEnemyController.h"
#include "../Character/Enemy.h"
#include "Perception/AISenseConfig_Sight.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"

AAIEnemyController::AAIEnemyController()
{
	PrimaryActorTick.bCanEverTick = true;

	Blackboard = CreateDefaultSubobject<UBlackboardComponent>("Blackboard");
	Perception = CreateDefaultSubobject<UAIPerceptionComponent>("Perception");

	Sight = CreateDefaultSubobject<UAISenseConfig_Sight>("Sight");
	Sight->SightRadius = SightDist;
	Sight->LoseSightRadius = SightDist * 3.0f;
	Sight->PeripheralVisionAngleDegrees = 90.0f;
	Sight->SetMaxAge(2);
	Sight->DetectionByAffiliation.bDetectEnemies = true;
	Sight->DetectionByAffiliation.bDetectNeutrals = false;
	Sight->DetectionByAffiliation.bDetectFriendlies = false;

	Perception->ConfigureSense(*Sight);
	Perception->SetDominantSense(*Sight->GetSenseImplementation());
}

void AAIEnemyController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (Owner->IsHidden())
		return;

	if (!bDrawDebug) return;
	FVector center = Owner->GetActorLocation();
	center.Z += AdjustCircleHeight;
	DrawDebugCircle(GetWorld(), center, Sight->SightRadius, 300, FColor::Green, false, -1.0f, 0, 0, FVector::RightVector, FVector::ForwardVector);
	DrawDebugCircle(GetWorld(), center, AttackRange, 300, FColor::Red, false, -1.0f, 0, 0, FVector::RightVector, FVector::ForwardVector);

}

void AAIEnemyController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	Owner = Cast<AEnemy>(InPawn);

	SetGenericTeamId(Owner->GetTeamID());

	Perception->OnPerceptionUpdated.AddDynamic(this, &AAIEnemyController::OnPerceptionUpdated);

	UBlackboardComponent* blackboard = Blackboard.Get();
	UseBlackboard(Owner->GetTree()->BlackboardAsset, blackboard);
	RunBehaviorTree(Owner->GetTree());
}

float AAIEnemyController::GetSightRange()
{
	return Sight->SightRadius;
}

void AAIEnemyController::OnPerceptionUpdated(const TArray<AActor*>& UpdateActors)
{
	if (Owner->GetTarget() != nullptr) {
		if (Owner->GetDistanceTo(Owner->GetTarget()) > Sight->LoseSightRadius)
			Owner->SetTarget(nullptr);
		else
			return;
	}

	TArray<AActor*> actors;
	Perception->GetCurrentlyPerceivedActors(nullptr, actors);
	for (AActor* actor : actors) {
		AUnit* unit = Cast<AUnit>(actor);
		if (unit != nullptr && !unit->IsDead()) {
			Owner->SetTarget(unit);
			return;
		}
	}
}
