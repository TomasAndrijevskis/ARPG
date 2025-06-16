// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/BossAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBossAnimInstance Function UpdateSpeed
struct Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance, nullptr, "UpdateSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance::execUpdateSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSpeed();
	P_NATIVE_END;
}
// End Class UBossAnimInstance Function UpdateSpeed

// Begin Class UBossAnimInstance
void UBossAnimInstance::StaticRegisterNativesUBossAnimInstance()
{
	UClass* Class = UBossAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateSpeed", &UBossAnimInstance::execUpdateSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossAnimInstance);
UClass* Z_Construct_UClass_UBossAnimInstance_NoRegister()
{
	return UBossAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBossAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/BossAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharging_MetaData[] = {
		{ "Category", "BossAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "BossAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCharging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharging;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBossAnimInstance_UpdateSpeed, "UpdateSpeed" }, // 1689617625
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_bIsCharging_SetBit(void* Obj)
{
	((UBossAnimInstance*)Obj)->bIsCharging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_bIsCharging = { "bIsCharging", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBossAnimInstance), &Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_bIsCharging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCharging_MetaData), NewProp_bIsCharging_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBossAnimInstance, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeed_MetaData), NewProp_CurrentSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_bIsCharging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Statics::NewProp_CurrentSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams = {
	&UBossAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBossAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton, Z_Construct_UClass_UBossAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBossAnimInstance.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBossAnimInstance>()
{
	return UBossAnimInstance::StaticClass();
}
UBossAnimInstance::UBossAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance);
UBossAnimInstance::~UBossAnimInstance() {}
// End Class UBossAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Animations_BossAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBossAnimInstance, UBossAnimInstance::StaticClass, TEXT("UBossAnimInstance"), &Z_Registration_Info_UClass_UBossAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossAnimInstance), 3041507361U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Animations_BossAnimInstance_h_2818220776(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Animations_BossAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Animations_BossAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
