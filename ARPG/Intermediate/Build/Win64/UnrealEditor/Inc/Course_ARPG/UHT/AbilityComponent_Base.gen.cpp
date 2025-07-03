// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_Base.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_Base() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
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

// Begin Delegate FOnAbilityUnlockedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityUnlockedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityUnlockedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityUnlockedSignature)
{
	OnAbilityUnlockedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAbilityUnlockedSignature

// Begin Delegate FOnAbilityCooldownFinishedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityCooldownFinishedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityCooldownFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownFinishedSignature)
{
	OnAbilityCooldownFinishedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAbilityCooldownFinishedSignature

// Begin Delegate FOnAbilityCooldownChangedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnAbilityCooldownChangedSignature_Parms
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnAbilityCooldownChangedSignature_Parms, TimeLeft), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::NewProp_TimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnAbilityCooldownChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnAbilityCooldownChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnAbilityCooldownChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAbilityCooldownChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownChangedSignature, float TimeLeft)
{
	struct _Script_Course_ARPG_eventOnAbilityCooldownChangedSignature_Parms
	{
		float TimeLeft;
	};
	_Script_Course_ARPG_eventOnAbilityCooldownChangedSignature_Parms Parms;
	Parms.TimeLeft=TimeLeft;
	OnAbilityCooldownChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAbilityCooldownChangedSignature

// Begin Class UAbilityComponent_Base Function CreateIcon
struct Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "CreateIcon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execCreateIcon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateIcon();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function CreateIcon

// Begin Class UAbilityComponent_Base Function GetAbilityDuration
struct Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics
{
	struct AbilityComponent_Base_eventGetAbilityDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Base_eventGetAbilityDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "GetAbilityDuration", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::AbilityComponent_Base_eventGetAbilityDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::AbilityComponent_Base_eventGetAbilityDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execGetAbilityDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbilityDuration();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function GetAbilityDuration

// Begin Class UAbilityComponent_Base Function GetActionKey
struct Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics
{
	struct AbilityComponent_Base_eventGetActionKey_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Base_eventGetActionKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "GetActionKey", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::AbilityComponent_Base_eventGetActionKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::AbilityComponent_Base_eventGetActionKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execGetActionKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetActionKey();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function GetActionKey

// Begin Class UAbilityComponent_Base Function GetCurrentAbilityLevel
struct Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics
{
	struct AbilityComponent_Base_eventGetCurrentAbilityLevel_Parms
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Base_eventGetCurrentAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "GetCurrentAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::AbilityComponent_Base_eventGetCurrentAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::AbilityComponent_Base_eventGetCurrentAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execGetCurrentAbilityLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAbilityLevel();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function GetCurrentAbilityLevel

// Begin Class UAbilityComponent_Base Function IsAbilityActive
struct Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics
{
	struct AbilityComponent_Base_eventIsAbilityActive_Parms
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
void Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityComponent_Base_eventIsAbilityActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Base_eventIsAbilityActive_Parms), &Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "IsAbilityActive", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::AbilityComponent_Base_eventIsAbilityActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::AbilityComponent_Base_eventIsAbilityActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execIsAbilityActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAbilityActive();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function IsAbilityActive

// Begin Class UAbilityComponent_Base Function IsAbilityAvailable
struct Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics
{
	struct AbilityComponent_Base_eventIsAbilityAvailable_Parms
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
void Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityComponent_Base_eventIsAbilityAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Base_eventIsAbilityAvailable_Parms), &Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "IsAbilityAvailable", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::AbilityComponent_Base_eventIsAbilityAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::AbilityComponent_Base_eventIsAbilityAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execIsAbilityAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAbilityAvailable();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function IsAbilityAvailable

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

// Begin Class UAbilityComponent_Base Function UpgradeAbility
struct Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics
{
	struct AbilityComponent_Base_eventUpgradeAbility_Parms
	{
		int32 AvailablePoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailablePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::NewProp_AvailablePoints = { "AvailablePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Base_eventUpgradeAbility_Parms, AvailablePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::NewProp_AvailablePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "UpgradeAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::AbilityComponent_Base_eventUpgradeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::AbilityComponent_Base_eventUpgradeAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execUpgradeAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AvailablePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeAbility(Z_Param_AvailablePoints);
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function UpgradeAbility

// Begin Class UAbilityComponent_Base
void UAbilityComponent_Base::StaticRegisterNativesUAbilityComponent_Base()
{
	UClass* Class = UAbilityComponent_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateIcon", &UAbilityComponent_Base::execCreateIcon },
		{ "GetAbilityDuration", &UAbilityComponent_Base::execGetAbilityDuration },
		{ "GetActionKey", &UAbilityComponent_Base::execGetActionKey },
		{ "GetCurrentAbilityLevel", &UAbilityComponent_Base::execGetCurrentAbilityLevel },
		{ "IsAbilityActive", &UAbilityComponent_Base::execIsAbilityActive },
		{ "IsAbilityAvailable", &UAbilityComponent_Base::execIsAbilityAvailable },
		{ "SetAbilityAvailability", &UAbilityComponent_Base::execSetAbilityAvailability },
		{ "UpgradeAbility", &UAbilityComponent_Base::execUpgradeAbility },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityTimerChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityStartedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFinishedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityUnlockedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCooldownChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCooldownFinishedDelegate_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAbilityAvailable_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequirementsDataTable_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnCooldown_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionKey_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityTimerChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityStartedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFinishedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityUnlockedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCooldownChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCooldownFinishedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static void NewProp_bIsAbilityAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAbilityAvailable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequirementsDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static void NewProp_bIsOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnCooldown;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon, "CreateIcon" }, // 2424374390
		{ &Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration, "GetAbilityDuration" }, // 2247876657
		{ &Z_Construct_UFunction_UAbilityComponent_Base_GetActionKey, "GetActionKey" }, // 345541466
		{ &Z_Construct_UFunction_UAbilityComponent_Base_GetCurrentAbilityLevel, "GetCurrentAbilityLevel" }, // 2311290974
		{ &Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityActive, "IsAbilityActive" }, // 2909586061
		{ &Z_Construct_UFunction_UAbilityComponent_Base_IsAbilityAvailable, "IsAbilityAvailable" }, // 3455110506
		{ &Z_Construct_UFunction_UAbilityComponent_Base_SetAbilityAvailability, "SetAbilityAvailability" }, // 3175708875
		{ &Z_Construct_UFunction_UAbilityComponent_Base_UpgradeAbility, "UpgradeAbility" }, // 3652733501
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityTimerChangedDelegate = { "OnAbilityTimerChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityTimerChangedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityTimerChangedDelegate_MetaData), NewProp_OnAbilityTimerChangedDelegate_MetaData) }; // 599646751
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityStartedDelegate = { "OnAbilityStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityStartedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityStartedDelegate_MetaData), NewProp_OnAbilityStartedDelegate_MetaData) }; // 4031873231
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityFinishedDelegate = { "OnAbilityFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityFinishedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityFinishedDelegate_MetaData), NewProp_OnAbilityFinishedDelegate_MetaData) }; // 2793431115
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityUnlockedDelegate = { "OnAbilityUnlockedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityUnlockedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityUnlockedDelegate_MetaData), NewProp_OnAbilityUnlockedDelegate_MetaData) }; // 2293437900
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityCooldownChangedDelegate = { "OnAbilityCooldownChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityCooldownChangedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityCooldownChangedDelegate_MetaData), NewProp_OnAbilityCooldownChangedDelegate_MetaData) }; // 809477918
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityCooldownFinishedDelegate = { "OnAbilityCooldownFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityCooldownFinishedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityCooldownFinishedDelegate_MetaData), NewProp_OnAbilityCooldownFinishedDelegate_MetaData) }; // 2571723959
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
void Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable_SetBit(void* Obj)
{
	((UAbilityComponent_Base*)Obj)->bIsAbilityAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable = { "bIsAbilityAvailable", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_Base), &Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAbilityAvailable_MetaData), NewProp_bIsAbilityAvailable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_RequirementsDataTable = { "RequirementsDataTable", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, RequirementsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequirementsDataTable_MetaData), NewProp_RequirementsDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_MetaData), NewProp_TimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AbilityDuration = { "AbilityDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, AbilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDuration_MetaData), NewProp_AbilityDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
void Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown_SetBit(void* Obj)
{
	((UAbilityComponent_Base*)Obj)->bIsOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown = { "bIsOnCooldown", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_Base), &Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnCooldown_MetaData), NewProp_bIsOnCooldown_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, ActionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionKey_MetaData), NewProp_ActionKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityTimerChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityStartedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityFinishedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityUnlockedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityCooldownChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityCooldownFinishedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsAbilityAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_RequirementsDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_TimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AbilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_bIsOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_ActionKey,
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
		{ Z_Construct_UClass_UAbilityComponent_Base, UAbilityComponent_Base::StaticClass, TEXT("UAbilityComponent_Base"), &Z_Registration_Info_UClass_UAbilityComponent_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_Base), 131861635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_1876459524(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
