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
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature();
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

// Begin Delegate FOnZeroHealthSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnZeroHealthSignature__DelegateSignature", "StatsComponent", "OnZeroHealthDelegate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZeroHealthSignature_DelegateWrapper(const FMulticastScriptDelegate& OnZeroHealthSignature)
{
	OnZeroHealthSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnZeroHealthSignature

// Begin Delegate FOnZeroArmorSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnZeroArmorSignature__DelegateSignature", "StatsComponent", "OnZeroArmorDelegate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnZeroArmorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnZeroArmorSignature)
{
	OnZeroArmorSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnZeroArmorSignature

// Begin Delegate FOnStatUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnStatUpdateSignature__DelegateSignature", "StatsComponent", "OnStatUpdateDelegate", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStatUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStatUpdateSignature)
{
	OnStatUpdateSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnStatUpdateSignature

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "AddHealth", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::StatsComponent_eventAddHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_AddHealth_Statics::Function_MetaDataParams) };
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

// Begin Class UStatsComponent Function EnableRegeneration
struct Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "EnableRegeneration", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsComponent_EnableRegeneration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_EnableRegeneration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execEnableRegeneration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRegeneration();
	P_NATIVE_END;
}
// End Class UStatsComponent Function EnableRegeneration

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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatName_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 2765038443
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetStatName", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::StatsComponent_eventGetStatName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetStatName_Statics::Function_MetaDataParams) };
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
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Current;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Max;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, Current), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 2765038443
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatPercentage_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatPercentage_Parms, Max), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 2765038443
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatValue_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 2765038443
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventGetStatValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "GetStatValue", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::StatsComponent_eventGetStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_GetStatValue_Statics::Function_MetaDataParams) };
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

// Begin Class UStatsComponent Function ReduceArmor
struct Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics
{
	struct StatsComponent_eventReduceArmor_Parms
	{
		float Damage;
		AActor* Opponent;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Opponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceArmor_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::NewProp_Opponent = { "Opponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceArmor_Parms, Opponent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventReduceArmor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::NewProp_Opponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceArmor", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::StatsComponent_eventReduceArmor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::StatsComponent_eventReduceArmor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsComponent_ReduceArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsComponent_ReduceArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsComponent::execReduceArmor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AActor,Z_Param_Opponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ReduceArmor(Z_Param_Damage,Z_Param_Opponent);
	P_NATIVE_END;
}
// End Class UStatsComponent Function ReduceArmor

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
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "ReduceStamina", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::StatsComponent_eventReduceStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_ReduceStamina_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "RegenStamina", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_RegenStamina_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 2765038443
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsComponent_eventSetStatValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsComponent, nullptr, "SetStatValue", nullptr, nullptr, Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::StatsComponent_eventSetStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsComponent_SetStatValue_Statics::Function_MetaDataParams) };
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
		{ "EnableRegeneration", &UStatsComponent::execEnableRegeneration },
		{ "GetStatName", &UStatsComponent::execGetStatName },
		{ "GetStatPercentage", &UStatsComponent::execGetStatPercentage },
		{ "GetStatValue", &UStatsComponent::execGetStatValue },
		{ "ReduceArmor", &UStatsComponent::execReduceArmor },
		{ "ReduceHealth", &UStatsComponent::execReduceHealth },
		{ "ReduceStamina", &UStatsComponent::execReduceStamina },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthPercentUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStaminaPercentUpdateDelegate_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegen_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaDelayDuration_MetaData[] = {
		{ "Category", "StatsComponent" },
		{ "ModuleRelativePath", "Public/Characters/StatsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthPercentUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStaminaPercentUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZeroHealthDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnZeroArmorDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnArmorUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatUpdateDelegate;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_StaminaRegenRate;
	static void NewProp_bCanRegen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaDelayDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsComponent_AddHealth, "AddHealth" }, // 3736643277
		{ &Z_Construct_UFunction_UStatsComponent_EnableRegeneration, "EnableRegeneration" }, // 500859525
		{ &Z_Construct_UFunction_UStatsComponent_GetStatName, "GetStatName" }, // 4283565485
		{ &Z_Construct_UFunction_UStatsComponent_GetStatPercentage, "GetStatPercentage" }, // 2089096164
		{ &Z_Construct_UFunction_UStatsComponent_GetStatValue, "GetStatValue" }, // 369506655
		{ &Z_Construct_UFunction_UStatsComponent_ReduceArmor, "ReduceArmor" }, // 3787046358
		{ &Z_Construct_UFunction_UStatsComponent_ReduceHealth, "ReduceHealth" }, // 3610010968
		{ &Z_Construct_UFunction_UStatsComponent_ReduceStamina, "ReduceStamina" }, // 756766150
		{ &Z_Construct_UFunction_UStatsComponent_RegenStamina, "RegenStamina" }, // 1133475283
		{ &Z_Construct_UFunction_UStatsComponent_SetStatValue, "SetStatValue" }, // 2085266372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 2765038443
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 2765038443
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnHealthPercentUpdateDelegate = { "OnHealthPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnHealthPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnHealthPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthPercentUpdateDelegate_MetaData), NewProp_OnHealthPercentUpdateDelegate_MetaData) }; // 308023176
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStaminaPercentUpdateDelegate = { "OnStaminaPercentUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnStaminaPercentUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStaminaPercentUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStaminaPercentUpdateDelegate_MetaData), NewProp_OnStaminaPercentUpdateDelegate_MetaData) }; // 23037996
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroHealthDelegate = { "OnZeroHealthDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnZeroHealthDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroHealthSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZeroHealthDelegate_MetaData), NewProp_OnZeroHealthDelegate_MetaData) }; // 2166416669
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroArmorDelegate = { "OnZeroArmorDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnZeroArmorDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnZeroArmorSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnZeroArmorDelegate_MetaData), NewProp_OnZeroArmorDelegate_MetaData) }; // 1383031119
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnArmorUpdateDelegate = { "OnArmorUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnArmorUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnArmorUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnArmorUpdateDelegate_MetaData), NewProp_OnArmorUpdateDelegate_MetaData) }; // 1424501189
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatUpdateDelegate = { "OnStatUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, OnStatUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatUpdateDelegate_MetaData), NewProp_OnStatUpdateDelegate_MetaData) }; // 4086281228
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
void Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_SetBit(void* Obj)
{
	((UStatsComponent*)Obj)->bCanRegen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen = { "bCanRegen", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UStatsComponent), &Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRegen_MetaData), NewProp_bCanRegen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration = { "StaminaDelayDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsComponent, StaminaDelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaDelayDuration_MetaData), NewProp_StaminaDelayDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_Stats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnHealthPercentUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStaminaPercentUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroHealthDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnZeroArmorDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnArmorUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_OnStatUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_bCanRegen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsComponent_Statics::NewProp_StaminaDelayDuration,
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
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_StatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsComponent, UStatsComponent::StaticClass, TEXT("UStatsComponent"), &Z_Registration_Info_UClass_UStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsComponent), 340397685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_StatsComponent_h_1856429020(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_StatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_StatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
