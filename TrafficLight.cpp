// Fill out your copyright notice in the Description page of Project Settings.


#include "TrafficLight.h"

// Sets default values
ATrafficLight::ATrafficLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
}

// Called when the game starts or when spawned
void ATrafficLight::BeginPlay()
{
	Super::BeginPlay();
	MyMesh->SetMaterial(0, GreenLight);
}

// Called every frame
void ATrafficLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TimeCounter += DeltaTime;

	if (TimeCounter >= TimeToChange)
	{
		TimeCounter = 0.0f;
		if (ChangeToGreen)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Chage to red light"));
			ChangeToGreen = false;
			MyMesh->SetMaterial(0, RedLight);
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Chage to green light"));
			ChangeToGreen = true;
			MyMesh->SetMaterial(0, GreenLight);
		}
	}

}

