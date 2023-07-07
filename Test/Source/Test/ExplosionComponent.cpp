// Fill out your copyright notice in the Description page of Project Settings.


#include "ExplosionComponent.h"

// Sets default values for this component's properties
UExplosionComponent::UExplosionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UExplosionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UExplosionComponent::Explosion()
{
	//폭발
	//폭발 이펙트 출현
	//주변 물체에 임펄스
		//폭발 범위는 어떻게 잡지?
		//1. 벽 무시하고 그냥 반경 - 구현은 편함. 그냥 반경만 계산하면 됨. 수많은 버그를 발생시킬 수 있음
		//2. 경로탐색을 통한 영역 계산 - 
		//3. 
	//물체 비활성화




}

