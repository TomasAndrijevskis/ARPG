// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/PoisonExplosionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoisonExplosionComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_APoisonExplosionArea_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Enemy();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPoisonExplosionComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPoisonExplosionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UPoisonExplosionComponent
void UPoisonExplosionComponent::StaticRegisterNativesUPoisonExplosionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoisonExplosionComponent);
UClass* Z_Construct_UClass_UPoisonExplosionComponent_NoRegister()
{
	return UPoisonExplosionComponent::StaticClass();
}
struct Z_Construct_UClass_UPoisonExplosionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/PoisonExplosionComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionStartEffect_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEndEffect_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonAreaClass_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonEffect_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionDamage_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonDamage_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonRate_MetaData[] = {
		{ "Category", "PoisonExplosionComponent" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonAreaRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionStartEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEndEffect;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PoisonAreaClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoisonEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExplosionDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoisonDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PoisonRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoisonAreaRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoisonExplosionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_ExplosionStartEffect = { "ExplosionStartEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, ExplosionStartEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionStartEffect_MetaData), NewProp_ExplosionStartEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_ExplosionEndEffect = { "ExplosionEndEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, ExplosionEndEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionEndEffect_MetaData), NewProp_ExplosionEndEffect_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonAreaClass = { "PoisonAreaClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, PoisonAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonAreaClass_MetaData), NewProp_PoisonAreaClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonEffect = { "PoisonEffect", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, PoisonEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonEffect_MetaData), NewProp_PoisonEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_ExplosionDamage = { "ExplosionDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, ExplosionDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExplosionDamage_MetaData), NewProp_ExplosionDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonDamage = { "PoisonDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, PoisonDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonDamage_MetaData), NewProp_PoisonDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonRate = { "PoisonRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, PoisonRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonRate_MetaData), NewProp_PoisonRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonAreaRef = { "PoisonAreaRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoisonExplosionComponent, PoisonAreaRef), Z_Construct_UClass_APoisonExplosionArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonAreaRef_MetaData), NewProp_PoisonAreaRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoisonExplosionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_ExplosionStartEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_ExplosionEndEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonAreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_ExplosionDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoisonExplosionComponent_Statics::NewProp_PoisonAreaRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoisonExplosionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPoisonExplosionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Enemy,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoisonExplosionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoisonExplosionComponent_Statics::ClassParams = {
	&UPoisonExplosionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPoisonExplosionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoisonExplosionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoisonExplosionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoisonExplosionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPoisonExplosionComponent()
{
	if (!Z_Registration_Info_UClass_UPoisonExplosionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoisonExplosionComponent.OuterSingleton, Z_Construct_UClass_UPoisonExplosionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoisonExplosionComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UPoisonExplosionComponent>()
{
	return UPoisonExplosionComponent::StaticClass();
}
UPoisonExplosionComponent::UPoisonExplosionComponent() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPoisonExplosionComponent);
UPoisonExplosionComponent::~UPoisonExplosionComponent() {}
// End Class UPoisonExplosionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoisonExplosionComponent, UPoisonExplosionComponent::StaticClass, TEXT("UPoisonExplosionComponent"), &Z_Registration_Info_UClass_UPoisonExplosionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoisonExplosionComponent), 2799291798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionComponent_h_866647529(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
