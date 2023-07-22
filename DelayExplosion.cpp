// Fill out your copyright notice in the Description page of Project Settings.

#include "DelayExplosion.h"


// Sets default values
ADelayExplosion::ADelayExplosion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FTimerHandle Handle;
	DelayTime = 0;

}

// Called when the game starts or when spawned
void ADelayExplosion::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle Handle;
	GetWorld()->GetTimerManager().SetTimer(Handle, this, &ADelayExplosion::Explosion,1.0f, true, 0.0);

	
}

// Called every frame
void ADelayExplosion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADelayExplosion::Explosion()
{
	if(DelayTime != 0)
	{
		DelayTime -= 1;
		FString DelayTimeString = FString::SanitizeFloat(DelayTime);
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Yellow, *DelayTimeString);	
	}
	else
	{
		UGameplayStatics::SpawnEmitterAtLocation(this->GetWorld(), MyParticle, GetActorTransform());
	}

}