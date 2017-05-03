// Fill out your copyright notice in the Description page of Project Settings.

#include "magic_muffin.h"
#include "BubbleManager.h"


// Sets default values
ABubbleManager::ABubbleManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	radius = 1000.0;
	spawnFrequency = 10.0;
}

// Called when the game starts or when spawned
void ABubbleManager::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(SpawnTimerHandle, this, &ABubbleManager::spawnBubble, 5.0f, true, 0.2f);

}

// Called every frame
void ABubbleManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Spawns bubbles randomly within defined radius
void ABubbleManager::spawnBubble()
{
	float step = FMath::RandRange(50.f, radius);
	float randAngle = FMath::RandRange(0.f, 360.f);
	float randHeight = FMath::RandRange(250.f, 700.f);
	FVector spawnLocation = FVector(step*FMath::Cos(randAngle), step*FMath::Sin(randAngle), randHeight);

	FActorSpawnParameters params;
	params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	AActor* ResultPawn = GetWorld()->SpawnActor(bubbleClass, &spawnLocation, &FRotator::ZeroRotator, params);
}

