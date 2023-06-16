// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BoosterComponent.generated.h"

DECLARE_DELEGATE_TwoParams(BoosterUpdateDelegate, float, float);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT2_API UBoosterComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBoosterComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void BoostOnOff(bool bOn);
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
		bool IsFloating();

	UFUNCTION(BlueprintCallable)
	bool IsBoosting() { return bBoost; }

	UFUNCTION(BlueprintCallable)
	float GetMaxVolume() { return MaxVolume; }

	UFUNCTION(BlueprintCallable)
	float GetCurVolume() { return CurVolume; }

	UFUNCTION(BlueprintCallable)
	float GetSpeed() { return bBoost ? BoostSpeed : MoveSpeed; }

	UFUNCTION(BlueprintCallable)
	void BoostOn();

	UFUNCTION(BlueprintCallable)
	void BoostOff();

protected:
	class AUnit* Owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxVolume = 10.0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurVolume;
		
	bool bBoost = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FloatingDemand = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoostDemand = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float recovery = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MoveSpeed = 0.3f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BoostSpeed = 1.0f;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		FName boosterSocket;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
		class UParticleSystem* BoosterEffect;

	class UParticleSystemComponent* BoosterEffectComponent;

public:
	BoosterUpdateDelegate dBoosterUpdate;
};
