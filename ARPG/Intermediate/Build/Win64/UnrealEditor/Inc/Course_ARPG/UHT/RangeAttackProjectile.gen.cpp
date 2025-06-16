// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/RangeAttackProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeAttackProjectile() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AProjectile_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_ARangeAttackProjectile();
COURSE_ARPG_API UClass* Z_Construct_UClass_ARangeAttackProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ARangeAttackProjectile
void ARangeAttackProjectile::StaticRegisterNativesARangeAttackProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARangeAttackProjectile);
UClass* Z_Construct_UClass_ARangeAttackProjectile_NoRegister()
{
	return ARangeAttackProjectile::StaticClass();
}
struct Z_Construct_UClass_ARangeAttackProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/RangeAttackProjectile.h" },
		{ "ModuleRelativePath", "Public/Combat/RangeAttackProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARangeAttackProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARangeAttackProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AProjectile_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARangeAttackProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARangeAttackProjectile_Statics::ClassParams = {
	&ARangeAttackProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARangeAttackProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ARangeAttackProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARangeAttackProjectile()
{
	if (!Z_Registration_Info_UClass_ARangeAttackProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARangeAttackProjectile.OuterSingleton, Z_Construct_UClass_ARangeAttackProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARangeAttackProjectile.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ARangeAttackProjectile>()
{
	return ARangeAttackProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARangeAttackProjectile);
ARangeAttackProjectile::~ARangeAttackProjectile() {}
// End Class ARangeAttackProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_RangeAttackProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARangeAttackProjectile, ARangeAttackProjectile::StaticClass, TEXT("ARangeAttackProjectile"), &Z_Registration_Info_UClass_ARangeAttackProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARangeAttackProjectile), 1856281390U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_RangeAttackProjectile_h_3958283909(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_RangeAttackProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_RangeAttackProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
