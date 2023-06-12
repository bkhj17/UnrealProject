// Fill out your copyright notice in the Description page of Project Settings.


#include "StatusComponent.h"
#include "Unit.h"

void UStatusComponent::Damaged(float power)
{
	power = FMath::Max(1.0f, power - defense);
	curHP = FMath::Clamp<float>(curHP - power, 0.0f, maxHP);
	dHpUpdate.ExecuteIfBound(curHP, maxHP);
	if (curHP <= 0.0f)
		Cast<AUnit>(GetOwner())->Death();
	
}

// Called when the game starts
void UStatusComponent::BeginPlay()
{
	Super::BeginPlay();

	curHP = maxHP;
	dHpUpdate.ExecuteIfBound(curHP, maxHP);
}


