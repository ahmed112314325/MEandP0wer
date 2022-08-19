// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MEandP0wer/Inventory/InventoryActor.h"
#include "MEandP0wer/Interactions/UsableActor.h"
#include "FPSCharacter.generated.h"

UCLASS()
class MEANDP0WER_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

	/** Use the actor currently in view (if derived from UsableActor) */
	UFUNCTION(BlueprintCallable, WithValidation, Server, Reliable, Category = PlayerAbility)
		virtual void Use();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// APawn interface

	/** Get actor derived from UsableActor currently looked at by the player */
	class AUsableActor* GetUsableInView();

	/* Max distance to use/focus on actors. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float MaxUseDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	int selectedItem;

	/* True only in first frame when focused on new usable actor. */
	bool bHasNewFocus;

	/* Actor derived from UsableActor currently in center-view. */
	AUsableActor* FocusedUsableActor;

	UFUNCTION(BlueprintImplementableEvent)
	void HoveringOnInteractable();


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AInventoryActor*> invItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isHoldingHeavy;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
