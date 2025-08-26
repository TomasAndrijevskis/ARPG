// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/MainCharacter_Mage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter_Mage() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Mage();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Mage_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_FireStorm_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_FrostBlast_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_HealingAura_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_MagicShield_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMainCharacter_Mage Function SpawnParticles
struct Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter_Mage, nullptr, "SpawnParticles", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter_Mage::execSpawnParticles)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnParticles();
	P_NATIVE_END;
}
// End Class AMainCharacter_Mage Function SpawnParticles

// Begin Class AMainCharacter_Mage
void AMainCharacter_Mage::StaticRegisterNativesAMainCharacter_Mage()
{
	UClass* Class = AMainCharacter_Mage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnParticles", &AMainCharacter_Mage::execSpawnParticles },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter_Mage);
UClass* Z_Construct_UClass_AMainCharacter_Mage_NoRegister()
{
	return AMainCharacter_Mage::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Mage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MainCharacter_Mage.h" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_MagicShield_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_FrostBlast_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_FireStorm_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_HealingAura_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightHandSocketName_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandSocketName_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComponentFire_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleFire_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComponentIce_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIce_MetaData[] = {
		{ "Category", "MainCharacter_Mage" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_MagicShield;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_FrostBlast;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_FireStorm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_HealingAura;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RightHandSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeftHandSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComponentFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleFire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComponentIce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleIce;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_Mage_SpawnParticles, "SpawnParticles" }, // 2119045868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter_Mage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_MagicShield = { "AbilityComp_MagicShield", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, AbilityComp_MagicShield), Z_Construct_UClass_UAbilityComponent_MagicShield_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_MagicShield_MetaData), NewProp_AbilityComp_MagicShield_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_FrostBlast = { "AbilityComp_FrostBlast", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, AbilityComp_FrostBlast), Z_Construct_UClass_UAbilityComponent_FrostBlast_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_FrostBlast_MetaData), NewProp_AbilityComp_FrostBlast_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_FireStorm = { "AbilityComp_FireStorm", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, AbilityComp_FireStorm), Z_Construct_UClass_UAbilityComponent_FireStorm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_FireStorm_MetaData), NewProp_AbilityComp_FireStorm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_HealingAura = { "AbilityComp_HealingAura", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, AbilityComp_HealingAura), Z_Construct_UClass_UAbilityComponent_HealingAura_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_HealingAura_MetaData), NewProp_AbilityComp_HealingAura_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_RightHandSocketName = { "RightHandSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, RightHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightHandSocketName_MetaData), NewProp_RightHandSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_LeftHandSocketName = { "LeftHandSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, LeftHandSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftHandSocketName_MetaData), NewProp_LeftHandSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleComponentFire = { "ParticleComponentFire", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, ParticleComponentFire), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleComponentFire_MetaData), NewProp_ParticleComponentFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleFire = { "ParticleFire", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, ParticleFire), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleFire_MetaData), NewProp_ParticleFire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleComponentIce = { "ParticleComponentIce", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, ParticleComponentIce), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleComponentIce_MetaData), NewProp_ParticleComponentIce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleIce = { "ParticleIce", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Mage, ParticleIce), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleIce_MetaData), NewProp_ParticleIce_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Mage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_MagicShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_FrostBlast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_FireStorm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_AbilityComp_HealingAura,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_RightHandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_LeftHandSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleComponentFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleFire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleComponentIce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Mage_Statics::NewProp_ParticleIce,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Mage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Mage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMainCharacter_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Mage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Mage_Statics::ClassParams = {
	&AMainCharacter_Mage::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Mage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Mage_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Mage_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Mage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter_Mage()
{
	if (!Z_Registration_Info_UClass_AMainCharacter_Mage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter_Mage.OuterSingleton, Z_Construct_UClass_AMainCharacter_Mage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter_Mage.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMainCharacter_Mage>()
{
	return AMainCharacter_Mage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter_Mage);
AMainCharacter_Mage::~AMainCharacter_Mage() {}
// End Class AMainCharacter_Mage

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter_Mage, AMainCharacter_Mage::StaticClass, TEXT("AMainCharacter_Mage"), &Z_Registration_Info_UClass_AMainCharacter_Mage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter_Mage), 3459362638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_2832844089(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
