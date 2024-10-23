// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "GASController.generated.h"
struct FInputActionValue;

class UInputMappingContext;
class UInputAction;
/**
 * 
 */
UCLASS()
class BAI5_API AGASController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AGASController();
	virtual void AcknowledgePossession(class APawn* P) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefautMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	void OnMove(const FInputActionValue& Value);
	virtual void SetupInputComponent() override;

	uint32 bMoveToMouseCursor : 1;
};
