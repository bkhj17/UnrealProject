// Fill out your copyright notice in the Description page of Project Settings.


#include "MissionPoint.h"
#include "../Character/Enemy.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../MissionOperater.h"

int AMissionPoint::GetNumOfAliveUnits()
{
	int num = 0;
	for (AUnit* unit : Units)
		num += (int)(!unit->IsDead());
	return num;
}

bool AMissionPoint::IsInArea(AUnit* unit)
{
	return GetDistanceTo(unit) <= AreaRadius;
}

void AMissionPoint::UnitDead()
{
	for (AUnit* unit : Units) {
		if (!unit || unit->IsDead())
			continue;

		//죽지 않은 유닛이 있다
		return;
	}

	Cast<AMissionOperator>(UGameplayStatics::GetActorOfClass(GetWorld(), AMissionOperator::StaticClass()))->PointClear();
}

// Called when the game starts or when spawned
void AMissionPoint::BeginPlay()
{
	Super::BeginPlay();
	
	for (AUnit* unit : Units) {
		if (!unit)
			continue;

		AEnemy* enemy = Cast<AEnemy>(unit);
		if(enemy)
			enemy->SetMissionPoint(this);
	}
}
