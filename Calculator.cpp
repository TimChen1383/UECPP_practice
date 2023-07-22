// Fill out your copyright notice in the Description page of Project Settings.


#include "Calculator.h"

// Sets default values
ACalculator::ACalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	NumberA = 0;
	NumberB = 0;
}

// Called when the game starts or when spawned
void ACalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ACalculator::AddCalculater()
{
	return NumberA + NumberB;
}

int32 ACalculator::MinusCalculater()
{
	return NumberA - NumberB;
}

int32 ACalculator::MultiplyCalculater()
{
	return NumberA * NumberB;
}