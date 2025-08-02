// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/UBTT_Shoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUBTT_Shoot() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UUBTT_Shoot();
COURSE_ARPG_API UClass* Z_Construct_UClass_UUBTT_Shoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UUBTT_Shoot
void UUBTT_Shoot::StaticRegisterNativesUUBTT_Shoot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUBTT_Shoot);
UClass* Z_Construct_UClass_UUBTT_Shoot_NoRegister()
{
	return UUBTT_Shoot::StaticClass();
}
struct Z_Construct_UClass_UUBTT_Shoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/UBTT_Shoot.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/UBTT_Shoot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimalDistance_MetaData[] = {
		{ "Category", "UBTT_Shoot" },
		{ "ModuleRelativePath", "Public/Characters/AI/UBTT_Shoot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimalDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUBTT_Shoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUBTT_Shoot_Statics::NewProp_MinimalDistance = { "MinimalDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUBTT_Shoot, MinimalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimalDistance_MetaData), NewProp_MinimalDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUBTT_Shoot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUBTT_Shoot_Statics::NewProp_MinimalDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTT_Shoot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUBTT_Shoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTT_Shoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUBTT_Shoot_Statics::ClassParams = {
	&UUBTT_Shoot::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUBTT_Shoot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUBTT_Shoot_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUBTT_Shoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UUBTT_Shoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUBTT_Shoot()
{
	if (!Z_Registration_Info_UClass_UUBTT_Shoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUBTT_Shoot.OuterSingleton, Z_Construct_UClass_UUBTT_Shoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUBTT_Shoot.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UUBTT_Shoot>()
{
	return UUBTT_Shoot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUBTT_Shoot);
UUBTT_Shoot::~UUBTT_Shoot() {}
// End Class UUBTT_Shoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_UBTT_Shoot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUBTT_Shoot, UUBTT_Shoot::StaticClass, TEXT("UUBTT_Shoot"), &Z_Registration_Info_UClass_UUBTT_Shoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUBTT_Shoot), 2787097539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_UBTT_Shoot_h_1008001766(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_UBTT_Shoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_UBTT_Shoot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
