// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OverlapLightOn.generated.h"

UCLASS()
class UECPP_PRACTICE_API AOverlapLightOn : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOverlapLightOn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float LightIntensity;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USceneComponent* MySceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UPointLightComponent* MyPointLight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class USphereComponent* MySphereCollision;

	UFUNCTION()
	void SphereOverlap(UPrimitiveComponent* OnComponentBeginOverlap, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
