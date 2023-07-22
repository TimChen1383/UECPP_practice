// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrafficLight.generated.h"

UCLASS()
class UECPP_PRACTICE_API ATrafficLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrafficLight();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	float TimeCounter = 0.0f;

	UPROPERTY(EditAnywhere)
	float TimeToChange = 8.0f;

	UPROPERTY(VisibleAnywhere)
	bool ChangeToGreen = true;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MyMesh;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* RedLight;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* GreenLight;

};
