// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MissionPoint.generated.h"

UCLASS()
class MYPROJECT2_API AMissionPoint : public AActor
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	int GetNumOfAliveUnits();

	UFUNCTION(BlueprintCallable)
	bool IsInArea(class AUnit* unit);

	void UnitDead();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<AUnit*> Units;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AreaRadius = 5000.0f;
};
