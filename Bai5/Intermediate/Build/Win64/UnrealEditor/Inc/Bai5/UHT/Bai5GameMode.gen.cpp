// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Bai5GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBai5GameMode() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_ABai5GameMode();
BAI5_API UClass* Z_Construct_UClass_ABai5GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Class ABai5GameMode
void ABai5GameMode::StaticRegisterNativesABai5GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABai5GameMode);
UClass* Z_Construct_UClass_ABai5GameMode_NoRegister()
{
	return ABai5GameMode::StaticClass();
}
struct Z_Construct_UClass_ABai5GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Bai5GameMode.h" },
		{ "ModuleRelativePath", "Bai5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABai5GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABai5GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABai5GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABai5GameMode_Statics::ClassParams = {
	&ABai5GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABai5GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABai5GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABai5GameMode()
{
	if (!Z_Registration_Info_UClass_ABai5GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABai5GameMode.OuterSingleton, Z_Construct_UClass_ABai5GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABai5GameMode.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<ABai5GameMode>()
{
	return ABai5GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABai5GameMode);
ABai5GameMode::~ABai5GameMode() {}
// End Class ABai5GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABai5GameMode, ABai5GameMode::StaticClass, TEXT("ABai5GameMode"), &Z_Registration_Info_UClass_ABai5GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABai5GameMode), 1091381910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5GameMode_h_1691565236(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_UnrealEngine_AmongUsUE5_Bai5_Source_Bai5_Bai5GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
