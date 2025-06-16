// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTS_PlayerDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTS_PlayerDistance() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTS_PlayerDistance();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTS_PlayerDistance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTS_PlayerDistance
void UBTS_PlayerDistance::StaticRegisterNativesUBTS_PlayerDistance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTS_PlayerDistance);
UClass* Z_Construct_UClass_UBTS_PlayerDistance_NoRegister()
{
	return UBTS_PlayerDistance::StaticClass();
}
struct Z_Construct_UClass_UBTS_PlayerDistance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTS_PlayerDistance.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTS_PlayerDistance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTS_PlayerDistance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTS_PlayerDistance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_PlayerDistance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTS_PlayerDistance_Statics::ClassParams = {
	&UBTS_PlayerDistance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTS_PlayerDistance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTS_PlayerDistance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTS_PlayerDistance()
{
	if (!Z_Registration_Info_UClass_UBTS_PlayerDistance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTS_PlayerDistance.OuterSingleton, Z_Construct_UClass_UBTS_PlayerDistance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTS_PlayerDistance.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTS_PlayerDistance>()
{
	return UBTS_PlayerDistance::StaticClass();
}
UBTS_PlayerDistance::UBTS_PlayerDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTS_PlayerDistance);
UBTS_PlayerDistance::~UBTS_PlayerDistance() {}
// End Class UBTS_PlayerDistance

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTS_PlayerDistance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTS_PlayerDistance, UBTS_PlayerDistance::StaticClass, TEXT("UBTS_PlayerDistance"), &Z_Registration_Info_UClass_UBTS_PlayerDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTS_PlayerDistance), 2930674221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTS_PlayerDistance_h_1472654630(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTS_PlayerDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTS_PlayerDistance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
