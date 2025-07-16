// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_FireStorm.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_FireStorm() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AFireStorm_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_FireStorm();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_FireStorm_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_FireStorm Function SpawnFireStorm
struct Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_FireStorm, nullptr, "SpawnFireStorm", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_FireStorm::execSpawnFireStorm)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnFireStorm();
	P_NATIVE_END;
}
// End Class UAbilityComponent_FireStorm Function SpawnFireStorm

// Begin Class UAbilityComponent_FireStorm Function StartAbility
struct Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_FireStorm, nullptr, "StartAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_FireStorm::execStartAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility();
	P_NATIVE_END;
}
// End Class UAbilityComponent_FireStorm Function StartAbility

// Begin Class UAbilityComponent_FireStorm
void UAbilityComponent_FireStorm::StaticRegisterNativesUAbilityComponent_FireStorm()
{
	UClass* Class = UAbilityComponent_FireStorm::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnFireStorm", &UAbilityComponent_FireStorm::execSpawnFireStorm },
		{ "StartAbility", &UAbilityComponent_FireStorm::execStartAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_FireStorm);
UClass* Z_Construct_UClass_UAbilityComponent_FireStorm_NoRegister()
{
	return UAbilityComponent_FireStorm::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_FireStorm_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/AbilityComponent_FireStorm.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireStormClass_MetaData[] = {
		{ "Category", "AbilityComponent_FireStorm" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireStormRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnDuration_MetaData[] = {
		{ "Category", "AbilityComponent_FireStorm" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnDamage_MetaData[] = {
		{ "Category", "AbilityComponent_FireStorm" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FireStorm.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FireStormClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireStormRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BurnDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_FireStorm_SpawnFireStorm, "SpawnFireStorm" }, // 2497395649
		{ &Z_Construct_UFunction_UAbilityComponent_FireStorm_StartAbility, "StartAbility" }, // 1035236218
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_FireStorm>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_FireStormClass = { "FireStormClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FireStorm, FireStormClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFireStorm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireStormClass_MetaData), NewProp_FireStormClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_FireStormRef = { "FireStormRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FireStorm, FireStormRef), Z_Construct_UClass_AFireStorm_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireStormRef_MetaData), NewProp_FireStormRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_BurnDuration = { "BurnDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FireStorm, BurnDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnDuration_MetaData), NewProp_BurnDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_BurnDamage = { "BurnDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FireStorm, BurnDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnDamage_MetaData), NewProp_BurnDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_FireStormClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_FireStormRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_BurnDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::NewProp_BurnDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::ClassParams = {
	&UAbilityComponent_FireStorm::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_FireStorm()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_FireStorm.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_FireStorm.OuterSingleton, Z_Construct_UClass_UAbilityComponent_FireStorm_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_FireStorm.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_FireStorm>()
{
	return UAbilityComponent_FireStorm::StaticClass();
}
UAbilityComponent_FireStorm::UAbilityComponent_FireStorm() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_FireStorm);
UAbilityComponent_FireStorm::~UAbilityComponent_FireStorm() {}
// End Class UAbilityComponent_FireStorm

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FireStorm_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_FireStorm, UAbilityComponent_FireStorm::StaticClass, TEXT("UAbilityComponent_FireStorm"), &Z_Registration_Info_UClass_UAbilityComponent_FireStorm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_FireStorm), 3032778327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FireStorm_h_2519553075(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FireStorm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FireStorm_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
