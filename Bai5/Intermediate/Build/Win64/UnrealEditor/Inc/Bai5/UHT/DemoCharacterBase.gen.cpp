// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Public/Character/DemoCharacterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoCharacterBase() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_ADemoCharacterBase();
BAI5_API UClass* Z_Construct_UClass_ADemoCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Class ADemoCharacterBase
void ADemoCharacterBase::StaticRegisterNativesADemoCharacterBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADemoCharacterBase);
UClass* Z_Construct_UClass_ADemoCharacterBase_NoRegister()
{
	return ADemoCharacterBase::StaticClass();
}
struct Z_Construct_UClass_ADemoCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/DemoCharacterBase.h" },
		{ "ModuleRelativePath", "Public/Character/DemoCharacterBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADemoCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADemoCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADemoCharacterBase_Statics::ClassParams = {
	&ADemoCharacterBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADemoCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ADemoCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADemoCharacterBase()
{
	if (!Z_Registration_Info_UClass_ADemoCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADemoCharacterBase.OuterSingleton, Z_Construct_UClass_ADemoCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADemoCharacterBase.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<ADemoCharacterBase>()
{
	return ADemoCharacterBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADemoCharacterBase);
ADemoCharacterBase::~ADemoCharacterBase() {}
// End Class ADemoCharacterBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_DemoCharacterBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADemoCharacterBase, ADemoCharacterBase::StaticClass, TEXT("ADemoCharacterBase"), &Z_Registration_Info_UClass_ADemoCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADemoCharacterBase), 74328692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_DemoCharacterBase_h_2930249625(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_DemoCharacterBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_DemoCharacterBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
