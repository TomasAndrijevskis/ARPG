// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Spawner/BossSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossSpawner() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ABossSpawner();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABossSpawner_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_ASpawner();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABossSpawner
void ABossSpawner::StaticRegisterNativesABossSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABossSpawner);
UClass* Z_Construct_UClass_ABossSpawner_NoRegister()
{
	return ABossSpawner::StaticClass();
}
struct Z_Construct_UClass_ABossSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/Spawner/BossSpawner.h" },
		{ "ModuleRelativePath", "Public/Characters/Spawner/BossSpawner.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABossSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpawner,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossSpawner_Statics::ClassParams = {
	&ABossSpawner::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABossSpawner()
{
	if (!Z_Registration_Info_UClass_ABossSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossSpawner.OuterSingleton, Z_Construct_UClass_ABossSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABossSpawner.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABossSpawner>()
{
	return ABossSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABossSpawner);
ABossSpawner::~ABossSpawner() {}
// End Class ABossSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Spawner_BossSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABossSpawner, ABossSpawner::StaticClass, TEXT("ABossSpawner"), &Z_Registration_Info_UClass_ABossSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossSpawner), 1811961149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Spawner_BossSpawner_h_3319381957(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Spawner_BossSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Spawner_BossSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
