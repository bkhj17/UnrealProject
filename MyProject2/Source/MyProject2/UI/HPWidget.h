// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HPWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UHPWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	void Update(float CurParam, float MaxParam);

protected:
	UFUNCTION(BlueprintCallable)
	void SetPercent(float CurParam, float MaxParam);

	UFUNCTION(BlueprintCallable)
	void MaxInvisible();
protected:
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly)
	float Percent;
};
