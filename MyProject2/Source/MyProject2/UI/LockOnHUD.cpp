// Fill out your copyright notice in the Description page of Project Settings.


#include "LockOnHUD.h"
#include "../Character/Unit.h"
#include "Engine/Texture2D.h"
#include "Engine/Canvas.h"
#include "Blueprint/UserWidget.h"
#include "../MissionOperater.h"
#include "../AI/MissionPoint.h"

void ABotHUD::DrawHUD()
{
	DrawCrossHair();
}

void ABotHUD::DrawCrossHair()
{
	if (CrossHair == nullptr) return;

	FVector2D screenPos;

	if (!lockedOn)
		return;

	GetOwningPlayerController()->ProjectWorldLocationToScreen(lockedOn->GetActorLocation(), screenPos);

	screenPos.X -= CrossHair->GetSizeX() * 0.5f;
	screenPos.Y -= CrossHair->GetSizeY() * 0.5f;

	FCanvasTileItem item(screenPos, CrossHair->GetResource(), FLinearColor::White);
	item.BlendMode = SE_BLEND_Translucent;

	Canvas->DrawItem(item);
}

void ABotHUD::DrawMissionPoint()
{
}
