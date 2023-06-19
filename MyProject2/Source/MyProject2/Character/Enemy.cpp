// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "StatusComponent.h"
#include "../AI/MissionPoint.h"
#include "../AI/AIEnemyController.h"
#include "../UI/HPWidget.h"
#include "kismet/KismetMathLibrary.h"
#include "Components/WidgetComponent.h"

AEnemy::AEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	HPBarWidget = CreateDefaultSubobject<UWidgetComponent>("HPBarUI");
	HPBarWidget->SetupAttachment(GetMesh());
}

void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	UpdateHPWidget();
}

void AEnemy::UpdateHPWidget()
{
	UHPWidget* widget = Cast<UHPWidget>(HPBarWidget->GetWidget());
	if(widget)
		widget->Update(Status->GetCurHP(), Status->GetMaxHP());
	HPBarWidget->SetVisibility(Status->GetCurHP() < Status->GetMaxHP());
}

FVector AEnemy::GetCenterPoint()
{
	return MissionPoint ? MissionPoint->GetActorLocation() : GetActorLocation();
}

float AEnemy::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	UpdateHPWidget();

	AAIEnemyController* controller = Cast<AAIEnemyController>(GetController());
	controller->StopMovement();
		
	FRotator rot = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), DamageCauser->GetActorLocation());
	rot.Roll = 0.0f;
	SetActorRotation(rot.Quaternion());

	if(target == nullptr)
		SetTarget(Cast<AUnit>(DamageCauser));

	return damage;
}

void AEnemy::Death()
{
	Super::Death();
	//MissionPoint¿¡ »ç¸Á ¾Ë¸²
	if (MissionPoint != nullptr)
		MissionPoint->UnitDead();
}
