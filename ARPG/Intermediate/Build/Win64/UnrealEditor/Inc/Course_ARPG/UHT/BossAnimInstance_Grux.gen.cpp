// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/BossAnimInstance_Grux.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance_Grux() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Grux();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Grux_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBossAnimInstance_Grux Function HandleChargeStart
struct Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics
{
	struct BossAnimInstance_Grux_eventHandleChargeStart_Parms
	{
		bool bIsReadyToCharge;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsReadyToCharge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadyToCharge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge_SetBit(void* Obj)
{
	((BossAnimInstance_Grux_eventHandleChargeStart_Parms*)Obj)->bIsReadyToCharge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge = { "bIsReadyToCharge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BossAnimInstance_Grux_eventHandleChargeStart_Parms), &Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::NewProp_bIsReadyToCharge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Grux, nullptr, "HandleChargeStart", nullptr, nullptr, Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::BossAnimInstance_Grux_eventHandleChargeStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::BossAnimInstance_Grux_eventHandleChargeStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Grux::execHandleChargeStart)
{
	P_GET_UBOOL(Z_Param_bIsReadyToCharge);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChargeStart(Z_Param_bIsReadyToCharge);
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Grux Function HandleChargeStart

// Begin Class UBossAnimInstance_Grux Function HandleProjectileSpawn
struct Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Grux, nullptr, "HandleProjectileSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Grux::execHandleProjectileSpawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleProjectileSpawn();
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Grux Function HandleProjectileSpawn

// Begin Class UBossAnimInstance_Grux Function SetIsCharging
struct Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics
{
	struct BossAnimInstance_Grux_eventSetIsCharging_Parms
	{
		bool IsCharging;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCharging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging_SetBit(void* Obj)
{
	((BossAnimInstance_Grux_eventSetIsCharging_Parms*)Obj)->IsCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging = { "IsCharging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BossAnimInstance_Grux_eventSetIsCharging_Parms), &Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::NewProp_IsCharging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Grux, nullptr, "SetIsCharging", nullptr, nullptr, Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::BossAnimInstance_Grux_eventSetIsCharging_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::BossAnimInstance_Grux_eventSetIsCharging_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Grux::execSetIsCharging)
{
	P_GET_UBOOL(Z_Param_IsCharging);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsCharging(Z_Param_IsCharging);
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Grux Function SetIsCharging

// Begin Class UBossAnimInstance_Grux
void UBossAnimInstance_Grux::StaticRegisterNativesUBossAnimInstance_Grux()
{
	UClass* Class = UBossAnimInstance_Grux::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleChargeStart", &UBossAnimInstance_Grux::execHandleChargeStart },
		{ "HandleProjectileSpawn", &UBossAnimInstance_Grux::execHandleProjectileSpawn },
		{ "SetIsCharging", &UBossAnimInstance_Grux::execSetIsCharging },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossAnimInstance_Grux);
UClass* Z_Construct_UClass_UBossAnimInstance_Grux_NoRegister()
{
	return UBossAnimInstance_Grux::StaticClass();
}
struct Z_Construct_UClass_UBossAnimInstance_Grux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/BossAnimInstance_Grux.h" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Grux.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharging_MetaData[] = {
		{ "Category", "BossAnimInstance_Grux" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Grux.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardChargeKey_MetaData[] = {
		{ "Category", "BossAnimInstance_Grux" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharging;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BlackboardChargeKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBossAnimInstance_Grux_HandleChargeStart, "HandleChargeStart" }, // 3478743696
		{ &Z_Construct_UFunction_UBossAnimInstance_Grux_HandleProjectileSpawn, "HandleProjectileSpawn" }, // 2842757777
		{ &Z_Construct_UFunction_UBossAnimInstance_Grux_SetIsCharging, "SetIsCharging" }, // 320274246
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance_Grux>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBossAnimInstance_Grux_Statics::NewProp_bIsCharging_SetBit(void* Obj)
{
	((UBossAnimInstance_Grux*)Obj)->bIsCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Grux_Statics::NewProp_bIsCharging = { "bIsCharging", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBossAnimInstance_Grux), &Z_Construct_UClass_UBossAnimInstance_Grux_Statics::NewProp_bIsCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCharging_MetaData), NewProp_bIsCharging_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBossAnimInstance_Grux_Statics::NewProp_BlackboardChargeKey = { "BlackboardChargeKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBossAnimInstance_Grux, BlackboardChargeKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardChargeKey_MetaData), NewProp_BlackboardChargeKey_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Grux_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Grux_Statics::NewProp_bIsCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Grux_Statics::NewProp_BlackboardChargeKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Grux_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBossAnimInstance_Grux_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBossAnimInstance_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Grux_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Grux_Statics::ClassParams = {
	&UBossAnimInstance_Grux::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBossAnimInstance_Grux_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Grux_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Grux_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossAnimInstance_Grux_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBossAnimInstance_Grux()
{
	if (!Z_Registration_Info_UClass_UBossAnimInstance_Grux.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossAnimInstance_Grux.OuterSingleton, Z_Construct_UClass_UBossAnimInstance_Grux_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBossAnimInstance_Grux.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBossAnimInstance_Grux>()
{
	return UBossAnimInstance_Grux::StaticClass();
}
UBossAnimInstance_Grux::UBossAnimInstance_Grux(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance_Grux);
UBossAnimInstance_Grux::~UBossAnimInstance_Grux() {}
// End Class UBossAnimInstance_Grux

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBossAnimInstance_Grux, UBossAnimInstance_Grux::StaticClass, TEXT("UBossAnimInstance_Grux"), &Z_Registration_Info_UClass_UBossAnimInstance_Grux, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossAnimInstance_Grux), 1952720174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_2868395869(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
