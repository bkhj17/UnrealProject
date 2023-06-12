// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BotAnim.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API UBotAnim : public UAnimInstance
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly)
		bool bFalling;

	UPROPERTY(BlueprintReadOnly)
		bool bFlying;

	UPROPERTY(BlueprintReadOnly)
		float Rotation;

	UPROPERTY(BlueprintReadOnly)
		float Speed;
public:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	class ACharacter* character;
};
