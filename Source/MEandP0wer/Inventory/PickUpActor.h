// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MEandP0wer/Interactions/UsableActor.h"
#include "PickUpActor.generated.h"

/**
 * 
 */
UCLASS()
class MEANDP0WER_API APickUpActor : public AUsableActor
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> inventoryActor;

	
};
