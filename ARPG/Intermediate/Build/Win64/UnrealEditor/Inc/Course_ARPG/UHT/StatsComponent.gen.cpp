// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/StatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsComponent() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EStats();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnHealthPercentUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnHealthPercentUpdateSignature_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnHealthPercentUpdateSignature_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnHealthPercentUpdateSignature__DelegateSignature", "StatsComponent", "OnHealthPercentUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnHealthPercentUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnHealthPercentUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthPercentUpdateSignature, float Percentage)
{
	struct _Script_Course_ARPG_eventOnHealthPercentUpdateSignature_Parms
	{
		float Percentage;
	};
	_Script_Course_ARPG_eventOnHealthPercentUpdateSignature_Parms Parms;
	Parms.Percentage=Percentage;
	OnHealthPercentUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthPercentUpdateSignature

// Begin Delegate FOnStaminaPercentUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnStaminaPercentUpdateSignature_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnStaminaPercentUpdateSignature_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnStaminaPercentUpdateSignature__DelegateSignature", "StatsComponent", "OnStaminaPercentUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnStaminaPercentUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnStaminaPercentUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStaminaPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaPercentUpdateSignature, float Percentage)
{
	struct _Script_Course_ARPG_eventOnStaminaPercentUpdateSignature_Parms
	{
		float Percentage;
	};
	_Script_Course_ARPG_eventOnStaminaPercentUpdateSignature_Parms Parms;
	Parms.Percentage=Percentage;
	OnStaminaPercentUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStaminaPercentUpdateSignature

// Begin Delegate FOnManaPercentUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnManaPercentUpdateSignature_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnManaPercentUpdateSignature_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnManaPercentUpdateSignature__DelegateSignature", "StatsComponent", "OnManaPercentUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnManaPercentUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnManaPercentUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnManaPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnManaPercentUpdateSignature, float Percentage)
{
	struct _Script_Course_ARPG_eventOnManaPercentUpdateSignature_Parms
	{
		float Percentage;
	};
	_Script_Course_ARPG_eventOnManaPercentUpdateSignature_Parms Parms;
	Parms.Percentage=Percentage;
	OnManaPercentUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnManaPercentUpdateSignature

// Begin Delegate FOnArmorUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnArmorUpdateSignature_Parms
	{
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnArmorUpdateSignature_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnArmorUpdateSignature__DelegateSignature", "StatsComponent", "OnArmorUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnArmorUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnArmorUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnArmorUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnArmorUpdateSignature, float Amount)
{
	struct _Script_Course_ARPG_eventOnArmorUpdateSignature_Parms
	{
		float Amount;
	};
	_Script_Course_ARPG_eventOnArmorUpdateSignature_Parms Parms;
	Parms.Amount=Amount;
	OnArmorUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnArmorUpdateSignature

// Begin Delegate FOnStatUpdateSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnStatUpdateSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStatUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStatUpdateSignature)
{
	OnStatUpdateSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStatUpdateSignature

// Begin Delegate FOnZeroArmorSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnZeroArmorSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZeroArmorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnZeroArmorSignature)
{
	OnZeroArmorSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnZeroArmorSignature

// Begin Delegate FOnZeroHealthSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnZeroHealthSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZeroHealthSignature_DelegateWrapper(const FMulticastScriptDelegate& OnZeroHealthSignature)
{
	OnZeroHealthSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnZeroHealthSignature

// Begin Class UStatsComponent Function AddHealth
struct Z_Construct_UFunction_UStatsComponent_AddHealth_Statics
{
	struct StatsComponent_eventAddHealth_Parms
	{
		float HealthToAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthToAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::NewProp_HealthToAdd = { "HealthToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventAddHealth_Parms, HealthToAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::NewProp_HealthToAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::StatsComponent_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::StatsComponent_eventAddHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_AddHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execAddHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HealthToAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddHealth(Z_Param_HealthToAdd);
	P_NATIVE_END;
}
// End Class UStatsComponent Function AddHealth

// Begin Class UStatsComponent Function EnableManaRegen
struct Z_Construct_UFunction_UStatsComponent_EnableManaRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_EnableManaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "EnableManaRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_EnableManaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_EnableManaRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_EnableManaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_EnableManaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execEnableManaRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableManaRegen();
	P_NATIVE_END;
}
// End Class UStatsComponent Function EnableManaRegen

// Begin Class UStatsComponent Function EnableStaminaRegen
struct Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "EnableStaminaRegen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execEnableStaminaRegen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableStaminaRegen();
	P_NATIVE_END;
}
// End Class UStatsComponent Function EnableStaminaRegen

// Begin Class UStatsComponent Function GetReducedDamage
struct Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics
{
	struct StatsComponent_eventGetReducedDamage_Parms
	{
		float Damage;
		AActor* Opponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Debug\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Opponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetReducedDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::NewProp_Opponent = { "Opponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetReducedDamage_Parms, Opponent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetReducedDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::NewProp_Opponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetReducedDamage", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::StatsComponent_eventGetReducedDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::StatsComponent_eventGetReducedDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetReducedDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetReducedDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetReducedDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_Opponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetReducedDamage(Z_Param_Damage,Z_Param_Opponent);
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetReducedDamage

// Begin Class UStatsComponent Function GetStatName
struct Z_Construct_UFunction_UStatsComponent_GetStatName_Statics
{
	struct StatsComponent_eventGetStatName_Parms
	{
		TEnumAsByte<EStats> Stat;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatName_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetStatName", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::StatsComponent_eventGetStatName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::StatsComponent_eventGetStatName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetStatName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetStatName)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStatName(EStats(Z_Param_Stat));
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetStatName

// Begin Class UStatsComponent Function GetStatPercentage
struct Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics
{
	struct StatsComponent_eventGetStatPercentage_Parms
	{
		TEnumAsByte<EStats> Current;
		TEnumAsByte<EStats> Max;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Debug\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Current;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, Current), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, Max), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Max,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetStatPercentage", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::StatsComponent_eventGetStatPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::StatsComponent_eventGetStatPercentage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetStatPercentage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetStatPercentage)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Current);
	P_GET_PROPERTY(FByteProperty,Z_Param_Max);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatPercentage(EStats(Z_Param_Current),EStats(Z_Param_Max));
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetStatPercentage

// Begin Class UStatsComponent Function GetStatValue
struct Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics
{
	struct StatsComponent_eventGetStatValue_Parms
	{
		TEnumAsByte<EStats> Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatValue_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetStatValue", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::StatsComponent_eventGetStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::StatsComponent_eventGetStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_GetStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execGetStatValue)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStatValue(EStats(Z_Param_Stat));
	P_NATIVE_END;
}
// End Class UStatsComponent Function GetStatValue

// Begin Class UStatsComponent Function OnStatsUpdated
struct Z_Construct_UFunction_UStatsComponent_OnStatsUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_OnStatsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "OnStatsUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_OnStatsUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_OnStatsUpdated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_OnStatsUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_OnStatsUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execOnStatsUpdated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStatsUpdated();
	P_NATIVE_END;
}
// End Class UStatsComponent Function OnStatsUpdated

// Begin Class UStatsComponent Function ReduceHealth
struct Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics
{
	struct StatsComponent_eventReduceHealth_Parms
	{
		float Damage;
		AActor* Opponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Debug\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Opponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceHealth_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_Opponent = { "Opponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceHealth_Parms, Opponent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::NewProp_Opponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::StatsComponent_eventReduceHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_ReduceHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execReduceHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_Opponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReduceHealth(Z_Param_Damage,Z_Param_Opponent);
	P_NATIVE_END;
}
// End Class UStatsComponent Function ReduceHealth

// Begin Class UStatsComponent Function ReduceMana
struct Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics
{
	struct StatsComponent_eventReduceMana_Parms
	{
		float Mana;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceMana_Parms, Mana), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::NewProp_Mana,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceMana", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::StatsComponent_eventReduceMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::StatsComponent_eventReduceMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_ReduceMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execReduceMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mana);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReduceMana(Z_Param_Mana);
	P_NATIVE_END;
}
// End Class UStatsComponent Function ReduceMana

// Begin Class UStatsComponent Function ReduceStamina
struct Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics
{
	struct StatsComponent_eventReduceStamina_Parms
	{
		float Stamina;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceStamina_Parms, Stamina), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::NewProp_Stamina,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_ReduceStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execReduceStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReduceStamina(Z_Param_Stamina);
	P_NATIVE_END;
}
// End Class UStatsComponent Function ReduceStamina

// Begin Class UStatsComponent Function RegenMana
struct Z_Construct_UFunction_UStatsComponent_RegenMana_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RegenMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "RegenMana", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RegenMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_RegenMana_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_RegenMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_RegenMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execRegenMana)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenMana();
	P_NATIVE_END;
}
// End Class UStatsComponent Function RegenMana

// Begin Class UStatsComponent Function RegenStamina
struct Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "RegenStamina", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_RegenStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execRegenStamina)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegenStamina();
	P_NATIVE_END;
}
// End Class UStatsComponent Function RegenStamina

// Begin Class UStatsComponent Function SetStatValue
struct Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics
{
	struct StatsComponent_eventSetStatValue_Parms
	{
		TEnumAsByte<EStats> Stat;
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "SetStatValue", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::StatsComponent_eventSetStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::StatsComponent_eventSetStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_SetStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execSetStatValue)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Stat);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatValue(EStats(Z_Param_Stat),Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UStatsComponent Function SetStatValue

// Begin Class UStatsComponent
void UStatsComponent::StaticRegisterNativesUStatsComponent()
{
	UClass* Class = UStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddHealth", &UStatsComponent::execAddHealth },
		{ "EnableManaRegen", &UStatsComponent::execEnableManaRegen },
		{ "EnableStaminaRegen", &UStatsComponent::execEnableStaminaRegen },
		{ "GetReducedDamage", &UStatsComponent::execGetReducedDamage },
		{ "GetStatName", &UStatsComponent::execGetStatName },
		{ "GetStatPercentage", &UStatsComponent::execGetStatPercentage },
		{ "GetStatValue", &UStatsComponent::execGetStatValue },
		{ "OnStatsUpdated", &UStatsComponent::execOnStatsUpdated },
		{ "ReduceHealth", &UStatsComponent::execReduceHealth },
		{ "ReduceMana", &UStatsComponent::execReduceMana },
		{ "ReduceStamina", &UStatsComponent::execReduceStamina },
		{ "RegenMana", &UStatsComponent::execRegenMana },
		{ "RegenStamina", &UStatsComponent::execRegenStamina },
		{ "SetStatValue", &UStatsComponent::execSetStatValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsComponent);
UClass* Z_Construct_UClass_UStatsComponent_NoRegister()
{
	return UStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/StatsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthPercentUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaPercentUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnManaPercentUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnZeroHealthDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnZeroArmorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnArmorUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaRegenRate_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegenMana_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegenStamina_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDelayDuration_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaDelayDuration_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthPercentUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaPercentUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnManaPercentUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZeroHealthDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZeroArmorDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnArmorUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatUpdateDelegate;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ManaRegenRate;
	static void NewProp_bCanRegenMana_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegenMana;
	static void NewProp_bCanRegenStamina_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegenStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDelayDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaDelayDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_AddHealth, "AddHealth" }, // 2530207561
		{ &Z_Construct_UFunction_UStatsComponent_EnableManaRegen, "EnableManaRegen" }, // 1231423935
		{ &Z_Construct_UFunction_UStatsComponent_EnableStaminaRegen, "EnableStaminaRegen" }, // 865388667
		{ &Z_Construct_UFunction_UStatsComponent_GetReducedDamage, "GetReducedDamage" }, // 1416473637
		{ &Z_Construct_UFunction_UStatsComponent_GetStatName, "GetStatName" }, // 2012776272
		{ &Z_Construct_UFunction_UStatsComponent_GetStatPercentage, "GetStatPercentage" }, // 4158655962
		{ &Z_Construct_UFunction_UStatsComponent_GetStatValue, "GetStatValue" }, // 1646771464
		{ &Z_Construct_UFunction_UStatsComponent_OnStatsUpdated, "OnStatsUpdated" }, // 2635404311
		{ &Z_Construct_UFunction_UStatsComponent_ReduceHealth, "ReduceHealth" }, // 231467916
		{ &Z_Construct_UFunction_UStatsComponent_ReduceMana, "ReduceMana" }, // 2410128414
		{ &Z_Construct_UFunction_UStatsComponent_ReduceStamina, "ReduceStamina" }, // 877380551
		{ &Z_Construct_UFunction_UStatsComponent_RegenMana, "RegenMana" }, // 2331136345
		{ &Z_Construct_UFunction_UStatsComponent_RegenStamina, "RegenStamina" }, // 3544300034
		{ &Z_Construct_UFunction_UStatsComponent_SetStatValue, "SetStatValue" }, // 1932000417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnHealthPercentUpdateDelegate = { "OnHealthPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnHealthPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthPercentUpdateDelegate_MetaData), NewProp_OnHealthPercentUpdateDelegate_MetaData) }; // 308023176
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStaminaPercentUpdateDelegate = { "OnStaminaPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnStaminaPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaPercentUpdateDelegate_MetaData), NewProp_OnStaminaPercentUpdateDelegate_MetaData) }; // 23037996
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnManaPercentUpdateDelegate = { "OnManaPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnManaPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnManaPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnManaPercentUpdateDelegate_MetaData), NewProp_OnManaPercentUpdateDelegate_MetaData) }; // 2612675167
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroHealthDelegate = { "OnZeroHealthDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnZeroHealthDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZeroHealthDelegate_MetaData), NewProp_OnZeroHealthDelegate_MetaData) }; // 3766297381
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroArmorDelegate = { "OnZeroArmorDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnZeroArmorDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZeroArmorDelegate_MetaData), NewProp_OnZeroArmorDelegate_MetaData) }; // 158607738
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnArmorUpdateDelegate = { "OnArmorUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnArmorUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnArmorUpdateDelegate_MetaData), NewProp_OnArmorUpdateDelegate_MetaData) }; // 1424501189
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatUpdateDelegate = { "OnStatUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnStatUpdateDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatUpdateDelegate_MetaData), NewProp_OnStatUpdateDelegate_MetaData) }; // 1428107886
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_ManaRegenRate = { "ManaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, ManaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaRegenRate_MetaData), NewProp_ManaRegenRate_MetaData) };
void Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenMana_SetBit(void* Obj)
{
	((UStatsComponent*)Obj)->bCanRegenMana = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenMana = { "bCanRegenMana", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenMana_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRegenMana_MetaData), NewProp_bCanRegenMana_MetaData) };
void Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenStamina_SetBit(void* Obj)
{
	((UStatsComponent*)Obj)->bCanRegenStamina = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenStamina = { "bCanRegenStamina", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenStamina_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRegenStamina_MetaData), NewProp_bCanRegenStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration = { "StaminaDelayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDelayDuration_MetaData), NewProp_StaminaDelayDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_ManaDelayDuration = { "ManaDelayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, ManaDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaDelayDuration_MetaData), NewProp_ManaDelayDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 1779151500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnHealthPercentUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStaminaPercentUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnManaPercentUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroHealthDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroArmorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnArmorUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_ManaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegenStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_ManaDelayDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsComponent_Statics::ClassParams = {
	&UStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsComponent()
{
	if (!Z_Registration_Info_UClass_UStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsComponent.OuterSingleton, Z_Construct_UClass_UStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UStatsComponent>()
{
	return UStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsComponent);
UStatsComponent::~UStatsComponent() {}
// End Class UStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 1839103082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_3137255295(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
