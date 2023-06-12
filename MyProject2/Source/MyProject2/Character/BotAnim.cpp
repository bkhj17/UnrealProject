// Fill out your copyright notice in the Description page of Project Settings.


#include "BotAnim.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UBotAnim::NativeBeginPlay()
{	
	Super::NativeBeginPlay();

	character = Cast<ACharacter>(TryGetPawnOwner());
}

void UBotAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!character)
		return;

	bFalling = character->GetCharacterMovement()->IsFalling();
	bFlying = character->GetCharacterMovement()->IsFlying();

	Speed = character->GetVelocity().Size2D();
	Rotation = CalculateDirection(character->GetVelocity(), character->GetControlRotation());
}
