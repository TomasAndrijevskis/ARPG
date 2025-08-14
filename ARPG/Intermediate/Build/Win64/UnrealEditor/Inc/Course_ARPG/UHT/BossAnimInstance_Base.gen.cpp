// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/BossAnimInstance_Base.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance_Base() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Base_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBossAnimInstance_Base Function HandleResetAttack
struct Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Base, nullptr, "HandleResetAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Base::execHandleResetAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleResetAttack();
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Base Function HandleResetAttack

// Begin Class UBossAnimInstance_Base Function UpdateSpeed
struct Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Base, nullptr, "UpdateSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Base::execUpdateSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSpeed();
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Base Function UpdateSpeed

// Begin Class UBossAnimInstance_Base
void UBossAnimInstance_Base::StaticRegisterNativesUBossAnimInstance_Base()
{
	UClass* Class = UBossAnimInstance_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleResetAttack", &UBossAnimInstance_Base::execHandleResetAttack },
		{ "UpdateSpeed", &UBossAnimInstance_Base::execUpdateSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossAnimInstance_Base);
UClass* Z_Construct_UClass_UBossAnimInstance_Base_NoRegister()
{
	return UBossAnimInstance_Base::StaticClass();
}
struct Z_Construct_UClass_UBossAnimInstance_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/BossAnimInstance_Base.h" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "BossAnimInstance_Base" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBossAnimInstance_Base_HandleResetAttack, "HandleResetAttack" }, // 3898788243
		{ &Z_Construct_UFunction_UBossAnimInstance_Base_UpdateSpeed, "UpdateSpeed" }, // 414032288
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBossAnimInstance_Base_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBossAnimInstance_Base, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeed_MetaData), NewProp_CurrentSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Base_Statics::NewProp_CurrentSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBossAnimInstance_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Base_Statics::ClassParams = {
	&UBossAnimInstance_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBossAnimInstance_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Base_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossAnimInstance_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBossAnimInstance_Base()
{
	if (!Z_Registration_Info_UClass_UBossAnimInstance_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossAnimInstance_Base.OuterSingleton, Z_Construct_UClass_UBossAnimInstance_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBossAnimInstance_Base.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBossAnimInstance_Base>()
{
	return UBossAnimInstance_Base::StaticClass();
}
UBossAnimInstance_Base::UBossAnimInstance_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance_Base);
UBossAnimInstance_Base::~UBossAnimInstance_Base() {}
// End Class UBossAnimInstance_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBossAnimInstance_Base, UBossAnimInstance_Base::StaticClass, TEXT("UBossAnimInstance_Base"), &Z_Registration_Info_UClass_UBossAnimInstance_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossAnimInstance_Base), 3602124195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_1953488385(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
