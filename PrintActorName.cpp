// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintActorName.h"

// Sets default values
APrintActorName::APrintActorName()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//ini the array to be 0
	FoundActors = {};
}

// Called when the game starts or when spawned
void APrintActorName::BeginPlay()
{
	Super::BeginPlay();
	
	//put array parameter in the argument
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APrintActorName::StaticClass(), FoundActors);
	AActor* Actor;
	FString ActorName;
	for (int i = 0; i < FoundActors.Num(); i++)
	{
			Actor = FoundActors[i];
			ActorName = Actor->GetName();
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, ActorName);
	}
}

// Called every frame
void APrintActorName::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

