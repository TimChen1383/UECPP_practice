// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Calculator.generated.h"

UCLASS()
class UECPP_PRACTICE_API ACalculator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACalculator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberB;

	UFUNCTION(BlueprintCallable)
	int32 AddCalculater();

	UFUNCTION(BlueprintCallable)
	int32 MinusCalculater();
	
	UFUNCTION(BlueprintCallable)
	int32 MultiplyCalculater();
};
