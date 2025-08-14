// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_MeleeAttack_Rampage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_MeleeAttack_Rampage() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Rampage();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Rampage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_MeleeAttack_Rampage
void UBTT_MeleeAttack_Rampage::StaticRegisterNativesUBTT_MeleeAttack_Rampage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_MeleeAttack_Rampage);
UClass* Z_Construct_UClass_UBTT_MeleeAttack_Rampage_NoRegister()
{
	return UBTT_MeleeAttack_Rampage::StaticClass();
}
struct Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_MeleeAttack_Rampage.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Rampage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[] = {
		{ "Category", "BTT_MeleeAttack_Rampage" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Rampage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Threshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_MeleeAttack_Rampage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_MeleeAttack_Rampage, Threshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Threshold_MetaData), NewProp_Threshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::NewProp_Threshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTT_MeleeAttack_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::ClassParams = {
	&UBTT_MeleeAttack_Rampage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_MeleeAttack_Rampage()
{
	if (!Z_Registration_Info_UClass_UBTT_MeleeAttack_Rampage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_MeleeAttack_Rampage.OuterSingleton, Z_Construct_UClass_UBTT_MeleeAttack_Rampage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_MeleeAttack_Rampage.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_MeleeAttack_Rampage>()
{
	return UBTT_MeleeAttack_Rampage::StaticClass();
}
UBTT_MeleeAttack_Rampage::UBTT_MeleeAttack_Rampage() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_MeleeAttack_Rampage);
UBTT_MeleeAttack_Rampage::~UBTT_MeleeAttack_Rampage() {}
// End Class UBTT_MeleeAttack_Rampage

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Rampage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_MeleeAttack_Rampage, UBTT_MeleeAttack_Rampage::StaticClass, TEXT("UBTT_MeleeAttack_Rampage"), &Z_Registration_Info_UClass_UBTT_MeleeAttack_Rampage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_MeleeAttack_Rampage), 2196084175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Rampage_h_1923545299(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Rampage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Rampage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
