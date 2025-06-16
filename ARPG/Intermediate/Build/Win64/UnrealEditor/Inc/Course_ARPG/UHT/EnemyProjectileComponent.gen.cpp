// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/EnemyProjectileComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyProjectileComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UEnemyProjectileComponent Function SpawnProjectile
struct Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyProjectileComponent, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyProjectileComponent::execSpawnProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnProjectile();
	P_NATIVE_END;
}
// End Class UEnemyProjectileComponent Function SpawnProjectile

// Begin Class UEnemyProjectileComponent
void UEnemyProjectileComponent::StaticRegisterNativesUEnemyProjectileComponent()
{
	UClass* Class = UEnemyProjectileComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnProjectile", &UEnemyProjectileComponent::execSpawnProjectile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyProjectileComponent);
UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister()
{
	return UEnemyProjectileComponent::StaticClass();
}
struct Z_Construct_UClass_UEnemyProjectileComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/EnemyProjectileComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "EnemyProjectileComponent" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[] = {
		{ "Category", "EnemyProjectileComponent" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileDamage_MetaData[] = {
		{ "Category", "EnemyProjectileComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ProjectileSpawnLocation\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ProjectileSpawnLocation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AliveTime_MetaData[] = {
		{ "Category", "EnemyProjectileComponent" },
		{ "ModuleRelativePath", "Public/Combat/EnemyProjectileComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AliveTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyProjectileComponent_SpawnProjectile, "SpawnProjectile" }, // 2546538905
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyProjectileComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyProjectileComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyProjectileComponent, ComponentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentName_MetaData), NewProp_ComponentName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_ProjectileDamage = { "ProjectileDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyProjectileComponent, ProjectileDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileDamage_MetaData), NewProp_ProjectileDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_AliveTime = { "AliveTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyProjectileComponent, AliveTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AliveTime_MetaData), NewProp_AliveTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyProjectileComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_ComponentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_ProjectileDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyProjectileComponent_Statics::NewProp_AliveTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectileComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyProjectileComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectileComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyProjectileComponent_Statics::ClassParams = {
	&UEnemyProjectileComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnemyProjectileComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectileComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyProjectileComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyProjectileComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyProjectileComponent()
{
	if (!Z_Registration_Info_UClass_UEnemyProjectileComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyProjectileComponent.OuterSingleton, Z_Construct_UClass_UEnemyProjectileComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyProjectileComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UEnemyProjectileComponent>()
{
	return UEnemyProjectileComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyProjectileComponent);
UEnemyProjectileComponent::~UEnemyProjectileComponent() {}
// End Class UEnemyProjectileComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectileComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyProjectileComponent, UEnemyProjectileComponent::StaticClass, TEXT("UEnemyProjectileComponent"), &Z_Registration_Info_UClass_UEnemyProjectileComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyProjectileComponent), 3159694462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectileComponent_h_2618901132(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectileComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectileComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
