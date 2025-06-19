// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_LifeStealAttack() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_LifeStealAttack();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_LifeStealAttack_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_LifeStealAttack Function GetStolenHealthAmount
struct Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics
{
	struct AbilityComponent_LifeStealAttack_eventGetStolenHealthAmount_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityComponent_LifeStealAttack_eventGetStolenHealthAmount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_LifeStealAttack, nullptr, "GetStolenHealthAmount", nullptr, nullptr, Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::AbilityComponent_LifeStealAttack_eventGetStolenHealthAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::AbilityComponent_LifeStealAttack_eventGetStolenHealthAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_LifeStealAttack::execGetStolenHealthAmount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStolenHealthAmount();
	P_NATIVE_END;
}
// End Class UAbilityComponent_LifeStealAttack Function GetStolenHealthAmount

// Begin Class UAbilityComponent_LifeStealAttack Function OnAbilityActivated
struct Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_LifeStealAttack, nullptr, "OnAbilityActivated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_LifeStealAttack::execOnAbilityActivated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAbilityActivated();
	P_NATIVE_END;
}
// End Class UAbilityComponent_LifeStealAttack Function OnAbilityActivated

// Begin Class UAbilityComponent_LifeStealAttack
void UAbilityComponent_LifeStealAttack::StaticRegisterNativesUAbilityComponent_LifeStealAttack()
{
	UClass* Class = UAbilityComponent_LifeStealAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStolenHealthAmount", &UAbilityComponent_LifeStealAttack::execGetStolenHealthAmount },
		{ "OnAbilityActivated", &UAbilityComponent_LifeStealAttack::execOnAbilityActivated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_LifeStealAttack);
UClass* Z_Construct_UClass_UAbilityComponent_LifeStealAttack_NoRegister()
{
	return UAbilityComponent_LifeStealAttack::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActivated_MetaData[] = {
		{ "Category", "AbilityComponent_LifeStealAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StolenHealthPercent_MetaData[] = {
		{ "Category", "AbilityComponent_LifeStealAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "AbilityComponent_LifeStealAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSpawnSocketName_MetaData[] = {
		{ "Category", "AbilityComponent_LifeStealAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_LifeStealAttack.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StolenHealthPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleSpawnSocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_GetStolenHealthAmount, "GetStolenHealthAmount" }, // 172495301
		{ &Z_Construct_UFunction_UAbilityComponent_LifeStealAttack_OnAbilityActivated, "OnAbilityActivated" }, // 3945713154
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_LifeStealAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_bIsActivated_SetBit(void* Obj)
{
	((UAbilityComponent_LifeStealAttack*)Obj)->bIsActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_bIsActivated = { "bIsActivated", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_LifeStealAttack), &Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActivated_MetaData), NewProp_bIsActivated_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_StolenHealthPercent = { "StolenHealthPercent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_LifeStealAttack, StolenHealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StolenHealthPercent_MetaData), NewProp_StolenHealthPercent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_LifeStealAttack, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_ParticleSpawnSocketName = { "ParticleSpawnSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_LifeStealAttack, ParticleSpawnSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSpawnSocketName_MetaData), NewProp_ParticleSpawnSocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_bIsActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_StolenHealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::NewProp_ParticleSpawnSocketName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::ClassParams = {
	&UAbilityComponent_LifeStealAttack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_LifeStealAttack()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_LifeStealAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_LifeStealAttack.OuterSingleton, Z_Construct_UClass_UAbilityComponent_LifeStealAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_LifeStealAttack.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_LifeStealAttack>()
{
	return UAbilityComponent_LifeStealAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_LifeStealAttack);
UAbilityComponent_LifeStealAttack::~UAbilityComponent_LifeStealAttack() {}
// End Class UAbilityComponent_LifeStealAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_LifeStealAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_LifeStealAttack, UAbilityComponent_LifeStealAttack::StaticClass, TEXT("UAbilityComponent_LifeStealAttack"), &Z_Registration_Info_UClass_UAbilityComponent_LifeStealAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_LifeStealAttack), 1605113901U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_LifeStealAttack_h_1325223149(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_LifeStealAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_LifeStealAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
