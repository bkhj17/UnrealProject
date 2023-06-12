// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BotPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API ABotPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ABotPlayerController();

	virtual void Tick(float DeltaSeconds);

	UFUNCTION(BlueprintCallable)
	void Win();
	UFUNCTION(BlueprintCallable)
	void Lose();
protected:
	virtual void BeginPlay() override;

	void GameSet(FString message);
protected:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSubclassOf<class UPlayerUI> PlayerUIClass;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
	class ABot* PlayerBot;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly)
	UPlayerUI* PlayerUI;

	void OnMissionUpdate();


};
