// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "DelayExplosion.generated.h"

UCLASS()
class UECPP_PRACTICE_API ADelayExplosion : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADelayExplosion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere)
	int32 DelayTime;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* MyParticle;

	UFUNCTION()
	void Explosion();

};
