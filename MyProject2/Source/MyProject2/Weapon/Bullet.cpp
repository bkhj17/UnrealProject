// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Weapon.h"
#include "Components/ShapeComponent.h"
#include "kismet/KismetSystemLibrary.h"
#include "kismet/GameplayStatics.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "../Character/Unit.h"

// Sets default values
ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = true;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Movement = CreateDefaultSubobject<UProjectileMovementComponent>("Movement");
}

void ABullet::SetActive(bool Active)
{
	bActive = Active;
	SetActorHiddenInGame(!Active);
	SetActorTickEnabled(Active);
	SetActorEnableCollision(Active);
	Movement->SetActive(Active);
	if (Active) {
		Movement->RecreatePhysicsState();
		Movement->Velocity = GetActorForwardVector() * Movement->InitialSpeed;
		UKismetSystemLibrary::K2_SetTimer(this, "Inactive", range / Movement->InitialSpeed, false);
	}
}

void ABullet::Shot(const FTransform& transform, float inputRange)
{
	this->range = inputRange;
	SetActorTransform(transform);
	SetActive(true);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();

	Weapon = Cast<AWeapon>(GetOwner());

	Collider = Cast<UShapeComponent>(GetComponentByClass(UShapeComponent::StaticClass()));
	Collider->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnHitBeginOverlap);
	Collider->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;

	SetActive(false);
}

void ABullet::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResultprivate)
{
	if (OtherActor == nullptr) return;
	if (OtherActor == Weapon || OtherActor == Weapon->GetOwner()) return;

	UGameplayStatics::ApplyDamage(OtherActor, Weapon->GetPower(), Cast<ACharacter>(Weapon->GetOwner())->GetController(), Weapon->GetOwner(), nullptr);

	TSubclassOf<UDamageType> const ValidDamageTypeClass = TSubclassOf<UDamageType>(UDamageType::StaticClass());
//	FDamageEvent DamageEvent(ValidDamageTypeClass);
//	OtherActor->TakeDamage(Weapon->GetPower(), DamageEvent, Cast<ACharacter>(Weapon->GetOwner())->GetController(), Weapon->GetOwner());

	if(HitEffect)
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, GetActorTransform());
	SetActive(false);
}
