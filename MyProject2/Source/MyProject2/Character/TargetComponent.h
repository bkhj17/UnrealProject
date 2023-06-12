// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TargetComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT2_API UTargetComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTargetComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void SearchEnemies();

public:	
	void LockOn();
	void LockOff();

	class AUnit* GetLockedOn() { return LockedOn; }
	const TArray<AUnit*>& GetEnemies() { return Enemies; }
protected:
	AUnit* Owner = nullptr;
	AUnit* LockedOn = nullptr;

	UPROPERTY(VisibleDefaultsOnly)
	TArray<AUnit*> Enemies;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float LockOnRange = 10000.0f;
};
