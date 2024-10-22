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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
AGASController::AGASController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGASController);
AGASController::~AGASController() {}
// End Class AGASController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_GASController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGASController, AGASController::StaticClass, TEXT("AGASController"), &Z_Registration_Info_UClass_AGASController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASController), 3137660141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_GASController_h_2719961870(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_GASController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
