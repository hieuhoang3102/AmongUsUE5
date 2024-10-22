// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAttributeSetBase() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_UCharacterAttributeSetBase();
BAI5_API UClass* Z_Construct_UClass_UCharacterAttributeSetBase_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Class UCharacterAttributeSetBase Function OnRep_Health
struct Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics
{
	struct CharacterAttributeSetBase_eventOnRep_Health_Parms
	{
		FGameplayAttributeData OldHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSetBase_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldHealth_MetaData), NewProp_OldHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::NewProp_OldHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSetBase, nullptr, "OnRep_Health", nullptr, nullptr, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::CharacterAttributeSetBase_eventOnRep_Health_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::CharacterAttributeSetBase_eventOnRep_Health_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSetBase::execOnRep_Health)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
	P_NATIVE_END;
}
// End Class UCharacterAttributeSetBase Function OnRep_Health

// Begin Class UCharacterAttributeSetBase Function OnRep_Mana
struct Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics
{
	struct CharacterAttributeSetBase_eventOnRep_Mana_Parms
	{
		FGameplayAttributeData OldMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana = { "OldMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSetBase_eventOnRep_Mana_Parms, OldMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMana_MetaData), NewProp_OldMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::NewProp_OldMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSetBase, nullptr, "OnRep_Mana", nullptr, nullptr, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::CharacterAttributeSetBase_eventOnRep_Mana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::CharacterAttributeSetBase_eventOnRep_Mana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSetBase::execOnRep_Mana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Mana(Z_Param_Out_OldMana);
	P_NATIVE_END;
}
// End Class UCharacterAttributeSetBase Function OnRep_Mana

// Begin Class UCharacterAttributeSetBase Function OnRep_MaxHealth
struct Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics
{
	struct CharacterAttributeSetBase_eventOnRep_MaxHealth_Parms
	{
		FGameplayAttributeData OldMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth = { "OldMaxHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSetBase_eventOnRep_MaxHealth_Parms, OldMaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxHealth_MetaData), NewProp_OldMaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::NewProp_OldMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSetBase, nullptr, "OnRep_MaxHealth", nullptr, nullptr, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::CharacterAttributeSetBase_eventOnRep_MaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::CharacterAttributeSetBase_eventOnRep_MaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSetBase::execOnRep_MaxHealth)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxHealth(Z_Param_Out_OldMaxHealth);
	P_NATIVE_END;
}
// End Class UCharacterAttributeSetBase Function OnRep_MaxHealth

// Begin Class UCharacterAttributeSetBase Function OnRep_MaxMana
struct Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics
{
	struct CharacterAttributeSetBase_eventOnRep_MaxMana_Parms
	{
		FGameplayAttributeData OldMaxMana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OldMaxMana_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldMaxMana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana = { "OldMaxMana", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterAttributeSetBase_eventOnRep_MaxMana_Parms, OldMaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OldMaxMana_MetaData), NewProp_OldMaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::NewProp_OldMaxMana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterAttributeSetBase, nullptr, "OnRep_MaxMana", nullptr, nullptr, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::CharacterAttributeSetBase_eventOnRep_MaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::CharacterAttributeSetBase_eventOnRep_MaxMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterAttributeSetBase::execOnRep_MaxMana)
{
	P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldMaxMana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MaxMana(Z_Param_Out_OldMaxMana);
	P_NATIVE_END;
}
// End Class UCharacterAttributeSetBase Function OnRep_MaxMana

// Begin Class UCharacterAttributeSetBase
void UCharacterAttributeSetBase::StaticRegisterNativesUCharacterAttributeSetBase()
{
	UClass* Class = UCharacterAttributeSetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_Health", &UCharacterAttributeSetBase::execOnRep_Health },
		{ "OnRep_Mana", &UCharacterAttributeSetBase::execOnRep_Mana },
		{ "OnRep_MaxHealth", &UCharacterAttributeSetBase::execOnRep_MaxHealth },
		{ "OnRep_MaxMana", &UCharacterAttributeSetBase::execOnRep_MaxMana },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAttributeSetBase);
UClass* Z_Construct_UClass_UCharacterAttributeSetBase_NoRegister()
{
	return UCharacterAttributeSetBase::StaticClass();
}
struct Z_Construct_UClass_UCharacterAttributeSetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Damage is a meta attribute used by the DamageExecution to calculate final damage, which can turn into -Health\n//Temporary value that only exists on the Server. Not replicated.\n" },
#endif
		{ "ModuleRelativePath", "Public/Character/Abilities/AttributeSets/CharacterAttributeSetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage is a meta attribute used by the DamageExecution to calculate final damage, which can turn into -Health\nTemporary value that only exists on the Server. Not replicated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Health, "OnRep_Health" }, // 1359472851
		{ &Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_Mana, "OnRep_Mana" }, // 4145335088
		{ &Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3897262852
		{ &Z_Construct_UFunction_UCharacterAttributeSetBase_OnRep_MaxMana, "OnRep_MaxMana" }, // 1008044625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAttributeSetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSetBase, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSetBase, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSetBase, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mana_MetaData), NewProp_Mana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSetBase, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAttributeSetBase, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAttributeSetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAttributeSetBase_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAttributeSetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAttributeSetBase_Statics::ClassParams = {
	&UCharacterAttributeSetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterAttributeSetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSetBase_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAttributeSetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAttributeSetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAttributeSetBase()
{
	if (!Z_Registration_Info_UClass_UCharacterAttributeSetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAttributeSetBase.OuterSingleton, Z_Construct_UClass_UCharacterAttributeSetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAttributeSetBase.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<UCharacterAttributeSetBase>()
{
	return UCharacterAttributeSetBase::StaticClass();
}
void UCharacterAttributeSetBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Mana(TEXT("Mana"));
	static const FName Name_MaxMana(TEXT("MaxMana"));
	const bool bIsValid = true
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Mana == ClassReps[(int32)ENetFields_Private::Mana].Property->GetFName()
		&& Name_MaxMana == ClassReps[(int32)ENetFields_Private::MaxMana].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UCharacterAttributeSetBase"));
}
UCharacterAttributeSetBase::UCharacterAttributeSetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAttributeSetBase);
UCharacterAttributeSetBase::~UCharacterAttributeSetBase() {}
// End Class UCharacterAttributeSetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAttributeSetBase, UCharacterAttributeSetBase::StaticClass, TEXT("UCharacterAttributeSetBase"), &Z_Registration_Info_UClass_UCharacterAttributeSetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAttributeSetBase), 2842211030U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_391459253(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_AttributeSets_CharacterAttributeSetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS