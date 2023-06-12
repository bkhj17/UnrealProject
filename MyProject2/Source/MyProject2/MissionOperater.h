// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionOperater.generated.h"

/**
 * 
 */
DECLARE_DELEGATE(MissionClearDelegate);


UCLASS()
class MYPROJECT2_API AMissionOperator : public AActor
{
	GENERATED_BODY()
public:
	void PointClear();

	UFUNCTION(BlueprintCallable)
	class AMissionPoint* GetCurPoint() { return CurPoint >= Points.Num() ? nullptr : Points[CurPoint]; }

protected:
	void BeginPlay();

protected:
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
	TArray<AMissionPoint*> Points;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int CurPoint;
public:
	MissionClearDelegate MissionClear;
};
