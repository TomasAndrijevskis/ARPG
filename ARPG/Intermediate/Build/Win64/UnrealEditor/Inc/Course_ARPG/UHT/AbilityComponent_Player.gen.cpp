// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/Base/AbilityComponent_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_Player() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Player();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Player_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnAbilityUnlockedSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
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
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
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
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
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

// Begin Class UAbilityComponent_Player Function GetActionKey
struct Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics
{
	struct AbilityComponent_Player_eventGetActionKey_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Player_eventGetActionKey_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Player, nullptr, "GetActionKey", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::AbilityComponent_Player_eventGetActionKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::AbilityComponent_Player_eventGetActionKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Player::execGetActionKey)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetActionKey();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Player Function GetActionKey

// Begin Class UAbilityComponent_Player Function GetCurrentAbilityLevel
struct Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics
{
	struct AbilityComponent_Player_eventGetCurrentAbilityLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Player_eventGetCurrentAbilityLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Player, nullptr, "GetCurrentAbilityLevel", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::AbilityComponent_Player_eventGetCurrentAbilityLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::AbilityComponent_Player_eventGetCurrentAbilityLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Player::execGetCurrentAbilityLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAbilityLevel();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Player Function GetCurrentAbilityLevel

// Begin Class UAbilityComponent_Player Function IsAbilityActive
struct Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics
{
	struct AbilityComponent_Player_eventIsAbilityActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityComponent_Player_eventIsAbilityActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Player_eventIsAbilityActive_Parms), &Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Player, nullptr, "IsAbilityActive", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::AbilityComponent_Player_eventIsAbilityActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::AbilityComponent_Player_eventIsAbilityActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Player::execIsAbilityActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAbilityActive();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Player Function IsAbilityActive

// Begin Class UAbilityComponent_Player Function IsAbilityAvailable
struct Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics
{
	struct AbilityComponent_Player_eventIsAbilityAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AbilityComponent_Player_eventIsAbilityAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Player_eventIsAbilityAvailable_Parms), &Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Player, nullptr, "IsAbilityAvailable", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::AbilityComponent_Player_eventIsAbilityAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::AbilityComponent_Player_eventIsAbilityAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Player::execIsAbilityAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAbilityAvailable();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Player Function IsAbilityAvailable

// Begin Class UAbilityComponent_Player Function SetAbilityAvailability
struct Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics
{
	struct AbilityComponent_Player_eventSetAbilityAvailability_Parms
	{
		bool NewAvailability;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_NewAvailability_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewAvailability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::NewProp_NewAvailability_SetBit(void* Obj)
{
	((AbilityComponent_Player_eventSetAbilityAvailability_Parms*)Obj)->NewAvailability = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::NewProp_NewAvailability = { "NewAvailability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AbilityComponent_Player_eventSetAbilityAvailability_Parms), &Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::NewProp_NewAvailability_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::NewProp_NewAvailability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Player, nullptr, "SetAbilityAvailability", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::AbilityComponent_Player_eventSetAbilityAvailability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::AbilityComponent_Player_eventSetAbilityAvailability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Player::execSetAbilityAvailability)
{
	P_GET_UBOOL(Z_Param_NewAvailability);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityAvailability(Z_Param_NewAvailability);
	P_NATIVE_END;
}
// End Class UAbilityComponent_Player Function SetAbilityAvailability

// Begin Class UAbilityComponent_Player Function UpgradeAbility
struct Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics
{
	struct AbilityComponent_Player_eventUpgradeAbility_Parms
	{
		int32 AvailablePoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailablePoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::NewProp_AvailablePoints = { "AvailablePoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_Player_eventUpgradeAbility_Parms, AvailablePoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::NewProp_AvailablePoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Player, nullptr, "UpgradeAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::AbilityComponent_Player_eventUpgradeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::AbilityComponent_Player_eventUpgradeAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Player::execUpgradeAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AvailablePoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpgradeAbility(Z_Param_AvailablePoints);
	P_NATIVE_END;
}
// End Class UAbilityComponent_Player Function UpgradeAbility

// Begin Class UAbilityComponent_Player
void UAbilityComponent_Player::StaticRegisterNativesUAbilityComponent_Player()
{
	UClass* Class = UAbilityComponent_Player::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActionKey", &UAbilityComponent_Player::execGetActionKey },
		{ "GetCurrentAbilityLevel", &UAbilityComponent_Player::execGetCurrentAbilityLevel },
		{ "IsAbilityActive", &UAbilityComponent_Player::execIsAbilityActive },
		{ "IsAbilityAvailable", &UAbilityComponent_Player::execIsAbilityAvailable },
		{ "SetAbilityAvailability", &UAbilityComponent_Player::execSetAbilityAvailability },
		{ "UpgradeAbility", &UAbilityComponent_Player::execUpgradeAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_Player);
UClass* Z_Construct_UClass_UAbilityComponent_Player_NoRegister()
{
	return UAbilityComponent_Player::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/Base/AbilityComponent_Player.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityUnlockedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCooldownChangedDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityCooldownFinishedDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAbilityAvailable_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequirementsDataTable_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOnCooldown_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionKey_MetaData[] = {
		{ "Category", "AbilityComponent_Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//player\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityUnlockedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCooldownChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityCooldownFinishedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static void NewProp_bIsAbilityAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAbilityAvailable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequirementsDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static void NewProp_bIsOnCooldown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOnCooldown;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_Player_GetActionKey, "GetActionKey" }, // 1009229603
		{ &Z_Construct_UFunction_UAbilityComponent_Player_GetCurrentAbilityLevel, "GetCurrentAbilityLevel" }, // 4126119957
		{ &Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityActive, "IsAbilityActive" }, // 3660841670
		{ &Z_Construct_UFunction_UAbilityComponent_Player_IsAbilityAvailable, "IsAbilityAvailable" }, // 2205290636
		{ &Z_Construct_UFunction_UAbilityComponent_Player_SetAbilityAvailability, "SetAbilityAvailability" }, // 582744242
		{ &Z_Construct_UFunction_UAbilityComponent_Player_UpgradeAbility, "UpgradeAbility" }, // 164754765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_OnAbilityUnlockedDelegate = { "OnAbilityUnlockedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, OnAbilityUnlockedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityUnlockedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityUnlockedDelegate_MetaData), NewProp_OnAbilityUnlockedDelegate_MetaData) }; // 3720889958
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_OnAbilityCooldownChangedDelegate = { "OnAbilityCooldownChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, OnAbilityCooldownChangedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityCooldownChangedDelegate_MetaData), NewProp_OnAbilityCooldownChangedDelegate_MetaData) }; // 132429721
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_OnAbilityCooldownFinishedDelegate = { "OnAbilityCooldownFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, OnAbilityCooldownFinishedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityCooldownFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityCooldownFinishedDelegate_MetaData), NewProp_OnAbilityCooldownFinishedDelegate_MetaData) }; // 3827578266
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
void Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsAbilityAvailable_SetBit(void* Obj)
{
	((UAbilityComponent_Player*)Obj)->bIsAbilityAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsAbilityAvailable = { "bIsAbilityAvailable", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_Player), &Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsAbilityAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAbilityAvailable_MetaData), NewProp_bIsAbilityAvailable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_RequirementsDataTable = { "RequirementsDataTable", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, RequirementsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequirementsDataTable_MetaData), NewProp_RequirementsDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
void Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsOnCooldown_SetBit(void* Obj)
{
	((UAbilityComponent_Player*)Obj)->bIsOnCooldown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsOnCooldown = { "bIsOnCooldown", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_Player), &Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsOnCooldown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOnCooldown_MetaData), NewProp_bIsOnCooldown_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Player, ActionKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionKey_MetaData), NewProp_ActionKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_OnAbilityUnlockedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_OnAbilityCooldownChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_OnAbilityCooldownFinishedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsAbilityAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_RequirementsDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_bIsOnCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Player_Statics::NewProp_ActionKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_Player_Statics::ClassParams = {
	&UAbilityComponent_Player::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_Player_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Player_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_Player()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_Player.OuterSingleton, Z_Construct_UClass_UAbilityComponent_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_Player.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_Player>()
{
	return UAbilityComponent_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_Player);
UAbilityComponent_Player::~UAbilityComponent_Player() {}
// End Class UAbilityComponent_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_Player, UAbilityComponent_Player::StaticClass, TEXT("UAbilityComponent_Player"), &Z_Registration_Info_UClass_UAbilityComponent_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_Player), 2855637460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_1190608629(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
