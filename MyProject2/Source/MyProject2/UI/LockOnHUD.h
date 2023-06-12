// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LockOnHUD.generated.h"

class AUnit;

UCLASS()
class MYPROJECT2_API ABotHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void DrawHUD() override;
	
	UFUNCTION(BlueprintCallable)
	void LockOn(AUnit* unit) { lockedOn = unit; }

	void SetMissionOper(class UMissionOperator* oper) { MissionOper = oper; }
protected:	
	void DrawCrossHair();
	void DrawMissionPoint();
protected:
	AUnit* lockedOn = nullptr;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		class UTexture2D* CrossHair;
	
	UMissionOperator* MissionOper;
};
