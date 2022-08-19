// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryActor.generated.h"



UCLASS()
class MEANDP0WER_API AInventoryActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInventoryActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> pickUpActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString displayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isHeavy;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
