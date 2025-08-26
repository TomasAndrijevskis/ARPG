// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTTask_SummonMinions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SummonMinions() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTTask_SummonMinions();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTTask_SummonMinions_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTTask_SummonMinions Function FinishTask
struct Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTTask_SummonMinions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_SummonMinions, nullptr, "FinishTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_SummonMinions::execFinishTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishTask();
	P_NATIVE_END;
}
// End Class UBTTask_SummonMinions Function FinishTask

// Begin Class UBTTask_SummonMinions Function StartSummon
struct Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTTask_SummonMinions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_SummonMinions, nullptr, "StartSummon", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_SummonMinions::execStartSummon)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartSummon();
	P_NATIVE_END;
}
// End Class UBTTask_SummonMinions Function StartSummon

// Begin Class UBTTask_SummonMinions
void UBTTask_SummonMinions::StaticRegisterNativesUBTTask_SummonMinions()
{
	UClass* Class = UBTTask_SummonMinions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishTask", &UBTTask_SummonMinions::execFinishTask },
		{ "StartSummon", &UBTTask_SummonMinions::execStartSummon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SummonMinions);
UClass* Z_Construct_UClass_UBTTask_SummonMinions_NoRegister()
{
	return UBTTask_SummonMinions::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SummonMinions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTTask_SummonMinions.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTTask_SummonMinions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonAnimMontage_MetaData[] = {
		{ "Category", "BTTask_SummonMinions" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTTask_SummonMinions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SummonAnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_SummonMinions_FinishTask, "FinishTask" }, // 2848314043
		{ &Z_Construct_UFunction_UBTTask_SummonMinions_StartSummon, "StartSummon" }, // 1834928327
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SummonMinions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_SummonMinions_Statics::NewProp_SummonAnimMontage = { "SummonAnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SummonMinions, SummonAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonAnimMontage_MetaData), NewProp_SummonAnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SummonMinions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SummonMinions_Statics::NewProp_SummonAnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SummonMinions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SummonMinions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SummonMinions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SummonMinions_Statics::ClassParams = {
	&UBTTask_SummonMinions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_SummonMinions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SummonMinions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SummonMinions_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SummonMinions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SummonMinions()
{
	if (!Z_Registration_Info_UClass_UBTTask_SummonMinions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SummonMinions.OuterSingleton, Z_Construct_UClass_UBTTask_SummonMinions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SummonMinions.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTTask_SummonMinions>()
{
	return UBTTask_SummonMinions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SummonMinions);
UBTTask_SummonMinions::~UBTTask_SummonMinions() {}
// End Class UBTTask_SummonMinions

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTTask_SummonMinions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SummonMinions, UBTTask_SummonMinions::StaticClass, TEXT("UBTTask_SummonMinions"), &Z_Registration_Info_UClass_UBTTask_SummonMinions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SummonMinions), 2107295151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTTask_SummonMinions_h_251914276(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTTask_SummonMinions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTTask_SummonMinions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
