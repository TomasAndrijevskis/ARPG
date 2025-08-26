// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/AnimInstance_Grux.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimInstance_Grux() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAnimInstance_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAnimInstance_Grux();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAnimInstance_Grux_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAnimInstance_Grux Function HandleChargeStart
struct Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics
{
	struct AnimInstance_Grux_eventHandleChargeStart_Parms
	{
		bool bIsReadyToCharge;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/AnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsReadyToCharge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadyToCharge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge_SetBit(void* Obj)
{
	((AnimInstance_Grux_eventHandleChargeStart_Parms*)Obj)->bIsReadyToCharge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge = { "bIsReadyToCharge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimInstance_Grux_eventHandleChargeStart_Parms), &Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance_Grux, nullptr, "HandleChargeStart", nullptr, nullptr, Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::AnimInstance_Grux_eventHandleChargeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::AnimInstance_Grux_eventHandleChargeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimInstance_Grux::execHandleChargeStart)
{
	P_GET_UBOOL(Z_Param_bIsReadyToCharge);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChargeStart(Z_Param_bIsReadyToCharge);
	P_NATIVE_END;
}
// End Class UAnimInstance_Grux Function HandleChargeStart

// Begin Class UAnimInstance_Grux Function HandleProjectileSpawn
struct Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/AnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance_Grux, nullptr, "HandleProjectileSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimInstance_Grux::execHandleProjectileSpawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleProjectileSpawn();
	P_NATIVE_END;
}
// End Class UAnimInstance_Grux Function HandleProjectileSpawn

// Begin Class UAnimInstance_Grux Function SetIsCharging
struct Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics
{
	struct AnimInstance_Grux_eventSetIsCharging_Parms
	{
		bool IsCharging;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/AnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCharging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging_SetBit(void* Obj)
{
	((AnimInstance_Grux_eventSetIsCharging_Parms*)Obj)->IsCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging = { "IsCharging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimInstance_Grux_eventSetIsCharging_Parms), &Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimInstance_Grux, nullptr, "SetIsCharging", nullptr, nullptr, Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::AnimInstance_Grux_eventSetIsCharging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::AnimInstance_Grux_eventSetIsCharging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimInstance_Grux::execSetIsCharging)
{
	P_GET_UBOOL(Z_Param_IsCharging);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsCharging(Z_Param_IsCharging);
	P_NATIVE_END;
}
// End Class UAnimInstance_Grux Function SetIsCharging

// Begin Class UAnimInstance_Grux
void UAnimInstance_Grux::StaticRegisterNativesUAnimInstance_Grux()
{
	UClass* Class = UAnimInstance_Grux::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleChargeStart", &UAnimInstance_Grux::execHandleChargeStart },
		{ "HandleProjectileSpawn", &UAnimInstance_Grux::execHandleProjectileSpawn },
		{ "SetIsCharging", &UAnimInstance_Grux::execSetIsCharging },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimInstance_Grux);
UClass* Z_Construct_UClass_UAnimInstance_Grux_NoRegister()
{
	return UAnimInstance_Grux::StaticClass();
}
struct Z_Construct_UClass_UAnimInstance_Grux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/AnimInstance_Grux.h" },
		{ "ModuleRelativePath", "Public/Animations/AnimInstance_Grux.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharging_MetaData[] = {
		{ "Category", "AnimInstance_Grux" },
		{ "ModuleRelativePath", "Public/Animations/AnimInstance_Grux.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardChargeKey_MetaData[] = {
		{ "Category", "AnimInstance_Grux" },
		{ "ModuleRelativePath", "Public/Animations/AnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharging;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlackboardChargeKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimInstance_Grux_HandleChargeStart, "HandleChargeStart" }, // 1577546080
		{ &Z_Construct_UFunction_UAnimInstance_Grux_HandleProjectileSpawn, "HandleProjectileSpawn" }, // 1524961603
		{ &Z_Construct_UFunction_UAnimInstance_Grux_SetIsCharging, "SetIsCharging" }, // 2864759192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimInstance_Grux>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimInstance_Grux_Statics::NewProp_bIsCharging_SetBit(void* Obj)
{
	((UAnimInstance_Grux*)Obj)->bIsCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimInstance_Grux_Statics::NewProp_bIsCharging = { "bIsCharging", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimInstance_Grux), &Z_Construct_UClass_UAnimInstance_Grux_Statics::NewProp_bIsCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCharging_MetaData), NewProp_bIsCharging_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimInstance_Grux_Statics::NewProp_BlackboardChargeKey = { "BlackboardChargeKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimInstance_Grux, BlackboardChargeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardChargeKey_MetaData), NewProp_BlackboardChargeKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimInstance_Grux_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Grux_Statics::NewProp_bIsCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimInstance_Grux_Statics::NewProp_BlackboardChargeKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Grux_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimInstance_Grux_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Grux_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimInstance_Grux_Statics::ClassParams = {
	&UAnimInstance_Grux::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimInstance_Grux_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Grux_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimInstance_Grux_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimInstance_Grux_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimInstance_Grux()
{
	if (!Z_Registration_Info_UClass_UAnimInstance_Grux.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimInstance_Grux.OuterSingleton, Z_Construct_UClass_UAnimInstance_Grux_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimInstance_Grux.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAnimInstance_Grux>()
{
	return UAnimInstance_Grux::StaticClass();
}
UAnimInstance_Grux::UAnimInstance_Grux(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimInstance_Grux);
UAnimInstance_Grux::~UAnimInstance_Grux() {}
// End Class UAnimInstance_Grux

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Grux_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimInstance_Grux, UAnimInstance_Grux::StaticClass, TEXT("UAnimInstance_Grux"), &Z_Registration_Info_UClass_UAnimInstance_Grux, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimInstance_Grux), 3027837335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Grux_h_2056856863(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Grux_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Grux_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
