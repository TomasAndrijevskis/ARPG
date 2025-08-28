// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Boss_Grux.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_Grux() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss_Grux();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss_Grux_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABoss_Grux
void ABoss_Grux::StaticRegisterNativesABoss_Grux()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoss_Grux);
UClass* Z_Construct_UClass_ABoss_Grux_NoRegister()
{
	return ABoss_Grux::StaticClass();
}
struct Z_Construct_UClass_ABoss_Grux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Boss_Grux.h" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Grux.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComp_MetaData[] = {
		{ "Category", "Boss_Grux" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Grux.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss_Grux>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Grux_Statics::NewProp_ProjectileComp = { "ProjectileComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Grux, ProjectileComp), Z_Construct_UClass_UEnemyProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileComp_MetaData), NewProp_ProjectileComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Grux_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Grux_Statics::NewProp_ProjectileComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Grux_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoss_Grux_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABoss,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Grux_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Grux_Statics::ClassParams = {
	&ABoss_Grux::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoss_Grux_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Grux_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Grux_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoss_Grux_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoss_Grux()
{
	if (!Z_Registration_Info_UClass_ABoss_Grux.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoss_Grux.OuterSingleton, Z_Construct_UClass_ABoss_Grux_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoss_Grux.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABoss_Grux>()
{
	return ABoss_Grux::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss_Grux);
ABoss_Grux::~ABoss_Grux() {}
// End Class ABoss_Grux

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Grux_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoss_Grux, ABoss_Grux::StaticClass, TEXT("ABoss_Grux"), &Z_Registration_Info_UClass_ABoss_Grux, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoss_Grux), 1838303992U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Grux_h_441209454(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Grux_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Grux_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
