// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/LevelingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelingComponent() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ULevelingComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_ULevelingComponent_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnNewLevelSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnNewLevelSignature_Parms
	{
		int32 Level;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnNewLevelSignature_Parms, Level), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnNewLevelSignature__DelegateSignature", "LevelingComponent", "OnNewLevelDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnNewLevelSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnNewLevelSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNewLevelSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNewLevelSignature, int32 Level)
{
	struct _Script_Course_ARPG_eventOnNewLevelSignature_Parms
	{
		int32 Level;
	};
	_Script_Course_ARPG_eventOnNewLevelSignature_Parms Parms;
	Parms.Level=Level;
	OnNewLevelSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNewLevelSignature

// Begin Delegate FOnXpUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnXpUpdateSignature_Parms
	{
		float XP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnXpUpdateSignature_Parms, XP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::NewProp_XP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnXpUpdateSignature__DelegateSignature", "LevelingComponent", "OnXpUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnXpUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnXpUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnXpUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnXpUpdateSignature, float XP)
{
	struct _Script_Course_ARPG_eventOnXpUpdateSignature_Parms
	{
		float XP;
	};
	_Script_Course_ARPG_eventOnXpUpdateSignature_Parms Parms;
	Parms.XP=XP;
	OnXpUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnXpUpdateSignature

// Begin Delegate FOnStatPointsUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnStatPointsUpdateSignature_Parms
	{
		int32 Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnStatPointsUpdateSignature_Parms, Points), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnStatPointsUpdateSignature__DelegateSignature", "LevelingComponent", "OnStatPointsUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnStatPointsUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnStatPointsUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStatPointsUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStatPointsUpdateSignature, int32 Points)
{
	struct _Script_Course_ARPG_eventOnStatPointsUpdateSignature_Parms
	{
		int32 Points;
	};
	_Script_Course_ARPG_eventOnStatPointsUpdateSignature_Parms Parms;
	Parms.Points=Points;
	OnStatPointsUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStatPointsUpdateSignature

// Begin Delegate FOnAbilityPointsUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnAbilityPointsUpdateSignature_Parms
	{
		int32 Points;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Points;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnAbilityPointsUpdateSignature_Parms, Points), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityPointsUpdateSignature__DelegateSignature", "LevelingComponent", "OnAbilityPointsUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnAbilityPointsUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnAbilityPointsUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityPointsUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityPointsUpdateSignature, int32 Points)
{
	struct _Script_Course_ARPG_eventOnAbilityPointsUpdateSignature_Parms
	{
		int32 Points;
	};
	_Script_Course_ARPG_eventOnAbilityPointsUpdateSignature_Parms Parms;
	Parms.Points=Points;
	OnAbilityPointsUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAbilityPointsUpdateSignature

// Begin Class ULevelingComponent Function AddExperience
struct Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics
{
	struct LevelingComponent_eventAddExperience_Parms
	{
		float XP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_XP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::NewProp_XP = { "XP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventAddExperience_Parms, XP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::NewProp_XP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "AddExperience", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::LevelingComponent_eventAddExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::LevelingComponent_eventAddExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_AddExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_AddExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execAddExperience)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_XP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddExperience(Z_Param_XP);
	P_NATIVE_END;
}
// End Class ULevelingComponent Function AddExperience

// Begin Class ULevelingComponent Function GetCurrentAbilityPointsAmount
struct Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics
{
	struct LevelingComponent_eventGetCurrentAbilityPointsAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventGetCurrentAbilityPointsAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "GetCurrentAbilityPointsAmount", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::LevelingComponent_eventGetCurrentAbilityPointsAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::LevelingComponent_eventGetCurrentAbilityPointsAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execGetCurrentAbilityPointsAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAbilityPointsAmount();
	P_NATIVE_END;
}
// End Class ULevelingComponent Function GetCurrentAbilityPointsAmount

// Begin Class ULevelingComponent Function GetCurrentExperience
struct Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics
{
	struct LevelingComponent_eventGetCurrentExperience_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventGetCurrentExperience_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "GetCurrentExperience", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::LevelingComponent_eventGetCurrentExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::LevelingComponent_eventGetCurrentExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execGetCurrentExperience)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentExperience();
	P_NATIVE_END;
}
// End Class ULevelingComponent Function GetCurrentExperience

// Begin Class ULevelingComponent Function GetCurrentLevel
struct Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics
{
	struct LevelingComponent_eventGetCurrentLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventGetCurrentLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "GetCurrentLevel", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::LevelingComponent_eventGetCurrentLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::LevelingComponent_eventGetCurrentLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execGetCurrentLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentLevel();
	P_NATIVE_END;
}
// End Class ULevelingComponent Function GetCurrentLevel

// Begin Class ULevelingComponent Function GetCurrentStatPointsAmount
struct Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics
{
	struct LevelingComponent_eventGetCurrentStatPointsAmount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventGetCurrentStatPointsAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "GetCurrentStatPointsAmount", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::LevelingComponent_eventGetCurrentStatPointsAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::LevelingComponent_eventGetCurrentStatPointsAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execGetCurrentStatPointsAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStatPointsAmount();
	P_NATIVE_END;
}
// End Class ULevelingComponent Function GetCurrentStatPointsAmount

// Begin Class ULevelingComponent Function SetAbilityPoints
struct Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics
{
	struct LevelingComponent_eventSetAbilityPoints_Parms
	{
		int32 NewAbilityPointsAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAbilityPointsAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::NewProp_NewAbilityPointsAmount = { "NewAbilityPointsAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventSetAbilityPoints_Parms, NewAbilityPointsAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::NewProp_NewAbilityPointsAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "SetAbilityPoints", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::LevelingComponent_eventSetAbilityPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::LevelingComponent_eventSetAbilityPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execSetAbilityPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAbilityPointsAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityPoints(Z_Param_NewAbilityPointsAmount);
	P_NATIVE_END;
}
// End Class ULevelingComponent Function SetAbilityPoints

// Begin Class ULevelingComponent Function SetExperience
struct Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics
{
	struct LevelingComponent_eventSetExperience_Parms
	{
		float NewXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::NewProp_NewXP = { "NewXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventSetExperience_Parms, NewXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::NewProp_NewXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "SetExperience", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::LevelingComponent_eventSetExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::LevelingComponent_eventSetExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_SetExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_SetExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execSetExperience)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetExperience(Z_Param_NewXP);
	P_NATIVE_END;
}
// End Class ULevelingComponent Function SetExperience

// Begin Class ULevelingComponent Function SetLevel
struct Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics
{
	struct LevelingComponent_eventSetLevel_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventSetLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "SetLevel", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::LevelingComponent_eventSetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::LevelingComponent_eventSetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_SetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_SetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execSetLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevel(Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class ULevelingComponent Function SetLevel

// Begin Class ULevelingComponent Function SetStatPoints
struct Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics
{
	struct LevelingComponent_eventSetStatPoints_Parms
	{
		int32 NewStatPointsAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStatPointsAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::NewProp_NewStatPointsAmount = { "NewStatPointsAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventSetStatPoints_Parms, NewStatPointsAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::NewProp_NewStatPointsAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "SetStatPoints", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::LevelingComponent_eventSetStatPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::LevelingComponent_eventSetStatPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_SetStatPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_SetStatPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execSetStatPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewStatPointsAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatPoints(Z_Param_NewStatPointsAmount);
	P_NATIVE_END;
}
// End Class ULevelingComponent Function SetStatPoints

// Begin Class ULevelingComponent
void ULevelingComponent::StaticRegisterNativesULevelingComponent()
{
	UClass* Class = ULevelingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddExperience", &ULevelingComponent::execAddExperience },
		{ "GetCurrentAbilityPointsAmount", &ULevelingComponent::execGetCurrentAbilityPointsAmount },
		{ "GetCurrentExperience", &ULevelingComponent::execGetCurrentExperience },
		{ "GetCurrentLevel", &ULevelingComponent::execGetCurrentLevel },
		{ "GetCurrentStatPointsAmount", &ULevelingComponent::execGetCurrentStatPointsAmount },
		{ "SetAbilityPoints", &ULevelingComponent::execSetAbilityPoints },
		{ "SetExperience", &ULevelingComponent::execSetExperience },
		{ "SetLevel", &ULevelingComponent::execSetLevel },
		{ "SetStatPoints", &ULevelingComponent::execSetStatPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelingComponent);
UClass* Z_Construct_UClass_ULevelingComponent_NoRegister()
{
	return ULevelingComponent::StaticClass();
}
struct Z_Construct_UClass_ULevelingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/LevelingComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNewLevelDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnXpUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStatPointsUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityPointsUpdateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelDataTable_MetaData[] = {
		{ "Category", "LevelingComponent" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "LevelingComponent" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "LevelingComponent" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableStatPoints_MetaData[] = {
		{ "Category", "LevelingComponent" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableAbilityPoints_MetaData[] = {
		{ "Category", "LevelingComponent" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewLevelDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnXpUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStatPointsUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityPointsUpdateDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelDataTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableStatPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableAbilityPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelingComponent_AddExperience, "AddExperience" }, // 156666592
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentAbilityPointsAmount, "GetCurrentAbilityPointsAmount" }, // 2181021594
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience, "GetCurrentExperience" }, // 3866498568
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel, "GetCurrentLevel" }, // 804138474
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentStatPointsAmount, "GetCurrentStatPointsAmount" }, // 3021460794
		{ &Z_Construct_UFunction_ULevelingComponent_SetAbilityPoints, "SetAbilityPoints" }, // 2813704275
		{ &Z_Construct_UFunction_ULevelingComponent_SetExperience, "SetExperience" }, // 1754477239
		{ &Z_Construct_UFunction_ULevelingComponent_SetLevel, "SetLevel" }, // 2487968515
		{ &Z_Construct_UFunction_ULevelingComponent_SetStatPoints, "SetStatPoints" }, // 2323740191
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnNewLevelDelegate = { "OnNewLevelDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnNewLevelDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewLevelDelegate_MetaData), NewProp_OnNewLevelDelegate_MetaData) }; // 3974402253
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnXpUpdateDelegate = { "OnXpUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnXpUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnXpUpdateDelegate_MetaData), NewProp_OnXpUpdateDelegate_MetaData) }; // 3366072691
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnStatPointsUpdateDelegate = { "OnStatPointsUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnStatPointsUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnStatPointsUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStatPointsUpdateDelegate_MetaData), NewProp_OnStatPointsUpdateDelegate_MetaData) }; // 3074335849
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnAbilityPointsUpdateDelegate = { "OnAbilityPointsUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnAbilityPointsUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnAbilityPointsUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityPointsUpdateDelegate_MetaData), NewProp_OnAbilityPointsUpdateDelegate_MetaData) }; // 598694163
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_LevelDataTable = { "LevelDataTable", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, LevelDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDataTable_MetaData), NewProp_LevelDataTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_AvailableStatPoints = { "AvailableStatPoints", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, AvailableStatPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableStatPoints_MetaData), NewProp_AvailableStatPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_AvailableAbilityPoints = { "AvailableAbilityPoints", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, AvailableAbilityPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableAbilityPoints_MetaData), NewProp_AvailableAbilityPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnNewLevelDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnXpUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnStatPointsUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnAbilityPointsUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_LevelDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_AvailableStatPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_AvailableAbilityPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULevelingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelingComponent_Statics::ClassParams = {
	&ULevelingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULevelingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULevelingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULevelingComponent()
{
	if (!Z_Registration_Info_UClass_ULevelingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelingComponent.OuterSingleton, Z_Construct_UClass_ULevelingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULevelingComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ULevelingComponent>()
{
	return ULevelingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelingComponent);
ULevelingComponent::~ULevelingComponent() {}
// End Class ULevelingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULevelingComponent, ULevelingComponent::StaticClass, TEXT("ULevelingComponent"), &Z_Registration_Info_UClass_ULevelingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelingComponent), 609675705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_3512494977(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
