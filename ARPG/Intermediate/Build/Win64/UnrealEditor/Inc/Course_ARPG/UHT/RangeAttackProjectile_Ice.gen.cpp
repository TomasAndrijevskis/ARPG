// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Projectiles/RangeAttackProjectile_Ice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeAttackProjectile_Ice() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AProjectile_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_ARangeAttackProjectile_Ice();
COURSE_ARPG_API UClass* Z_Construct_UClass_ARangeAttackProjectile_Ice_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ARangeAttackProjectile_Ice
void ARangeAttackProjectile_Ice::StaticRegisterNativesARangeAttackProjectile_Ice()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARangeAttackProjectile_Ice);
UClass* Z_Construct_UClass_ARangeAttackProjectile_Ice_NoRegister()
{
	return ARangeAttackProjectile_Ice::StaticClass();
}
struct Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Projectiles/RangeAttackProjectile_Ice.h" },
		{ "ModuleRelativePath", "Public/Combat/Projectiles/RangeAttackProjectile_Ice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "RangeAttackProjectile_Ice" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Projectiles/RangeAttackProjectile_Ice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "RangeAttackProjectile_Ice" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Projectiles/RangeAttackProjectile_Ice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeAttackProjectile_Ice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangeAttackProjectile_Ice, NiagaraEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraEffect_MetaData), NewProp_NiagaraEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARangeAttackProjectile_Ice, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::NewProp_NiagaraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::ClassParams = {
	&ARangeAttackProjectile_Ice::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::Class_MetaDataParams), Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARangeAttackProjectile_Ice()
{
	if (!Z_Registration_Info_UClass_ARangeAttackProjectile_Ice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARangeAttackProjectile_Ice.OuterSingleton, Z_Construct_UClass_ARangeAttackProjectile_Ice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARangeAttackProjectile_Ice.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ARangeAttackProjectile_Ice>()
{
	return ARangeAttackProjectile_Ice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeAttackProjectile_Ice);
ARangeAttackProjectile_Ice::~ARangeAttackProjectile_Ice() {}
// End Class ARangeAttackProjectile_Ice

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectiles_RangeAttackProjectile_Ice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARangeAttackProjectile_Ice, ARangeAttackProjectile_Ice::StaticClass, TEXT("ARangeAttackProjectile_Ice"), &Z_Registration_Info_UClass_ARangeAttackProjectile_Ice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARangeAttackProjectile_Ice), 3770085424U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectiles_RangeAttackProjectile_Ice_h_3946371211(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectiles_RangeAttackProjectile_Ice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectiles_RangeAttackProjectile_Ice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
