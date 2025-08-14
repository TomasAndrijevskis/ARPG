// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_GroundSmashAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_GroundSmashAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_GroundSmashAttack();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_GroundSmashAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_GroundSmashAttack
void UBTT_GroundSmashAttack::StaticRegisterNativesUBTT_GroundSmashAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_GroundSmashAttack);
UClass* Z_Construct_UClass_UBTT_GroundSmashAttack_NoRegister()
{
	return UBTT_GroundSmashAttack::StaticClass();
}
struct Z_Construct_UClass_UBTT_GroundSmashAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_GroundSmashAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_GroundSmashAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_GroundSmashAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTT_GroundSmashAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_GroundSmashAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_GroundSmashAttack_Statics::ClassParams = {
	&UBTT_GroundSmashAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_GroundSmashAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_GroundSmashAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_GroundSmashAttack()
{
	if (!Z_Registration_Info_UClass_UBTT_GroundSmashAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_GroundSmashAttack.OuterSingleton, Z_Construct_UClass_UBTT_GroundSmashAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_GroundSmashAttack.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_GroundSmashAttack>()
{
	return UBTT_GroundSmashAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_GroundSmashAttack);
UBTT_GroundSmashAttack::~UBTT_GroundSmashAttack() {}
// End Class UBTT_GroundSmashAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_GroundSmashAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_GroundSmashAttack, UBTT_GroundSmashAttack::StaticClass, TEXT("UBTT_GroundSmashAttack"), &Z_Registration_Info_UClass_UBTT_GroundSmashAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_GroundSmashAttack), 3437316692U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_GroundSmashAttack_h_1020099969(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_GroundSmashAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_GroundSmashAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
