// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Minion_Grux.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinion_Grux() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion_Grux();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion_Grux_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMinion_Grux
void AMinion_Grux::StaticRegisterNativesAMinion_Grux()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinion_Grux);
UClass* Z_Construct_UClass_AMinion_Grux_NoRegister()
{
	return AMinion_Grux::StaticClass();
}
struct Z_Construct_UClass_AMinion_Grux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Minion_Grux.h" },
		{ "ModuleRelativePath", "Public/Characters/Minion_Grux.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion_Grux>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMinion_Grux_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMinion,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Grux_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Grux_Statics::ClassParams = {
	&AMinion_Grux::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Grux_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinion_Grux_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinion_Grux()
{
	if (!Z_Registration_Info_UClass_AMinion_Grux.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinion_Grux.OuterSingleton, Z_Construct_UClass_AMinion_Grux_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinion_Grux.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMinion_Grux>()
{
	return AMinion_Grux::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinion_Grux);
AMinion_Grux::~AMinion_Grux() {}
// End Class AMinion_Grux

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Grux_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinion_Grux, AMinion_Grux::StaticClass, TEXT("AMinion_Grux"), &Z_Registration_Info_UClass_AMinion_Grux, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinion_Grux), 2130922373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Grux_h_991451829(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Grux_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Grux_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
