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
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature();
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

// Begin Delegate FOnPointsUpdateSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnPointsUpdateSignature_Parms
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnPointsUpdateSignature_Parms, Points), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::NewProp_Points,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnPointsUpdateSignature__DelegateSignature", "LevelingComponent", "OnPointsUpdateDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnPointsUpdateSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnPointsUpdateSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPointsUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPointsUpdateSignature, int32 Points)
{
	struct _Script_Course_ARPG_eventOnPointsUpdateSignature_Parms
	{
		int32 Points;
	};
	_Script_Course_ARPG_eventOnPointsUpdateSignature_Parms Parms;
	Parms.Points=Points;
	OnPointsUpdateSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPointsUpdateSignature

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

// Begin Class ULevelingComponent Function GetCurrentPointsAmount
struct Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics
{
	struct LevelingComponent_eventGetCurrentPointsAmount_Parms
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventGetCurrentPointsAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "GetCurrentPointsAmount", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::LevelingComponent_eventGetCurrentPointsAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::LevelingComponent_eventGetCurrentPointsAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execGetCurrentPointsAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentPointsAmount();
	P_NATIVE_END;
}
// End Class ULevelingComponent Function GetCurrentPointsAmount

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

// Begin Class ULevelingComponent Function SetPoints
struct Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics
{
	struct LevelingComponent_eventSetPoints_Parms
	{
		int32 NewPointsAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPointsAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::NewProp_NewPointsAmount = { "NewPointsAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelingComponent_eventSetPoints_Parms, NewPointsAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::NewProp_NewPointsAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelingComponent, nullptr, "SetPoints", nullptr, nullptr, Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::LevelingComponent_eventSetPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::LevelingComponent_eventSetPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULevelingComponent_SetPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelingComponent_SetPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULevelingComponent::execSetPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPointsAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPoints(Z_Param_NewPointsAmount);
	P_NATIVE_END;
}
// End Class ULevelingComponent Function SetPoints

// Begin Class ULevelingComponent
void ULevelingComponent::StaticRegisterNativesULevelingComponent()
{
	UClass* Class = ULevelingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddExperience", &ULevelingComponent::execAddExperience },
		{ "GetCurrentExperience", &ULevelingComponent::execGetCurrentExperience },
		{ "GetCurrentLevel", &ULevelingComponent::execGetCurrentLevel },
		{ "GetCurrentPointsAmount", &ULevelingComponent::execGetCurrentPointsAmount },
		{ "SetExperience", &ULevelingComponent::execSetExperience },
		{ "SetLevel", &ULevelingComponent::execSetLevel },
		{ "SetPoints", &ULevelingComponent::execSetPoints },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPointsUpdateDelegate_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPoints_MetaData[] = {
		{ "Category", "LevelingComponent" },
		{ "ModuleRelativePath", "Public/Characters/LevelingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNewLevelDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnXpUpdateDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPointsUpdateDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelDataTable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelingComponent_AddExperience, "AddExperience" }, // 156666592
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentExperience, "GetCurrentExperience" }, // 3866498568
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentLevel, "GetCurrentLevel" }, // 804138474
		{ &Z_Construct_UFunction_ULevelingComponent_GetCurrentPointsAmount, "GetCurrentPointsAmount" }, // 36505464
		{ &Z_Construct_UFunction_ULevelingComponent_SetExperience, "SetExperience" }, // 1754477239
		{ &Z_Construct_UFunction_ULevelingComponent_SetLevel, "SetLevel" }, // 2487968515
		{ &Z_Construct_UFunction_ULevelingComponent_SetPoints, "SetPoints" }, // 3568310639
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnNewLevelDelegate = { "OnNewLevelDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnNewLevelDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnNewLevelSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNewLevelDelegate_MetaData), NewProp_OnNewLevelDelegate_MetaData) }; // 3974402253
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnXpUpdateDelegate = { "OnXpUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnXpUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnXpUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnXpUpdateDelegate_MetaData), NewProp_OnXpUpdateDelegate_MetaData) }; // 3366072691
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnPointsUpdateDelegate = { "OnPointsUpdateDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, OnPointsUpdateDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnPointsUpdateSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPointsUpdateDelegate_MetaData), NewProp_OnPointsUpdateDelegate_MetaData) }; // 740531248
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_LevelDataTable = { "LevelDataTable", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, LevelDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelDataTable_MetaData), NewProp_LevelDataTable_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentPoints = { "CurrentPoints", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULevelingComponent, CurrentPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPoints_MetaData), NewProp_CurrentPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnNewLevelDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnXpUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_OnPointsUpdateDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_LevelDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelingComponent_Statics::NewProp_CurrentPoints,
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
		{ Z_Construct_UClass_ULevelingComponent, ULevelingComponent::StaticClass, TEXT("ULevelingComponent"), &Z_Registration_Info_UClass_ULevelingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelingComponent), 4055353257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_373384120(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
