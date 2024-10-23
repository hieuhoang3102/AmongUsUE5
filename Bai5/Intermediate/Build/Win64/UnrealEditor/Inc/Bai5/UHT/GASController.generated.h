// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/GASController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BAI5_GASController_generated_h
#error "GASController.generated.h already included, missing '#pragma once' in GASController.h"
#endif
#define BAI5_GASController_generated_h

#define FID_Bai5_Source_Bai5_Public_Character_GASController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGASController(); \
	friend struct Z_Construct_UClass_AGASController_Statics; \
public: \
	DECLARE_CLASS(AGASController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bai5"), NO_API) \
	DECLARE_SERIALIZER(AGASController)


#define FID_Bai5_Source_Bai5_Public_Character_GASController_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGASController(AGASController&&); \
	AGASController(const AGASController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGASController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGASController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGASController) \
	NO_API virtual ~AGASController();


#define FID_Bai5_Source_Bai5_Public_Character_GASController_h_16_PROLOG
#define FID_Bai5_Source_Bai5_Public_Character_GASController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Bai5_Source_Bai5_Public_Character_GASController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Bai5_Source_Bai5_Public_Character_GASController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BAI5_API UClass* StaticClass<class AGASController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Bai5_Source_Bai5_Public_Character_GASController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
