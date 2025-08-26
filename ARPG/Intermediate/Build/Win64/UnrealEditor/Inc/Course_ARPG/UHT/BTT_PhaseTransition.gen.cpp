// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_PhaseTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_PhaseTransition() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_PhaseTransition();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_PhaseTransition_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EEnemyStates();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_PhaseTransition
void UBTT_PhaseTransition::StaticRegisterNativesUBTT_PhaseTransition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_PhaseTransition);
UClass* Z_Construct_UClass_UBTT_PhaseTransition_NoRegister()
{
	return UBTT_PhaseTransition::StaticClass();
}
struct Z_Construct_UClass_UBTT_PhaseTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_PhaseTransition.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_PhaseTransition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTransitionMontage_MetaData[] = {
		{ "Category", "BTT_PhaseTransition" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_PhaseTransition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextState_MetaData[] = {
		{ "Category", "BTT_PhaseTransition" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_PhaseTransition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhaseTransitionMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NextState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_PhaseTransition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTT_PhaseTransition_Statics::NewProp_PhaseTransitionMontage = { "PhaseTransitionMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_PhaseTransition, PhaseTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTransitionMontage_MetaData), NewProp_PhaseTransitionMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTT_PhaseTransition_Statics::NewProp_NextState = { "NextState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_PhaseTransition, NextState), Z_Construct_UEnum_Course_ARPG_EEnemyStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextState_MetaData), NewProp_NextState_MetaData) }; // 1265401373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_PhaseTransition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PhaseTransition_Statics::NewProp_PhaseTransitionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_PhaseTransition_Statics::NewProp_NextState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PhaseTransition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_PhaseTransition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PhaseTransition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_PhaseTransition_Statics::ClassParams = {
	&UBTT_PhaseTransition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_PhaseTransition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PhaseTransition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_PhaseTransition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_PhaseTransition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_PhaseTransition()
{
	if (!Z_Registration_Info_UClass_UBTT_PhaseTransition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_PhaseTransition.OuterSingleton, Z_Construct_UClass_UBTT_PhaseTransition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_PhaseTransition.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_PhaseTransition>()
{
	return UBTT_PhaseTransition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_PhaseTransition);
UBTT_PhaseTransition::~UBTT_PhaseTransition() {}
// End Class UBTT_PhaseTransition

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PhaseTransition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_PhaseTransition, UBTT_PhaseTransition::StaticClass, TEXT("UBTT_PhaseTransition"), &Z_Registration_Info_UClass_UBTT_PhaseTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_PhaseTransition), 3172777829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PhaseTransition_h_2905083018(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PhaseTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PhaseTransition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
