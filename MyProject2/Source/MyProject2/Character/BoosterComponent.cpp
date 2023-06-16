// Fill out your copyright notice in the Description page of Project Settings.


#include "BoosterComponent.h"
#include "Unit.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "kismet/KismetSystemLibrary.h"
#include "kismet/GameplayStatics.h"

// Sets default values for this component's properties
UBoosterComponent::UBoosterComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UBoosterComponent::BeginPlay()
{
	Super::BeginPlay();

	bBoost = false;

	CurVolume = MaxVolume;
	dBoosterUpdate.ExecuteIfBound(CurVolume, MaxVolume);

	Owner = Cast<AUnit>(GetOwner());
	
	if (BoosterEffect != nullptr) {
		BoosterEffectComponent = UGameplayStatics::SpawnEmitterAttached(BoosterEffect, Owner->GetMesh(), "Booster");
		BoosterEffectComponent->SetHiddenInGame(true);
	}
}

void UBoosterComponent::BoostOnOff(bool bOn)
{
	bBoost = bOn;
	if (BoosterEffectComponent != nullptr)
		BoosterEffectComponent->SetHiddenInGame(!bOn);
}

// Called every frame
void UBoosterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (Owner == nullptr)
		return;

	if (CurVolume <= 0.0f || (IsBoosting() && Owner->GetMovementComponent()->GetLastInputVector().Size() == 0))
		BoostOff();

	float required = 0.0f;
	if(IsFloating())
		required += FloatingDemand;
	if (bBoost)
		required += BoostDemand;

	if (required > 0.0f)
		CurVolume -= required * DeltaTime;
	else
		CurVolume += recovery * DeltaTime;

	CurVolume = FMath::Clamp(CurVolume, 0.0f, MaxVolume);
	dBoosterUpdate.ExecuteIfBound(CurVolume, MaxVolume);
}

bool UBoosterComponent::IsFloating()
{
	return Owner ? Owner->GetMovementComponent()->IsFlying() : false;
}

void UBoosterComponent::BoostOn()
{
	BoostOnOff(true);
}

void UBoosterComponent::BoostOff() 
{ 
	BoostOnOff(false);
}

