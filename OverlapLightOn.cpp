// Fill out your copyright notice in the Description page of Project Settings.


#include "OverlapLightOn.h"

#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AOverlapLightOn::AOverlapLightOn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("My Scene Component"));
	MySphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("My Sphere Collision"));
	MySphereCollision->SetupAttachment(MySceneComponent);
	MySphereCollision->SetSphereRadius(900);
	MySphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AOverlapLightOn::SphereOverlap);

	MyPointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("My Point Light"));
	MyPointLight->SetupAttachment(MySceneComponent);
	MyPointLight->SetIntensity(0);

}

// Called when the game starts or when spawned
void AOverlapLightOn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOverlapLightOn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AOverlapLightOn::SphereOverlap(UPrimitiveComponent* OnComponentBeginOverlap, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Light Trun On!"));
	MyPointLight->SetIntensity(3000);

}
