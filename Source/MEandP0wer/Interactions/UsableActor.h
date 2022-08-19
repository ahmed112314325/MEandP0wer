// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "UsableActor.generated.h"

/**
 * 
 */
UCLASS()
class MEANDP0WER_API AUsableActor : public AStaticMeshActor
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent)
	bool OnUsed(ACharacter* character);

	UFUNCTION(BlueprintImplementableEvent)
		bool StartFocusItem();

	UFUNCTION(BlueprintImplementableEvent)
		bool EndFocusItem();
};
