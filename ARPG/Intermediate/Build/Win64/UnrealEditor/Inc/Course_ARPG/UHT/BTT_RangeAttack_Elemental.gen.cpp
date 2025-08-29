// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_RangeAttack_Elemental.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_RangeAttack_Elemental() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_RangeAttack_Elemental();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_RangeAttack_Elemental_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_RangeAttack_Elemental
void UBTT_RangeAttack_Elemental::StaticRegisterNativesUBTT_RangeAttack_Elemental()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_RangeAttack_Elemental);
UClass* Z_Construct_UClass_UBTT_RangeAttack_Elemental_NoRegister()
{
	return UBTT_RangeAttack_Elemental::StaticClass();
}
struct Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_RangeAttack_Elemental.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_RangeAttack_Elemental.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_RangeAttack_Elemental>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics::ClassParams = {
	&UBTT_RangeAttack_Elemental::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_RangeAttack_Elemental()
{
	if (!Z_Registration_Info_UClass_UBTT_RangeAttack_Elemental.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_RangeAttack_Elemental.OuterSingleton, Z_Construct_UClass_UBTT_RangeAttack_Elemental_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_RangeAttack_Elemental.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_RangeAttack_Elemental>()
{
	return UBTT_RangeAttack_Elemental::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_RangeAttack_Elemental);
UBTT_RangeAttack_Elemental::~UBTT_RangeAttack_Elemental() {}
// End Class UBTT_RangeAttack_Elemental

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Elemental_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_RangeAttack_Elemental, UBTT_RangeAttack_Elemental::StaticClass, TEXT("UBTT_RangeAttack_Elemental"), &Z_Registration_Info_UClass_UBTT_RangeAttack_Elemental, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_RangeAttack_Elemental), 3289887507U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Elemental_h_2838662503(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Elemental_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_RangeAttack_Elemental_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
