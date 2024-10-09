// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "Bai5/Bai5.h"
#include "GameplayTagContainer.h"
#include "DemoCharacterBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParams(FCharacterDiedDelegate, ADemoCharacterBase*, character);

UCLASS()
class BAI5_API ADemoCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADemoCharacterBase(const class FObjectInitializer& ObjectInitializer);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UPROPERTY(BlueprintAssignable, Category="Demo|Character")
	FCharacterDiedDelegate OnCharacterDied;

	UPROPERTY(BlueprintAssignable, Category="Demo|Character")
	virtual bool IsAlive() const; 

	UPROPERTY(BlueprintAssignable, Category="Demo|Character")
	virtual int32 GetAbilityLevel(DemoAbilitiesID AbilityID) const;

	virtual void RemoveCharacterAbilities();

	virtual void Die();

	UFUNCTION(BlueprintCallable, Category="Demo|Character")
	virtual void FinishDying();

	UFUNCTION(BlueprintCallable, Category="Demo|Character")
	float GetHealth() const;
	
	UFUNCTION(BlueprintCallable, Category="Demo|Character")
	float GetMaxHealth() const;
	
	UFUNCTION(BlueprintCallable, Category="Demo|Character")
	float GetMana() const;
	
	UFUNCTION(BlueprintCallable, Category="Demo|Character")
	float GetMaxMana() const;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TWeakObjectPtr<class UCharacterAbilitySystemComponent> AbilitySystemComponent;
	TWeakObjectPtr<class ChracterAttributeSetBase> AttributeSetBase;

	FGameplayTag DeadTag;
	FGameplayTag EffectRemoveOnDeathTag;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, category = " Demo|Character")
	FText CharacterName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, category = " Demo|Animation")
	FAnminMontage* DeathMontage;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, category = " Demo|Abilities")
	TSubclassOf<class UGameplayEffect> DefaultAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, category = " Demo|Abilities")
	TArray<class UGameplayEffect> StarupEffects;

	virtual void AddCharacterAbilities();

	virtual void InitializeAttributes();

	virtual void AddStarupEffects();

	virtual void SetHealth(float Health);
	
	virtual void SetMana(float Mana);
public:
	
};
