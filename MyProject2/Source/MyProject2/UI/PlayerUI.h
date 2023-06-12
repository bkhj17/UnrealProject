// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerUI.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UPlayerUI : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void BindBot(class ABot* bot);

	void MissionPointOn(bool bOn);
	void SetMissionPointPos(const FVector2D& screenPos);

	void ShowMessage(bool bOn);
	void SetMessage(FString message);
protected:
	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
	ABot* PlayerBot;

	class UHPWidget* HPWidget;
	UHPWidget* BoosterWidget;

	class UUserWidget* MissionPoint;

	class UTextBlock* Message;
};
