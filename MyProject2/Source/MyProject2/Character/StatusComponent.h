// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatusComponent.generated.h"

DECLARE_DELEGATE_TwoParams(HPUpdateDelegate, float, float);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT2_API UStatusComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Name = L"NoName";

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float maxHP = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float curHP;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float defense;
public:	

	FORCEINLINE const FString& GetName() { return Name; }
	FORCEINLINE const float& GetMaxHP() { return maxHP; }
	FORCEINLINE const float& GetCurHP() { return curHP; }
	FORCEINLINE const float& GetDefense() { return curHP; }

	void Damaged(float power);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	HPUpdateDelegate dHpUpdate;
};
