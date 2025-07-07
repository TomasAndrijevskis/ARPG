// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/CombatComponent_Mage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent_Mage() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Mage();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Mage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UCombatComponent_Mage Function SpawnProjectile
struct Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCombatComponent_Mage, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCombatComponent_Mage::execSpawnProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile();
	P_NATIVE_END;
}
// End Class UCombatComponent_Mage Function SpawnProjectile

// Begin Class UCombatComponent_Mage
void UCombatComponent_Mage::StaticRegisterNativesUCombatComponent_Mage()
{
	UClass* Class = UCombatComponent_Mage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UCombatComponent_Mage::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent_Mage);
UClass* Z_Construct_UClass_UCombatComponent_Mage_NoRegister()
{
	return UCombatComponent_Mage::StaticClass();
}
struct Z_Construct_UClass_UCombatComponent_Mage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/CombatComponent_Mage.h" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackManaCost_MetaData[] = {
		{ "Category", "CombatComponent_Mage" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClasses_MetaData[] = {
		{ "Category", "CombatComponent_Mage" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "CombatComponent_Mage" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AliveTime_MetaData[] = {
		{ "Category", "CombatComponent_Mage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ProjectileSpawnLocation\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ProjectileSpawnLocation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Mage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackManaCost;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectileClasses;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AliveTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCombatComponent_Mage_SpawnProjectile, "SpawnProjectile" }, // 678072362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent_Mage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_AttackManaCost = { "AttackManaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent_Mage, AttackManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackManaCost_MetaData), NewProp_AttackManaCost_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_ProjectileClasses_Inner = { "ProjectileClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_ProjectileClasses = { "ProjectileClasses", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent_Mage, ProjectileClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClasses_MetaData), NewProp_ProjectileClasses_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent_Mage, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_AliveTime = { "AliveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent_Mage, AliveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AliveTime_MetaData), NewProp_AliveTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent_Mage, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Mage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_AttackManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_ProjectileClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_ProjectileClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_AliveTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Mage_Statics::NewProp_SkeletalMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Mage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatComponent_Mage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombatComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Mage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Mage_Statics::ClassParams = {
	&UCombatComponent_Mage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCombatComponent_Mage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Mage_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Mage_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Mage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComponent_Mage()
{
	if (!Z_Registration_Info_UClass_UCombatComponent_Mage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent_Mage.OuterSingleton, Z_Construct_UClass_UCombatComponent_Mage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComponent_Mage.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UCombatComponent_Mage>()
{
	return UCombatComponent_Mage::StaticClass();
}
UCombatComponent_Mage::UCombatComponent_Mage() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent_Mage);
UCombatComponent_Mage::~UCombatComponent_Mage() {}
// End Class UCombatComponent_Mage

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Mage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent_Mage, UCombatComponent_Mage::StaticClass, TEXT("UCombatComponent_Mage"), &Z_Registration_Info_UClass_UCombatComponent_Mage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent_Mage), 3713465325U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Mage_h_78524268(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Mage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Mage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
