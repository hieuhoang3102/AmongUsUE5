// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GASController.h"
#include "AbilitySystemComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Bai5/Bai5Character.h"

class UEnhancedInputComponent;

AGASController::AGASController(): DefautMappingContext(nullptr), MoveAction(nullptr), bMoveToMouseCursor(1)
{
	bShowMouseCursor = true;
}

void AGASController::AcknowledgePossession(class APawn* P)
{
	Super::AcknowledgePossession(P);

	if (ABai5Character* CharacterBase = Cast<ABai5Character>(P))
	{
		CharacterBase->GetAbilitySystemComponent()->InitAbilityActorInfo(CharacterBase, CharacterBase);
	}
}

void AGASController::OnMove(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	// find out which way is forward
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// get forward vector
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	// get right vector 
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	// add movement 
	GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
	GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
}

void AGASController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefautMappingContext, 0);
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Started, this, &AGASController::OnMove);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGASController::OnMove);
	}
}
