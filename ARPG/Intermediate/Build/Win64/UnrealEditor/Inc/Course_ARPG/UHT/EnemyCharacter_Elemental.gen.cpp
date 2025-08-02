// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EnemyCharacter_Elemental.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Elemental() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Elemental();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Elemental_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Minion();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AEnemyCharacter_Elemental
void AEnemyCharacter_Elemental::StaticRegisterNativesAEnemyCharacter_Elemental()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Elemental);
UClass* Z_Construct_UClass_AEnemyCharacter_Elemental_NoRegister()
{
	return AEnemyCharacter_Elemental::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Elemental_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter_Elemental.h" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Elemental.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComp_MetaData[] = {
		{ "Category", "EnemyCharacter_Elemental" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Elemental.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "EnemyCharacter_Elemental" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Elemental.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEffect_MetaData[] = {
		{ "Category", "EnemyCharacter_Elemental" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Elemental.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "EnemyCharacter_Elemental" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Elemental.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathParticleClass_MetaData[] = {
		{ "Category", "EnemyCharacter_Elemental" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Elemental.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathParticleClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Elemental>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_ProjectileComp = { "ProjectileComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Elemental, ProjectileComp), Z_Construct_UClass_UEnemyProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileComp_MetaData), NewProp_ProjectileComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Elemental, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Elemental, ParticleEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleEffect_MetaData), NewProp_ParticleEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Elemental, NiagaraEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraEffect_MetaData), NewProp_NiagaraEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_DeathParticleClass = { "DeathParticleClass", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Elemental, DeathParticleClass), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathParticleClass_MetaData), NewProp_DeathParticleClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_ProjectileComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_ParticleEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_NiagaraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::NewProp_DeathParticleClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter_Minion,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::ClassParams = {
	&AEnemyCharacter_Elemental::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter_Elemental()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter_Elemental.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Elemental.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Elemental_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter_Elemental.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AEnemyCharacter_Elemental>()
{
	return AEnemyCharacter_Elemental::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Elemental);
AEnemyCharacter_Elemental::~AEnemyCharacter_Elemental() {}
// End Class AEnemyCharacter_Elemental

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Elemental_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Elemental, AEnemyCharacter_Elemental::StaticClass, TEXT("AEnemyCharacter_Elemental"), &Z_Registration_Info_UClass_AEnemyCharacter_Elemental, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Elemental), 2167400575U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Elemental_h_3949098661(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Elemental_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Elemental_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
