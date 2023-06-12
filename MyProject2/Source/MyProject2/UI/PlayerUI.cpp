// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerUI.h"
#include "../Character/Bot.h"
#include "../UI/HPWidget.h"
#include "../Character/BoosterComponent.h"
#include "../Character/StatusComponent.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanelSlot.h"


void UPlayerUI::BindBot(ABot* bot)
{
	PlayerBot = bot;
	BoosterWidget = Cast<UHPWidget>(GetWidgetFromName("Booster"));
	if (BoosterWidget) {
		UBoosterComponent* botBooster = Cast<UBoosterComponent>(PlayerBot->GetComponentByClass(UBoosterComponent::StaticClass()));
		if (botBooster)
			botBooster->dBoosterUpdate.BindUObject(BoosterWidget, &UHPWidget::Update);
	}

	HPWidget = Cast<UHPWidget>(GetWidgetFromName("HP"));
	if (HPWidget) {
		UStatusComponent* botStatus = Cast<UStatusComponent>(PlayerBot->GetComponentByClass(UStatusComponent::StaticClass()));
		if (botStatus)
			botStatus->dHpUpdate.BindUObject(HPWidget, &UHPWidget::Update);
	}

	MissionPoint = Cast<UUserWidget>(GetWidgetFromName("MissionPoint"));

	Message = Cast<UTextBlock>(GetWidgetFromName("Message"));
}

void UPlayerUI::MissionPointOn(bool bOn)
{
	if(MissionPoint)
		MissionPoint->SetVisibility(bOn ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void UPlayerUI::SetMissionPointPos(const FVector2D& screenPos)
{
	if (MissionPoint) {		
		UCanvasPanelSlot* S = Cast<UCanvasPanelSlot>(MissionPoint->Slot);
		S->SetPosition(screenPos);
	}
}

void UPlayerUI::ShowMessage(bool bOn)
{
	Message->SetVisibility(bOn ? ESlateVisibility::Visible : ESlateVisibility::Hidden);
}

void UPlayerUI::SetMessage(FString message)
{
	Message->SetText(FText::FromString(message));
}
