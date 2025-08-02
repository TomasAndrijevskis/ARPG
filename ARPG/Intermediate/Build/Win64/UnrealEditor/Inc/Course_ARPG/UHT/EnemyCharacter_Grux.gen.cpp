// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EnemyCharacter_Grux.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Grux() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Grux();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Grux_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Minion();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AEnemyCharacter_Grux
void AEnemyCharacter_Grux::StaticRegisterNativesAEnemyCharacter_Grux()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Grux);
UClass* Z_Construct_UClass_AEnemyCharacter_Grux_NoRegister()
{
	return AEnemyCharacter_Grux::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Grux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter_Grux.h" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Grux.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Grux>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Grux_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter_Minion,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Grux_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Grux_Statics::ClassParams = {
	&AEnemyCharacter_Grux::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Grux_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Grux_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter_Grux()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter_Grux.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Grux.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Grux_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter_Grux.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AEnemyCharacter_Grux>()
{
	return AEnemyCharacter_Grux::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Grux);
AEnemyCharacter_Grux::~AEnemyCharacter_Grux() {}
// End Class AEnemyCharacter_Grux

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Grux_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Grux, AEnemyCharacter_Grux::StaticClass, TEXT("AEnemyCharacter_Grux"), &Z_Registration_Info_UClass_AEnemyCharacter_Grux, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Grux), 2555978002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Grux_h_1038621334(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Grux_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Grux_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
