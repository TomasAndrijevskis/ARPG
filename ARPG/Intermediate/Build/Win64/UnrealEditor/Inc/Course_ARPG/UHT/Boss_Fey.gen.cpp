// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Boss_Fey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_Fey() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss_Fey();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss_Fey_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPoisonExplosionComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_USummonMinionsComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABoss_Fey
void ABoss_Fey::StaticRegisterNativesABoss_Fey()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoss_Fey);
UClass* Z_Construct_UClass_ABoss_Fey_NoRegister()
{
	return ABoss_Fey::StaticClass();
}
struct Z_Construct_UClass_ABoss_Fey_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Boss_Fey.h" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Fey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComp_MetaData[] = {
		{ "Category", "Boss_Fey" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Fey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonExplosionComp_MetaData[] = {
		{ "Category", "Boss_Fey" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Fey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonMinionsComp_MetaData[] = {
		{ "Category", "Boss_Fey" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Fey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackHealthThresholds_MetaData[] = {
		{ "Category", "Boss_Fey" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Fey.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonHealthThresholds_MetaData[] = {
		{ "Category", "Boss_Fey" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Fey.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoisonExplosionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SummonMinionsComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MeleeAttackHealthThresholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeleeAttackHealthThresholds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SummonHealthThresholds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SummonHealthThresholds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss_Fey>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_ProjectileComp = { "ProjectileComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Fey, ProjectileComp), Z_Construct_UClass_UEnemyProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileComp_MetaData), NewProp_ProjectileComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_PoisonExplosionComp = { "PoisonExplosionComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Fey, PoisonExplosionComp), Z_Construct_UClass_UPoisonExplosionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonExplosionComp_MetaData), NewProp_PoisonExplosionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_SummonMinionsComp = { "SummonMinionsComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Fey, SummonMinionsComp), Z_Construct_UClass_USummonMinionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonMinionsComp_MetaData), NewProp_SummonMinionsComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_MeleeAttackHealthThresholds_Inner = { "MeleeAttackHealthThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_MeleeAttackHealthThresholds = { "MeleeAttackHealthThresholds", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Fey, MeleeAttackHealthThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackHealthThresholds_MetaData), NewProp_MeleeAttackHealthThresholds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_SummonHealthThresholds_Inner = { "SummonHealthThresholds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABoss_Fey_Statics::NewProp_SummonHealthThresholds = { "SummonHealthThresholds", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Fey, SummonHealthThresholds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonHealthThresholds_MetaData), NewProp_SummonHealthThresholds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Fey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_ProjectileComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_PoisonExplosionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_SummonMinionsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_MeleeAttackHealthThresholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_MeleeAttackHealthThresholds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_SummonHealthThresholds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Fey_Statics::NewProp_SummonHealthThresholds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Fey_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoss_Fey_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABoss,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Fey_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Fey_Statics::ClassParams = {
	&ABoss_Fey::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoss_Fey_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Fey_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Fey_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoss_Fey_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoss_Fey()
{
	if (!Z_Registration_Info_UClass_ABoss_Fey.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoss_Fey.OuterSingleton, Z_Construct_UClass_ABoss_Fey_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoss_Fey.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABoss_Fey>()
{
	return ABoss_Fey::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss_Fey);
ABoss_Fey::~ABoss_Fey() {}
// End Class ABoss_Fey

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Fey_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoss_Fey, ABoss_Fey::StaticClass, TEXT("ABoss_Fey"), &Z_Registration_Info_UClass_ABoss_Fey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoss_Fey), 1495489311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Fey_h_1913896713(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Fey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Fey_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
