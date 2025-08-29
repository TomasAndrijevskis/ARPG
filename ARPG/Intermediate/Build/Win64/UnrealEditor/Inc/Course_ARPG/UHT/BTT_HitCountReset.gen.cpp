// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_HitCountReset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_HitCountReset() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_HitCountReset();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_HitCountReset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_HitCountReset
void UBTT_HitCountReset::StaticRegisterNativesUBTT_HitCountReset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_HitCountReset);
UClass* Z_Construct_UClass_UBTT_HitCountReset_NoRegister()
{
	return UBTT_HitCountReset::StaticClass();
}
struct Z_Construct_UClass_UBTT_HitCountReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_HitCountReset.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_HitCountReset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "BTT_HitCountReset" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_HitCountReset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetDuration_MetaData[] = {
		{ "Category", "BTT_HitCountReset" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_HitCountReset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ResetDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_HitCountReset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTT_HitCountReset_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_HitCountReset, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_HitCountReset_Statics::NewProp_ResetDuration = { "ResetDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_HitCountReset, ResetDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetDuration_MetaData), NewProp_ResetDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_HitCountReset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_HitCountReset_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_HitCountReset_Statics::NewProp_ResetDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_HitCountReset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_HitCountReset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_HitCountReset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_HitCountReset_Statics::ClassParams = {
	&UBTT_HitCountReset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_HitCountReset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_HitCountReset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_HitCountReset_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_HitCountReset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_HitCountReset()
{
	if (!Z_Registration_Info_UClass_UBTT_HitCountReset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_HitCountReset.OuterSingleton, Z_Construct_UClass_UBTT_HitCountReset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_HitCountReset.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_HitCountReset>()
{
	return UBTT_HitCountReset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_HitCountReset);
UBTT_HitCountReset::~UBTT_HitCountReset() {}
// End Class UBTT_HitCountReset

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCountReset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_HitCountReset, UBTT_HitCountReset::StaticClass, TEXT("UBTT_HitCountReset"), &Z_Registration_Info_UClass_UBTT_HitCountReset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_HitCountReset), 1385845267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCountReset_h_3836145658(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCountReset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCountReset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
