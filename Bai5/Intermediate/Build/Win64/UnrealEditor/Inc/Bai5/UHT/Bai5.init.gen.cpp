// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBai5_init() {}
	BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature();
	BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Bai5;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Bai5()
	{
		if (!Z_Registration_Info_UPackage__Script_Bai5.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Bai5_DestroyComponent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Bai5_EndDestroyComponent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Bai5",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC18749C1,
				0xF9085710,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Bai5.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Bai5.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Bai5(Z_Construct_UPackage__Script_Bai5, TEXT("/Script/Bai5"), Z_Registration_Info_UPackage__Script_Bai5, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC18749C1, 0xF9085710));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
