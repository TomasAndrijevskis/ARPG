// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Minion_Fey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinion_Fey() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion_Fey();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion_Fey_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMinion_Fey
void AMinion_Fey::StaticRegisterNativesAMinion_Fey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinion_Fey);
UClass* Z_Construct_UClass_AMinion_Fey_NoRegister()
{
	return AMinion_Fey::StaticClass();
}
struct Z_Construct_UClass_AMinion_Fey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Minion_Fey.h" },
		{ "ModuleRelativePath", "Public/Characters/Minion_Fey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComp_MetaData[] = {
		{ "Category", "Minion_Fey" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Minion_Fey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion_Fey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Fey_Statics::NewProp_ProjectileComp = { "ProjectileComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion_Fey, ProjectileComp), Z_Construct_UClass_UEnemyProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileComp_MetaData), NewProp_ProjectileComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinion_Fey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Fey_Statics::NewProp_ProjectileComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Fey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinion_Fey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMinion,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Fey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Fey_Statics::ClassParams = {
	&AMinion_Fey::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMinion_Fey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Fey_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Fey_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinion_Fey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinion_Fey()
{
	if (!Z_Registration_Info_UClass_AMinion_Fey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinion_Fey.OuterSingleton, Z_Construct_UClass_AMinion_Fey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinion_Fey.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMinion_Fey>()
{
	return AMinion_Fey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinion_Fey);
AMinion_Fey::~AMinion_Fey() {}
// End Class AMinion_Fey

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Fey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinion_Fey, AMinion_Fey::StaticClass, TEXT("AMinion_Fey"), &Z_Registration_Info_UClass_AMinion_Fey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinion_Fey), 1566143359U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Fey_h_281840397(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Fey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_Fey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
