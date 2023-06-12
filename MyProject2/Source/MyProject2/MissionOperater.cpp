// Fill out your copyright notice in the Description page of Project Settings.


#include "MissionOperater.h"
#include "AI/MissionPoint.h"
#include "kismet/GameplayStatics.h"
#include "BotPlayerController.h"

void AMissionOperator::PointClear()
{
	CurPoint++;
	if (CurPoint >= Points.Num()) //미션 클리어
		MissionClear.ExecuteIfBound();
}

void AMissionOperator::BeginPlay()
{
	CurPoint = 0;

	ABotPlayerController* controller = Cast<ABotPlayerController>(UGameplayStatics::GetActorOfClass(GetWorld(), ABotPlayerController::StaticClass()));
	MissionClear.BindUObject(controller, &ABotPlayerController::Win);
}
