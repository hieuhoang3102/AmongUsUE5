// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Bai5.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBai5() {}

// Begin Cross Module References
BAI5_API UEnum* Z_Construct_UEnum_Bai5_DemoAbilitiesID();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Enum DemoAbilitiesID
static FEnumRegistrationInfo Z_Registration_Info_UEnum_DemoAbilitiesID;
static UEnum* DemoAbilitiesID_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_DemoAbilitiesID.OuterSingleton)
	{
		Z_Registration_Info_UEnum_DemoAbilitiesID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Bai5_DemoAbilitiesID, (UObject*)Z_Construct_UPackage__Script_Bai5(), TEXT("DemoAbilitiesID"));
	}
	return Z_Registration_Info_UEnum_DemoAbilitiesID.OuterSingleton;
}
template<> BAI5_API UEnum* StaticEnum<DemoAbilitiesID>()
{
	return DemoAbilitiesID_StaticEnum();
}
struct Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "DemoAbilitiesID::Cancel" },
		{ "Confirm.DisplayName", "Confirm" },
		{ "Confirm.Name", "DemoAbilitiesID::Confirm" },
		{ "ModuleRelativePath", "Bai5.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "DemoAbilitiesID::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DemoAbilitiesID::None", (int64)DemoAbilitiesID::None },
		{ "DemoAbilitiesID::Confirm", (int64)DemoAbilitiesID::Confirm },
		{ "DemoAbilitiesID::Cancel", (int64)DemoAbilitiesID::Cancel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Bai5,
	nullptr,
	"DemoAbilitiesID",
	"DemoAbilitiesID",
	Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Bai5_DemoAbilitiesID()
{
	if (!Z_Registration_Info_UEnum_DemoAbilitiesID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_DemoAbilitiesID.InnerSingleton, Z_Construct_UEnum_Bai5_DemoAbilitiesID_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_DemoAbilitiesID.InnerSingleton;
}
// End Enum DemoAbilitiesID

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Bai5_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ DemoAbilitiesID_StaticEnum, TEXT("DemoAbilitiesID"), &Z_Registration_Info_UEnum_DemoAbilitiesID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3465358394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Bai5_h_1003627661(TEXT("/Script/Bai5"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Bai5_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Bai5_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
