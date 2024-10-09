// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/DemoCharacterBase.h"
#include "Character/Abilities/CharacterAbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"


// Sets default values
ADemoCharacterBase::ADemoCharacterBase(const class FObjectInitializer& ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Overlap);
	
	bAlwaysRelevant = true;
	
	DeadTag = FGameplayTag::RequestGameplayTag(FName("State.Dead"));
	EffectRemoveOnDeathTag = FGameplayTag::RequestGameplayTag(FName("State.RemoveOnDeath"));
}

UAbilitySystemComponent* ADemoCharacterBase::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent.Get();
}

bool ADemoCharacterBase::IsAlive() const
{
	return GetHealth() > 0.0f;
}

int32 ADemoCharacterBase::GetAbilityLevel(DemoAbilitiesID AbilityID) const
{
	return 1;
}

void ADemoCharacterBase::RemoveCharacterAbilities()
{
	if (GetLocalRole() != ROLE_Authority || !AbilitySystemComponent.IsValid() || !AbilitySystemComponent->CharacterAbilitiesGiven)
	{
		return;
	}
}

// Called when the game starts or when spawned
void ADemoCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADemoCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ADemoCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}



