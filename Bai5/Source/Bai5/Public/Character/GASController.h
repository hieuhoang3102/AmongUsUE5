// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GASController.generated.h"

/**
 * 
 */
UCLASS()
class BAI5_API AGASController : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void AcknowledgePossession(class APawn* P) override;
};
