// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_HealingAura.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_HealingAura() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_HealingAura();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_HealingAura_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_HealingAura Function StartAbility
struct Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_HealingAura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_HealingAura, nullptr, "StartAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_HealingAura::execStartAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility();
	P_NATIVE_END;
}
// End Class UAbilityComponent_HealingAura Function StartAbility

// Begin Class UAbilityComponent_HealingAura
void UAbilityComponent_HealingAura::StaticRegisterNativesUAbilityComponent_HealingAura()
{
	UClass* Class = UAbilityComponent_HealingAura::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartAbility", &UAbilityComponent_HealingAura::execStartAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_HealingAura);
UClass* Z_Construct_UClass_UAbilityComponent_HealingAura_NoRegister()
{
	return UAbilityComponent_HealingAura::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_HealingAura_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/AbilityComponent_HealingAura.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_HealingAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthRegenAmount_MetaData[] = {
		{ "Category", "AbilityComponent_HealingAura" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_HealingAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "AbilityComponent_HealingAura" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_HealingAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_HealingAura.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AbilityComponent_HealingAura" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_HealingAura.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthRegenAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_HealingAura_StartAbility, "StartAbility" }, // 637693786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_HealingAura>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_HealthRegenAmount = { "HealthRegenAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_HealingAura, HealthRegenAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthRegenAmount_MetaData), NewProp_HealthRegenAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_HealingAura, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_ParticleComp = { "ParticleComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_HealingAura, ParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleComp_MetaData), NewProp_ParticleComp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_HealingAura, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_HealthRegenAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_ParticleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::NewProp_SocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::ClassParams = {
	&UAbilityComponent_HealingAura::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_HealingAura()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_HealingAura.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_HealingAura.OuterSingleton, Z_Construct_UClass_UAbilityComponent_HealingAura_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_HealingAura.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_HealingAura>()
{
	return UAbilityComponent_HealingAura::StaticClass();
}
UAbilityComponent_HealingAura::UAbilityComponent_HealingAura() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_HealingAura);
UAbilityComponent_HealingAura::~UAbilityComponent_HealingAura() {}
// End Class UAbilityComponent_HealingAura

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_HealingAura_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_HealingAura, UAbilityComponent_HealingAura::StaticClass, TEXT("UAbilityComponent_HealingAura"), &Z_Registration_Info_UClass_UAbilityComponent_HealingAura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_HealingAura), 1273028635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_HealingAura_h_2789498973(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_HealingAura_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_HealingAura_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
