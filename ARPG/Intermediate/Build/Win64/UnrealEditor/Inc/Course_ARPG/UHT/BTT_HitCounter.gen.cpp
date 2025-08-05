// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_HitCounter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_HitCounter() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_HitCounter();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_HitCounter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_HitCounter
void UBTT_HitCounter::StaticRegisterNativesUBTT_HitCounter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_HitCounter);
UClass* Z_Construct_UClass_UBTT_HitCounter_NoRegister()
{
	return UBTT_HitCounter::StaticClass();
}
struct Z_Construct_UClass_UBTT_HitCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_HitCounter.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_HitCounter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_HitCounter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_HitCounter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_HitCounter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_HitCounter_Statics::ClassParams = {
	&UBTT_HitCounter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_HitCounter_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_HitCounter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_HitCounter()
{
	if (!Z_Registration_Info_UClass_UBTT_HitCounter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_HitCounter.OuterSingleton, Z_Construct_UClass_UBTT_HitCounter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_HitCounter.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_HitCounter>()
{
	return UBTT_HitCounter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_HitCounter);
UBTT_HitCounter::~UBTT_HitCounter() {}
// End Class UBTT_HitCounter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCounter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_HitCounter, UBTT_HitCounter::StaticClass, TEXT("UBTT_HitCounter"), &Z_Registration_Info_UClass_UBTT_HitCounter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_HitCounter), 2244240897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCounter_h_768649884(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCounter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_HitCounter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
