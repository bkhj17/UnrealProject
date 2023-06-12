// Fill out your copyright notice in the Description page of Project Settings.


#include "HPWidget.h"

void UHPWidget::SetPercent(float CurParam, float MaxParam)
{
	Percent = FMath::Clamp(CurParam / MaxParam, 0.0f, 1);
}

void UHPWidget::MaxInvisible()
{
	SetVisibility(1 - Percent > FLT_EPSILON ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}
