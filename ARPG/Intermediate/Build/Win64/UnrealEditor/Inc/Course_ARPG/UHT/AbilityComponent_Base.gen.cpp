// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_Base() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnAbilityTimerChangedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnAbilityTimerChangedSignature_Parms
	{
		float TimeLeft;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnAbilityTimerChangedSignature_Parms, TimeLeft), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::NewProp_TimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityTimerChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnAbilityTimerChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnAbilityTimerChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityTimerChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityTimerChangedSignature, float TimeLeft)
{
	struct _Script_Course_ARPG_eventOnAbilityTimerChangedSignature_Parms
	{
		float TimeLeft;
	};
	_Script_Course_ARPG_eventOnAbilityTimerChangedSignature_Parms Parms;
	Parms.TimeLeft=TimeLeft;
	OnAbilityTimerChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAbilityTimerChangedSignature

// Begin Delegate FOnAbilityStartedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityStartedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityStartedSignature)
{
	OnAbilityStartedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAbilityStartedSignature

// Begin Delegate FOnAbilityFinishedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityFinishedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityFinishedSignature)
{
	OnAbilityFinishedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAbilityFinishedSignature

// Begin Class UAbilityComponent_Base Function GetAbilityAvailability
struct Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics
{
	struct AbilityComponent_Base_eventGetAbilityAvailability_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityComponent_Base_eventGetAbilityAvailability_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Base_eventGetAbilityAvailability_Parms), &Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "GetAbilityAvailability", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::AbilityComponent_Base_eventGetAbilityAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::AbilityComponent_Base_eventGetAbilityAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execGetAbilityAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAbilityAvailability();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function GetAbilityAvailability

// Begin Class UAbilityComponent_Base Function GetAbilityLevel
struct Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics
{
	struct AbilityComponent_Base_eventGetAbilityLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Base_eventGetAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "GetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::AbilityComponent_Base_eventGetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::AbilityComponent_Base_eventGetAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execGetAbilityLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAbilityLevel();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function GetAbilityLevel

// Begin Class UAbilityComponent_Base Function SetAbilityAvailability
struct Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics
{
	struct AbilityComponent_Base_eventSetAbilityAvailability_Parms
	{
		bool NewAvailability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewAvailability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewAvailability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::NewProp_NewAvailability_SetBit(void* Obj)
{
	((AbilityComponent_Base_eventSetAbilityAvailability_Parms*)Obj)->NewAvailability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::NewProp_NewAvailability = { "NewAvailability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Base_eventSetAbilityAvailability_Parms), &Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::NewProp_NewAvailability_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::NewProp_NewAvailability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "SetAbilityAvailability", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::AbilityComponent_Base_eventSetAbilityAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::AbilityComponent_Base_eventSetAbilityAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execSetAbilityAvailability)
{
	P_GET_UBOOL(Z_Param_NewAvailability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityAvailability(Z_Param_NewAvailability);
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function SetAbilityAvailability

// Begin Class UAbilityComponent_Base Function SetAbilityLevel
struct Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics
{
	struct AbilityComponent_Base_eventSetAbilityLevel_Parms
	{
		int32 NewLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::NewProp_NewLevel = { "NewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Base_eventSetAbilityLevel_Parms, NewLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::NewProp_NewLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "SetAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::AbilityComponent_Base_eventSetAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::AbilityComponent_Base_eventSetAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execSetAbilityLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityLevel(Z_Param_NewLevel);
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function SetAbilityLevel

// Begin Class UAbilityComponent_Base
void UAbilityComponent_Base::StaticRegisterNativesUAbilityComponent_Base()
{
	UClass* Class = UAbilityComponent_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilityAvailability", &UAbilityComponent_Base::execGetAbilityAvailability },
		{ "GetAbilityLevel", &UAbilityComponent_Base::execGetAbilityLevel },
		{ "SetAbilityAvailability", &UAbilityComponent_Base::execSetAbilityAvailability },
		{ "SetAbilityLevel", &UAbilityComponent_Base::execSetAbilityLevel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_Base);
UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister()
{
	return UAbilityComponent_Base::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/Abilities/AbilityComponent_Base.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimerChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityStartedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFinishedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDuration_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPointsToUpgrade_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnCooldown_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAbilityAvailable_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimerChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityStartedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFinishedDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredPointsToUpgrade;
	static void NewProp_bIsOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnCooldown;
	static void NewProp_bIsAbilityAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAbilityAvailable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityAvailability, "GetAbilityAvailability" }, // 2842659299
		{ &Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityLevel, "GetAbilityLevel" }, // 3031551643
		{ &Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability, "SetAbilityAvailability" }, // 3175708875
		{ &Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityLevel, "SetAbilityLevel" }, // 775473023
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnTimerChangedDelegate = { "OnTimerChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnTimerChangedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimerChangedDelegate_MetaData), NewProp_OnTimerChangedDelegate_MetaData) }; // 599646751
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityStartedDelegate = { "OnAbilityStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityStartedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityStartedDelegate_MetaData), NewProp_OnAbilityStartedDelegate_MetaData) }; // 4031873231
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityFinishedDelegate = { "OnAbilityFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityFinishedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityFinishedDelegate_MetaData), NewProp_OnAbilityFinishedDelegate_MetaData) }; // 2793431115
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AbilityDuration = { "AbilityDuration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, AbilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDuration_MetaData), NewProp_AbilityDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_RequiredPointsToUpgrade = { "RequiredPointsToUpgrade", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, RequiredPointsToUpgrade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPointsToUpgrade_MetaData), NewProp_RequiredPointsToUpgrade_MetaData) };
void Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown_SetBit(void* Obj)
{
	((UAbilityComponent_Base*)Obj)->bIsOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown = { "bIsOnCooldown", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_Base), &Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnCooldown_MetaData), NewProp_bIsOnCooldown_MetaData) };
void Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable_SetBit(void* Obj)
{
	((UAbilityComponent_Base*)Obj)->bIsAbilityAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable = { "bIsAbilityAvailable", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_Base), &Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAbilityAvailable_MetaData), NewProp_bIsAbilityAvailable_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnTimerChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityStartedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityFinishedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AbilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_RequiredPointsToUpgrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_ManaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_Base_Statics::ClassParams = {
	&UAbilityComponent_Base::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Base_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_Base()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_Base.OuterSingleton, Z_Construct_UClass_UAbilityComponent_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_Base.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_Base>()
{
	return UAbilityComponent_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_Base);
UAbilityComponent_Base::~UAbilityComponent_Base() {}
// End Class UAbilityComponent_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_Base, UAbilityComponent_Base::StaticClass, TEXT("UAbilityComponent_Base"), &Z_Registration_Info_UClass_UAbilityComponent_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_Base), 3712692206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_2663518165(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
