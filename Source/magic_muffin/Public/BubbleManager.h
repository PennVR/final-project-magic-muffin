// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BubbleManager.generated.h"
//#include "Math.h"

UCLASS()
class MAGIC_MUFFIN_API ABubbleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABubbleManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bubble Settings")
	float radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Bubble Settings")
	float spawnFrequency;

	UFUNCTION(BlueprintCallable, Category = "Bubble Settings")
	void spawnBubble(); 

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bubble Settings")
	UClass *bubbleClass;

	/* Handle to manage the timer */
	FTimerHandle SpawnTimerHandle;
	
};
