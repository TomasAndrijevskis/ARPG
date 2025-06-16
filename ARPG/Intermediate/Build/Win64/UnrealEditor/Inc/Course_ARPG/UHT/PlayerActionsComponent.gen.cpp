// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/PlayerActionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerActionsComponent() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerActionsComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnSprintSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnSprintSignature_Parms
	{
		float SprintStaminaCost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintStaminaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::NewProp_SprintStaminaCost = { "SprintStaminaCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnSprintSignature_Parms, SprintStaminaCost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::NewProp_SprintStaminaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnSprintSignature__DelegateSignature", "PlayerActionsComponent", "OnSprintDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnSprintSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnSprintSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSprintSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSprintSignature, float SprintStaminaCost)
{
	struct _Script_Course_ARPG_eventOnSprintSignature_Parms
	{
		float SprintStaminaCost;
	};
	_Script_Course_ARPG_eventOnSprintSignature_Parms Parms;
	Parms.SprintStaminaCost=SprintStaminaCost;
	OnSprintSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnSprintSignature

// Begin Delegate FOnRollSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnRollSignature_Parms
	{
		float RollStaminaCost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollStaminaCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::NewProp_RollStaminaCost = { "RollStaminaCost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnRollSignature_Parms, RollStaminaCost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::NewProp_RollStaminaCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnRollSignature__DelegateSignature", "PlayerActionsComponent", "OnRollDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnRollSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnRollSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRollSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRollSignature, float RollStaminaCost)
{
	struct _Script_Course_ARPG_eventOnRollSignature_Parms
	{
		float RollStaminaCost;
	};
	_Script_Course_ARPG_eventOnRollSignature_Parms Parms;
	Parms.RollStaminaCost=RollStaminaCost;
	OnRollSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRollSignature

// Begin Class UPlayerActionsComponent Function FinishRollAnim
struct Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "FinishRollAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerActionsComponent::execFinishRollAnim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishRollAnim();
	P_NATIVE_END;
}
// End Class UPlayerActionsComponent Function FinishRollAnim

// Begin Class UPlayerActionsComponent Function Roll
struct Z_Construct_UFunction_UPlayerActionsComponent_Roll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Roll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Roll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Roll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Roll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Roll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Roll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerActionsComponent::execRoll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Roll();
	P_NATIVE_END;
}
// End Class UPlayerActionsComponent Function Roll

// Begin Class UPlayerActionsComponent Function Sprint
struct Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Sprint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Sprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Sprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerActionsComponent::execSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sprint();
	P_NATIVE_END;
}
// End Class UPlayerActionsComponent Function Sprint

// Begin Class UPlayerActionsComponent Function Walk
struct Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerActionsComponent, nullptr, "Walk", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerActionsComponent_Walk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerActionsComponent_Walk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerActionsComponent::execWalk)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Walk();
	P_NATIVE_END;
}
// End Class UPlayerActionsComponent Function Walk

// Begin Class UPlayerActionsComponent
void UPlayerActionsComponent::StaticRegisterNativesUPlayerActionsComponent()
{
	UClass* Class = UPlayerActionsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishRollAnim", &UPlayerActionsComponent::execFinishRollAnim },
		{ "Roll", &UPlayerActionsComponent::execRoll },
		{ "Sprint", &UPlayerActionsComponent::execSprint },
		{ "Walk", &UPlayerActionsComponent::execWalk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerActionsComponent);
UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister()
{
	return UPlayerActionsComponent::StaticClass();
}
struct Z_Construct_UClass_UPlayerActionsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Characters/PlayerActionsComponent.h" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSprintDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRollDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollAnimMontage_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintCost_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollCost_MetaData[] = {
		{ "Category", "PlayerActionsComponent" },
		{ "ModuleRelativePath", "Public/Characters/PlayerActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSprintDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRollDelegate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollAnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerActionsComponent_FinishRollAnim, "FinishRollAnim" }, // 702889704
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Roll, "Roll" }, // 3472726326
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Sprint, "Sprint" }, // 1744059307
		{ &Z_Construct_UFunction_UPlayerActionsComponent_Walk, "Walk" }, // 3952828670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerActionsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate = { "OnSprintDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, OnSprintDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnSprintSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSprintDelegate_MetaData), NewProp_OnSprintDelegate_MetaData) }; // 399577437
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnRollDelegate = { "OnRollDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, OnRollDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnRollSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRollDelegate_MetaData), NewProp_OnRollDelegate_MetaData) }; // 1472776317
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_RollAnimMontage = { "RollAnimMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, RollAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollAnimMontage_MetaData), NewProp_RollAnimMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost = { "SprintCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, SprintCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintCost_MetaData), NewProp_SprintCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_RollCost = { "RollCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerActionsComponent, RollCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollCost_MetaData), NewProp_RollCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnSprintDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_OnRollDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_RollAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerActionsComponent_Statics::NewProp_RollCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams = {
	&UPlayerActionsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerActionsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerActionsComponent()
{
	if (!Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton, Z_Construct_UClass_UPlayerActionsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerActionsComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UPlayerActionsComponent>()
{
	return UPlayerActionsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerActionsComponent);
UPlayerActionsComponent::~UPlayerActionsComponent() {}
// End Class UPlayerActionsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerActionsComponent, UPlayerActionsComponent::StaticClass, TEXT("UPlayerActionsComponent"), &Z_Registration_Info_UClass_UPlayerActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerActionsComponent), 2005101645U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_1731549325(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
