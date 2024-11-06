// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Public/Character/GASController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASController() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_AGASController();
BAI5_API UClass* Z_Construct_UClass_AGASController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Class AGASController
void AGASController::StaticRegisterNativesAGASController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASController);
UClass* Z_Construct_UClass_AGASController_NoRegister()
{
	return AGASController::StaticClass();
}
struct Z_Construct_UClass_AGASController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Character/GASController.h" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefautMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/GASController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefautMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_DefautMappingContext = { "DefautMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, DefautMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefautMappingContext_MetaData), NewProp_DefautMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGASController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_DefautMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASController_Statics::NewProp_MoveAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGASController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASController_Statics::ClassParams = {
	&AGASController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGASController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASController_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGASController()
{
	if (!Z_Registration_Info_UClass_AGASController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASController.OuterSingleton, Z_Construct_UClass_AGASController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGASController.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<AGASController>()
{
	return AGASController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASController);
AGASController::~AGASController() {}
// End Class AGASController

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Public_Character_GASController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASController, AGASController::StaticClass, TEXT("AGASController"), &Z_Registration_Info_UClass_AGASController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASController), 1144490171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Public_Character_GASController_h_4039030601(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
