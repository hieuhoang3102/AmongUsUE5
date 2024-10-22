// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GASController.h"

#include "Bai5/Bai5Character.h"

void AGASController::AcknowledgePossession(class APawn* P)
{
	Super::AcknowledgePossession(P);

	if (ABai5Character* CharacterBase = Cast<ABai5Character>(P))
	{
		CharacterBase->GetAbilitySystemComponent()->InitAbilityActorInfo(CharacterBase, CharacterBase);
	}
}
