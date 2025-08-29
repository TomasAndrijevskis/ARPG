// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_RangeAttack_Fey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_RangeAttack_Fey() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_RangeAttack_Fey();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_RangeAttack_Fey_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_RangeAttack_Fey
void UBTT_RangeAttack_Fey::StaticRegisterNativesUBTT_RangeAttack_Fey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_RangeAttack_Fey);
UClass* Z_Construct_UClass_UBTT_RangeAttack_Fey_NoRegister()
{
	return UBTT_RangeAttack_Fey::StaticClass();
}
struct Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_RangeAttack_Fey.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RangeAttack_Fey.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_RangeAttack_Fey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics::ClassParams = {
	&UBTT_RangeAttack_Fey::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_RangeAttack_Fey()
{
	if (!Z_Registration_Info_UClass_UBTT_RangeAttack_Fey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_RangeAttack_Fey.OuterSingleton, Z_Construct_UClass_UBTT_RangeAttack_Fey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_RangeAttack_Fey.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_RangeAttack_Fey>()
{
	return UBTT_RangeAttack_Fey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_RangeAttack_Fey);
UBTT_RangeAttack_Fey::~UBTT_RangeAttack_Fey() {}
// End Class UBTT_RangeAttack_Fey

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Fey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_RangeAttack_Fey, UBTT_RangeAttack_Fey::StaticClass, TEXT("UBTT_RangeAttack_Fey"), &Z_Registration_Info_UClass_UBTT_RangeAttack_Fey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_RangeAttack_Fey), 967820765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Fey_h_2904690698(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Fey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Fey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
