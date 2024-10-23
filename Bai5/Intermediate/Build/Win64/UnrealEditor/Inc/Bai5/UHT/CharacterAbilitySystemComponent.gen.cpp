// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bai5/Public/Character/Abilities/CharacterAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAbilitySystemComponent() {}

// Begin Cross Module References
BAI5_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent();
BAI5_API UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister();
BAI5_API UFunction* Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Bai5();
// End Cross Module References

// Begin Delegate FReceiveDamageDelegate
struct Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics
{
	struct _Script_Bai5_eventReceiveDamageDelegate_Parms
	{
		UCharacterAbilitySystemComponent* SourceASC;
		float UnmitigateDamage;
		float MitigateDamage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterAbilitySystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceASC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UnmitigateDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MitigateDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC = { "SourceASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventReceiveDamageDelegate_Parms, SourceASC), Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceASC_MetaData), NewProp_SourceASC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigateDamage = { "UnmitigateDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventReceiveDamageDelegate_Parms, UnmitigateDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::NewProp_MitigateDamage = { "MitigateDamage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Bai5_eventReceiveDamageDelegate_Parms, MitigateDamage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::NewProp_SourceASC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::NewProp_UnmitigateDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::NewProp_MitigateDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Bai5, nullptr, "ReceiveDamageDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::_Script_Bai5_eventReceiveDamageDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::_Script_Bai5_eventReceiveDamageDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Bai5_ReceiveDamageDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FReceiveDamageDelegate_DelegateWrapper(const FMulticastScriptDelegate& ReceiveDamageDelegate, UCharacterAbilitySystemComponent* SourceASC, float UnmitigateDamage, float MitigateDamage)
{
	struct _Script_Bai5_eventReceiveDamageDelegate_Parms
	{
		UCharacterAbilitySystemComponent* SourceASC;
		float UnmitigateDamage;
		float MitigateDamage;
	};
	_Script_Bai5_eventReceiveDamageDelegate_Parms Parms;
	Parms.SourceASC=SourceASC;
	Parms.UnmitigateDamage=UnmitigateDamage;
	Parms.MitigateDamage=MitigateDamage;
	ReceiveDamageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FReceiveDamageDelegate

// Begin Class UCharacterAbilitySystemComponent
void UCharacterAbilitySystemComponent::StaticRegisterNativesUCharacterAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAbilitySystemComponent);
UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent_NoRegister()
{
	return UCharacterAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "Character/Abilities/CharacterAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/Character/Abilities/CharacterAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Bai5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams = {
	&UCharacterAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UCharacterAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAbilitySystemComponent.OuterSingleton;
}
template<> BAI5_API UClass* StaticClass<UCharacterAbilitySystemComponent>()
{
	return UCharacterAbilitySystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAbilitySystemComponent);
UCharacterAbilitySystemComponent::~UCharacterAbilitySystemComponent() {}
// End Class UCharacterAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAbilitySystemComponent, UCharacterAbilitySystemComponent::StaticClass, TEXT("UCharacterAbilitySystemComponent"), &Z_Registration_Info_UClass_UCharacterAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAbilitySystemComponent), 789163282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_3134605343(TEXT("/Script/Bai5"),
	Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Bai5_Source_Bai5_Public_Character_Abilities_CharacterAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
