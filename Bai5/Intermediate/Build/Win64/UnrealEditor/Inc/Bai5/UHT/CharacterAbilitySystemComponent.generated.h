// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/Abilities/CharacterAbilitySystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCharacterAbilitySystemComponent;
#ifdef BAI5_CharacterAbilitySystemComponent_generated_h
#error "CharacterAbilitySystemComponent.generated.h already included, missing '#pragma once' in CharacterAbilitySystemComponent.h"
#endif
#define BAI5_CharacterAbilitySystemComponent_generated_h

#define FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_9_DELEGATE \
BAI5_API void FReceiveDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceiveDamageDelegate, UCharacterAbilitySystemComponent* SourceASC, float UnmitigateDamage, float MitigateDamage);


#define FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAbilitySystemComponent(); \
	friend struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterAbilitySystemComponent, UAbilitySystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bai5"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAbilitySystemComponent)


#define FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterAbilitySystemComponent(UCharacterAbilitySystemComponent&&); \
	UCharacterAbilitySystemComponent(const UCharacterAbilitySystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAbilitySystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAbilitySystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterAbilitySystemComponent) \
	NO_API virtual ~UCharacterAbilitySystemComponent();


#define FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_11_PROLOG
#define FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BAI5_API UClass* StaticClass<class UCharacterAbilitySystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
