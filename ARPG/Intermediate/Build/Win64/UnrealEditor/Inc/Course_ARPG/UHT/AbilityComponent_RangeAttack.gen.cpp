// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_RangeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_RangeAttack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_RangeAttack();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_RangeAttack_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_RangeAttack Function SpawnProjectile
struct Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_RangeAttack, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_RangeAttack::execSpawnProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile();
	P_NATIVE_END;
}
// End Class UAbilityComponent_RangeAttack Function SpawnProjectile

// Begin Class UAbilityComponent_RangeAttack Function StartAbilityAttack
struct Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_RangeAttack, nullptr, "StartAbilityAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_RangeAttack::execStartAbilityAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbilityAttack();
	P_NATIVE_END;
}
// End Class UAbilityComponent_RangeAttack Function StartAbilityAttack

// Begin Class UAbilityComponent_RangeAttack
void UAbilityComponent_RangeAttack::StaticRegisterNativesUAbilityComponent_RangeAttack()
{
	UClass* Class = UAbilityComponent_RangeAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UAbilityComponent_RangeAttack::execSpawnProjectile },
		{ "StartAbilityAttack", &UAbilityComponent_RangeAttack::execStartAbilityAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_RangeAttack);
UClass* Z_Construct_UClass_UAbilityComponent_RangeAttack_NoRegister()
{
	return UAbilityComponent_RangeAttack::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/Abilities/AbilityComponent_RangeAttack.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle_MetaData[] = {
		{ "Category", "AbilityComponent_RangeAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AbilityComponent_RangeAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "AbilityComponent_RangeAttack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FX_Sword_BeyondTip\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX_Sword_BeyondTip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "AbilityComponent_RangeAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "AbilityComponent_RangeAttack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ProjectileSpawnLocation\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ProjectileSpawnLocation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AliveTime_MetaData[] = {
		{ "Category", "AbilityComponent_RangeAttack" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_RangeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Particle;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AliveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_RangeAttack_SpawnProjectile, "SpawnProjectile" }, // 3860975778
		{ &Z_Construct_UFunction_UAbilityComponent_RangeAttack_StartAbilityAttack, "StartAbilityAttack" }, // 1153662015
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_RangeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_Particle = { "Particle", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_RangeAttack, Particle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle_MetaData), NewProp_Particle_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_RangeAttack, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_RangeAttack, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_RangeAttack, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_RangeAttack, ProjectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamage_MetaData), NewProp_ProjectileDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_AliveTime = { "AliveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_RangeAttack, AliveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AliveTime_MetaData), NewProp_AliveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_Particle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_ProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::NewProp_AliveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::ClassParams = {
	&UAbilityComponent_RangeAttack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_RangeAttack()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_RangeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_RangeAttack.OuterSingleton, Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_RangeAttack.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_RangeAttack>()
{
	return UAbilityComponent_RangeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_RangeAttack);
UAbilityComponent_RangeAttack::~UAbilityComponent_RangeAttack() {}
// End Class UAbilityComponent_RangeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_RangeAttack, UAbilityComponent_RangeAttack::StaticClass, TEXT("UAbilityComponent_RangeAttack"), &Z_Registration_Info_UClass_UAbilityComponent_RangeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_RangeAttack), 3536562861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_17987561(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
