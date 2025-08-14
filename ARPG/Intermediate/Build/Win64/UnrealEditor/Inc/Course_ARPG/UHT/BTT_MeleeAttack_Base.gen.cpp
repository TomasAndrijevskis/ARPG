// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_MeleeAttack_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_MeleeAttack_Base() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_MeleeAttack_Base Function FinishAttackTask
struct Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_MeleeAttack_Base, nullptr, "FinishAttackTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_MeleeAttack_Base::execFinishAttackTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAttackTask();
	P_NATIVE_END;
}
// End Class UBTT_MeleeAttack_Base Function FinishAttackTask

// Begin Class UBTT_MeleeAttack_Base
void UBTT_MeleeAttack_Base::StaticRegisterNativesUBTT_MeleeAttack_Base()
{
	UClass* Class = UBTT_MeleeAttack_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishAttackTask", &UBTT_MeleeAttack_Base::execFinishAttackTask },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_MeleeAttack_Base);
UClass* Z_Construct_UClass_UBTT_MeleeAttack_Base_NoRegister()
{
	return UBTT_MeleeAttack_Base::StaticClass();
}
struct Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_MeleeAttack_Base.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRadius_MetaData[] = {
		{ "Category", "BTT_MeleeAttack_Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//bool bHasRangeAttack;\n" },
#endif
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere)\nbool bHasRangeAttack;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTT_MeleeAttack_Base" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTT_MeleeAttack_Base_FinishAttackTask, "FinishAttackTask" }, // 1524439725
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_MeleeAttack_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::NewProp_AttackRadius = { "AttackRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_MeleeAttack_Base, AttackRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRadius_MetaData), NewProp_AttackRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_MeleeAttack_Base, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::NewProp_AttackRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::NewProp_AcceptableRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::ClassParams = {
	&UBTT_MeleeAttack_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_MeleeAttack_Base()
{
	if (!Z_Registration_Info_UClass_UBTT_MeleeAttack_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_MeleeAttack_Base.OuterSingleton, Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_MeleeAttack_Base.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_MeleeAttack_Base>()
{
	return UBTT_MeleeAttack_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_MeleeAttack_Base);
UBTT_MeleeAttack_Base::~UBTT_MeleeAttack_Base() {}
// End Class UBTT_MeleeAttack_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_MeleeAttack_Base, UBTT_MeleeAttack_Base::StaticClass, TEXT("UBTT_MeleeAttack_Base"), &Z_Registration_Info_UClass_UBTT_MeleeAttack_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_MeleeAttack_Base), 1807093149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_1123028230(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
