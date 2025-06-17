// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_DamageIncrease.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_DamageIncrease() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_DamageIncrease();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_DamageIncrease_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_DamageIncrease Function IncreaseDamage
struct Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_DamageIncrease.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_DamageIncrease, nullptr, "IncreaseDamage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_DamageIncrease::execIncreaseDamage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IncreaseDamage();
	P_NATIVE_END;
}
// End Class UAbilityComponent_DamageIncrease Function IncreaseDamage

// Begin Class UAbilityComponent_DamageIncrease
void UAbilityComponent_DamageIncrease::StaticRegisterNativesUAbilityComponent_DamageIncrease()
{
	UClass* Class = UAbilityComponent_DamageIncrease::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IncreaseDamage", &UAbilityComponent_DamageIncrease::execIncreaseDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_DamageIncrease);
UClass* Z_Construct_UClass_UAbilityComponent_DamageIncrease_NoRegister()
{
	return UAbilityComponent_DamageIncrease::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/Abilities/AbilityComponent_DamageIncrease.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_DamageIncrease.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "AbilityComponent_DamageIncrease" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_DamageIncrease.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnSocketName_MetaData[] = {
		{ "Category", "AbilityComponent_DamageIncrease" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_DamageIncrease.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "AbilityComponent_DamageIncrease" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FX_Sword_Bottom\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_DamageIncrease.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX_Sword_Bottom" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleSpawnSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_DamageIncrease_IncreaseDamage, "IncreaseDamage" }, // 1333513194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_DamageIncrease>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_DamageIncrease, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::NewProp_ParticleSpawnSocketName = { "ParticleSpawnSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_DamageIncrease, ParticleSpawnSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSpawnSocketName_MetaData), NewProp_ParticleSpawnSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_DamageIncrease, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::NewProp_DamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::NewProp_ParticleSpawnSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::NewProp_Particle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::ClassParams = {
	&UAbilityComponent_DamageIncrease::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_DamageIncrease()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_DamageIncrease.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_DamageIncrease.OuterSingleton, Z_Construct_UClass_UAbilityComponent_DamageIncrease_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_DamageIncrease.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_DamageIncrease>()
{
	return UAbilityComponent_DamageIncrease::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_DamageIncrease);
UAbilityComponent_DamageIncrease::~UAbilityComponent_DamageIncrease() {}
// End Class UAbilityComponent_DamageIncrease

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_DamageIncrease_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_DamageIncrease, UAbilityComponent_DamageIncrease::StaticClass, TEXT("UAbilityComponent_DamageIncrease"), &Z_Registration_Info_UClass_UAbilityComponent_DamageIncrease, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_DamageIncrease), 3599823232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_DamageIncrease_h_4204803138(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_DamageIncrease_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_DamageIncrease_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
