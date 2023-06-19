// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetComponent.h"
#include "Unit.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../UI/LockOnHUD.h"

// Sets default values for this component's properties
UTargetComponent::UTargetComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	// ...
}


// Called when the game starts
void UTargetComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Owner = Cast<AUnit>(GetOwner());
	LockedOn = false;
	Enemies.Empty();
}

void UTargetComponent::LockOn()
{
	if (Owner == nullptr)
		return;

	if (LockedOn)
		LockedOn = nullptr;
	else {
		SearchEnemies();
		if (!Enemies.IsEmpty())
			LockedOn = Enemies[0];
	}

	ABotHUD* lhud = Cast<ABotHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (lhud)
		lhud->LockOn(LockedOn);
}

void UTargetComponent::LockOff()
{
	LockedOn = nullptr;

	ABotHUD* lhud = Cast<ABotHUD>(UGameplayStatics::GetPlayerController(this, 0)->GetHUD());
	if (lhud)
		lhud->LockOn(nullptr);
}

void UTargetComponent::SearchEnemies()
{
	if (LockedOn && LockedOn->IsDead())
		LockedOn = nullptr;
	TArray<AActor*, FDefaultAllocator> AllEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AUnit::StaticClass(), AllEnemies);
	APlayerController* controller = Cast<APlayerController>(Owner->GetController());

	Enemies.Empty();

	int ViewX, ViewY;
	controller->GetViewportSize(ViewX, ViewY);

	for (auto actor : AllEnemies) {
		AUnit* enemy = Cast<AUnit>(actor);
		if (!enemy)
			continue;
		if (enemy == Owner)
			continue;
		if (enemy->IsHidden())
			continue;

		if (Owner->GetDistanceTo(enemy) > LockOnRange)
			continue;

		FVector2D screenPos;
		controller->ProjectWorldLocationToScreen(enemy->GetActorLocation(), screenPos);
		if (screenPos.X < 0 || screenPos.Y < 0 || screenPos.X > ViewX || screenPos.Y > ViewY)
			continue;

		Enemies.Push(enemy);
	}

	int CenterX = ViewX / 2;
	int CenterY = ViewY / 2;

	Enemies.Sort([this, controller, CenterX, CenterY](const AUnit& l, const AUnit& r) {
		FVector2D lScreenPos;
		controller->ProjectWorldLocationToScreen(l.GetActorLocation(), lScreenPos);
		double lDist = FMath::Abs(lScreenPos.X - CenterX) + FMath::Abs(lScreenPos.Y - CenterY);

		FVector2D rScreenPos;
		controller->ProjectWorldLocationToScreen(r.GetActorLocation(), rScreenPos);
		double rDist = FMath::Abs(rScreenPos.X - CenterX) + FMath::Abs(rScreenPos.Y - CenterY);

		return lDist < rDist;
	});
}

