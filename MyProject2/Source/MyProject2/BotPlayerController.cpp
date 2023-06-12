// Fill out your copyright notice in the Description page of Project Settings.


#include "BotPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Character/Bot.h"
#include "UI/PlayerUI.h"
#include "MissionOperater.h"
#include "AI/MissionPoint.h"
#include "kismet/GameplayStatics.h"
#include "MissionOperater.h"

ABotPlayerController::ABotPlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABotPlayerController::Tick(float DeltaSeconds)
{
	OnMissionUpdate();
}

void ABotPlayerController::Win()
{
	GameSet("Mission Clear");
}

void ABotPlayerController::Lose()
{
	GameSet("Mission Failed");
}

void ABotPlayerController::BeginPlay()
{
	PlayerBot = Cast<ABot>(GetPawn());
	UUserWidget* ui = CreateWidget(this, PlayerUIClass);
	PlayerUI = Cast<UPlayerUI>(ui);
	if (PlayerUI) {
		PlayerUI->BindBot(PlayerBot);
		PlayerUI->AddToViewport();
		PlayerUI->ShowMessage(false);
	}
}

void ABotPlayerController::GameSet(FString message)
{
	if (GetPawn()) {
		ABot* bot = Cast<ABot>(GetPawn());
		bot->LockOff();
		bot->TickOff();
	}
	UnPossess();

	PlayerUI->SetMessage(message);
	PlayerUI->ShowMessage(true);
}

void ABotPlayerController::OnMissionUpdate()
{
	AMissionPoint* CurPoint = Cast<AMissionOperator>(UGameplayStatics::GetActorOfClass(GetWorld(), AMissionOperator::StaticClass()))->GetCurPoint();

	if (CurPoint && !CurPoint->IsInArea(Cast<ABot>(GetPawn()))) {
		FVector2D screenPos;
		ProjectWorldLocationToScreen(CurPoint->GetActorLocation(), screenPos, true);

		int ViewX, ViewY;
		GetViewportSize(ViewX, ViewY);

		screenPos.X = FMath::Clamp(screenPos.X, 0, ViewX) - (ViewX >> 1);
		screenPos.Y = FMath::Clamp(screenPos.Y, 0, ViewY) - (ViewY >> 1);

		PlayerUI->MissionPointOn(true);
		PlayerUI->SetMissionPointPos(screenPos);
	}
	else {
		PlayerUI->MissionPointOn(false);
	}
}
