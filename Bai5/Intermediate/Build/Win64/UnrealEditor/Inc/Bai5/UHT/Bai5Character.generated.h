// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bai5Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADeadBody;
#ifdef BAI5_Bai5Character_generated_h
#error "Bai5Character.generated.h already included, missing '#pragma once' in Bai5Character.h"
#endif
#define BAI5_Bai5Character_generated_h

#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_20_DELEGATE \
BAI5_API void FDestroyComponent_DelegateWrapper(const FMulticastScriptDelegate& DestroyComponent, ADeadBody* DeadBodyDes);


#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_21_DELEGATE \
BAI5_API void FEndDestroyComponent_DelegateWrapper(const FMulticastScriptDelegate& EndDestroyComponent, ADeadBody* EndDeadBodyDes);


#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerOnDead_Implementation(FVector Loc); \
	DECLARE_FUNCTION(execServerOnDead); \
	DECLARE_FUNCTION(execOnRep_IsDead);


#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_CALLBACK_WRAPPERS
#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABai5Character(); \
	friend struct Z_Construct_UClass_ABai5Character_Statics; \
public: \
	DECLARE_CLASS(ABai5Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bai5"), NO_API) \
	DECLARE_SERIALIZER(ABai5Character) \
	virtual UObject* _getUObject() const override { return const_cast<ABai5Character*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsGhost=NETFIELD_REP_START, \
		DeadLoc, \
		NETFIELD_REP_END=DeadLoc	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABai5Character(ABai5Character&&); \
	ABai5Character(const ABai5Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABai5Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABai5Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABai5Character) \
	NO_API virtual ~ABai5Character();


#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_24_PROLOG
#define FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_CALLBACK_WRAPPERS \
	FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_INCLASS_NO_PURE_DECLS \
	FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BAI5_API UClass* StaticClass<class ABai5Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
