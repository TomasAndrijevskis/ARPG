// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_Base() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
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
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
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
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
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
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
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

// Begin Class UAbilityComponent_Base Function CreateIcon
struct Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
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

// Begin Class UAbilityComponent_Base Function FinishAbilityCast
struct Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "FinishAbilityCast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execFinishAbilityCast)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAbilityCast();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function FinishAbilityCast

// Begin Class UAbilityComponent_Base Function GetAbilityDuration
struct Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics
{
	struct AbilityComponent_Base_eventGetAbilityDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "GetAbilityDuration", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::AbilityComponent_Base_eventGetAbilityDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration_Statics::Function_MetaDataParams) };
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

// Begin Class UAbilityComponent_Base Function StartAbility
struct Z_Construct_UFunction_UAbilityComponent_Base_StartAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_Base_StartAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_Base, nullptr, "StartAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_Base_StartAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_Base_StartAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_Base_StartAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_Base_StartAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_Base::execStartAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility();
	P_NATIVE_END;
}
// End Class UAbilityComponent_Base Function StartAbility

// Begin Class UAbilityComponent_Base
void UAbilityComponent_Base::StaticRegisterNativesUAbilityComponent_Base()
{
	UClass* Class = UAbilityComponent_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateIcon", &UAbilityComponent_Base::execCreateIcon },
		{ "FinishAbilityCast", &UAbilityComponent_Base::execFinishAbilityCast },
		{ "GetAbilityDuration", &UAbilityComponent_Base::execGetAbilityDuration },
		{ "StartAbility", &UAbilityComponent_Base::execStartAbility },
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
		{ "IncludePath", "Combat/Abilities/Base/AbilityComponent_Base.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityTimerChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityStartedDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAbilityFinishedDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDuration_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "AbilityComponent_Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//both\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "both" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityTimerChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityStartedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAbilityFinishedDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityDuration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_Base_CreateIcon, "CreateIcon" }, // 1361929798
		{ &Z_Construct_UFunction_UAbilityComponent_Base_FinishAbilityCast, "FinishAbilityCast" }, // 4053851870
		{ &Z_Construct_UFunction_UAbilityComponent_Base_GetAbilityDuration, "GetAbilityDuration" }, // 4267869782
		{ &Z_Construct_UFunction_UAbilityComponent_Base_StartAbility, "StartAbility" }, // 1610519373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityTimerChangedDelegate = { "OnAbilityTimerChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityTimerChangedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityTimerChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityTimerChangedDelegate_MetaData), NewProp_OnAbilityTimerChangedDelegate_MetaData) }; // 3869497147
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityStartedDelegate = { "OnAbilityStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityStartedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityStartedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityStartedDelegate_MetaData), NewProp_OnAbilityStartedDelegate_MetaData) }; // 484884986
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityFinishedDelegate = { "OnAbilityFinishedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, OnAbilityFinishedDelegate), Z_Construct_UDelegateFunction_Course_ARPG_OnAbilityFinishedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAbilityFinishedDelegate_MetaData), NewProp_OnAbilityFinishedDelegate_MetaData) }; // 496132107
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_TimerHandle = { "TimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, TimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_MetaData), NewProp_TimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AbilityDuration = { "AbilityDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, AbilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDuration_MetaData), NewProp_AbilityDuration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_Base, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityTimerChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityStartedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_OnAbilityFinishedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_TimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_AbilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_Base_Statics::NewProp_Icon,
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
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_Base, UAbilityComponent_Base::StaticClass, TEXT("UAbilityComponent_Base"), &Z_Registration_Info_UClass_UAbilityComponent_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_Base), 47703162U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Base_h_2932035455(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
