// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/BossAnimInstance_Rampage.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossAnimInstance_Rampage() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Rampage();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossAnimInstance_Rampage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBossAnimInstance_Rampage Function HandleSmashingGround
struct Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Rampage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Rampage, nullptr, "HandleSmashingGround", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Rampage::execHandleSmashingGround)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleSmashingGround();
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Rampage Function HandleSmashingGround

// Begin Class UBossAnimInstance_Rampage Function SetIsSmashingGround
struct Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics
{
	struct BossAnimInstance_Rampage_eventSetIsSmashingGround_Parms
	{
		bool bIsSmashing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Rampage.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSmashing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSmashing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::NewProp_bIsSmashing_SetBit(void* Obj)
{
	((BossAnimInstance_Rampage_eventSetIsSmashingGround_Parms*)Obj)->bIsSmashing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::NewProp_bIsSmashing = { "bIsSmashing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BossAnimInstance_Rampage_eventSetIsSmashingGround_Parms), &Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::NewProp_bIsSmashing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::NewProp_bIsSmashing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBossAnimInstance_Rampage, nullptr, "SetIsSmashingGround", nullptr, nullptr, Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::BossAnimInstance_Rampage_eventSetIsSmashingGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::BossAnimInstance_Rampage_eventSetIsSmashingGround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBossAnimInstance_Rampage::execSetIsSmashingGround)
{
	P_GET_UBOOL(Z_Param_bIsSmashing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsSmashingGround(Z_Param_bIsSmashing);
	P_NATIVE_END;
}
// End Class UBossAnimInstance_Rampage Function SetIsSmashingGround

// Begin Class UBossAnimInstance_Rampage
void UBossAnimInstance_Rampage::StaticRegisterNativesUBossAnimInstance_Rampage()
{
	UClass* Class = UBossAnimInstance_Rampage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleSmashingGround", &UBossAnimInstance_Rampage::execHandleSmashingGround },
		{ "SetIsSmashingGround", &UBossAnimInstance_Rampage::execSetIsSmashingGround },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBossAnimInstance_Rampage);
UClass* Z_Construct_UClass_UBossAnimInstance_Rampage_NoRegister()
{
	return UBossAnimInstance_Rampage::StaticClass();
}
struct Z_Construct_UClass_UBossAnimInstance_Rampage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/BossAnimInstance_Rampage.h" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Rampage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSmashingGround_MetaData[] = {
		{ "Category", "BossAnimInstance_Rampage" },
		{ "ModuleRelativePath", "Public/Animations/BossAnimInstance_Rampage.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsSmashingGround_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSmashingGround;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBossAnimInstance_Rampage_HandleSmashingGround, "HandleSmashingGround" }, // 689060381
		{ &Z_Construct_UFunction_UBossAnimInstance_Rampage_SetIsSmashingGround, "SetIsSmashingGround" }, // 2370762368
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBossAnimInstance_Rampage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::NewProp_bIsSmashingGround_SetBit(void* Obj)
{
	((UBossAnimInstance_Rampage*)Obj)->bIsSmashingGround = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::NewProp_bIsSmashingGround = { "bIsSmashingGround", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBossAnimInstance_Rampage), &Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::NewProp_bIsSmashingGround_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSmashingGround_MetaData), NewProp_bIsSmashingGround_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::NewProp_bIsSmashingGround,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBossAnimInstance_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::ClassParams = {
	&UBossAnimInstance_Rampage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::Class_MetaDataParams), Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBossAnimInstance_Rampage()
{
	if (!Z_Registration_Info_UClass_UBossAnimInstance_Rampage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBossAnimInstance_Rampage.OuterSingleton, Z_Construct_UClass_UBossAnimInstance_Rampage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBossAnimInstance_Rampage.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBossAnimInstance_Rampage>()
{
	return UBossAnimInstance_Rampage::StaticClass();
}
UBossAnimInstance_Rampage::UBossAnimInstance_Rampage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBossAnimInstance_Rampage);
UBossAnimInstance_Rampage::~UBossAnimInstance_Rampage() {}
// End Class UBossAnimInstance_Rampage

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Rampage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBossAnimInstance_Rampage, UBossAnimInstance_Rampage::StaticClass, TEXT("UBossAnimInstance_Rampage"), &Z_Registration_Info_UClass_UBossAnimInstance_Rampage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBossAnimInstance_Rampage), 4048933529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Rampage_h_4025779293(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Rampage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Rampage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
