// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_MeleeAttack_Grux.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_MeleeAttack_Grux() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Grux();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MeleeAttack_Grux_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_MeleeAttack_Grux
void UBTT_MeleeAttack_Grux::StaticRegisterNativesUBTT_MeleeAttack_Grux()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_MeleeAttack_Grux);
UClass* Z_Construct_UClass_UBTT_MeleeAttack_Grux_NoRegister()
{
	return UBTT_MeleeAttack_Grux::StaticClass();
}
struct Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_MeleeAttack_Grux.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Grux.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasRangeAttack_MetaData[] = {
		{ "Category", "BTT_MeleeAttack_Grux" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MeleeAttack_Grux.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasRangeAttack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRangeAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_MeleeAttack_Grux>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::NewProp_bHasRangeAttack_SetBit(void* Obj)
{
	((UBTT_MeleeAttack_Grux*)Obj)->bHasRangeAttack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::NewProp_bHasRangeAttack = { "bHasRangeAttack", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTT_MeleeAttack_Grux), &Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::NewProp_bHasRangeAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasRangeAttack_MetaData), NewProp_bHasRangeAttack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::NewProp_bHasRangeAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTT_MeleeAttack_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::ClassParams = {
	&UBTT_MeleeAttack_Grux::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_MeleeAttack_Grux()
{
	if (!Z_Registration_Info_UClass_UBTT_MeleeAttack_Grux.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_MeleeAttack_Grux.OuterSingleton, Z_Construct_UClass_UBTT_MeleeAttack_Grux_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_MeleeAttack_Grux.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_MeleeAttack_Grux>()
{
	return UBTT_MeleeAttack_Grux::StaticClass();
}
UBTT_MeleeAttack_Grux::UBTT_MeleeAttack_Grux() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_MeleeAttack_Grux);
UBTT_MeleeAttack_Grux::~UBTT_MeleeAttack_Grux() {}
// End Class UBTT_MeleeAttack_Grux

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Grux_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_MeleeAttack_Grux, UBTT_MeleeAttack_Grux::StaticClass, TEXT("UBTT_MeleeAttack_Grux"), &Z_Registration_Info_UClass_UBTT_MeleeAttack_Grux, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_MeleeAttack_Grux), 1153841165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Grux_h_1057941499(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Grux_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Grux_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
