// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Boss_Rampage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoss_Rampage() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss_Rampage();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABoss_Rampage_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UGroundSmashComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABoss_Rampage
void ABoss_Rampage::StaticRegisterNativesABoss_Rampage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoss_Rampage);
UClass* Z_Construct_UClass_ABoss_Rampage_NoRegister()
{
	return ABoss_Rampage::StaticClass();
}
struct Z_Construct_UClass_ABoss_Rampage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Boss_Rampage.h" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Rampage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSmashComp_MetaData[] = {
		{ "Category", "Boss_Rampage" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Rampage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageReductionPercent_MetaData[] = {
		{ "Category", "Boss_Rampage" },
		{ "ModuleRelativePath", "Public/Characters/Boss_Rampage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundSmashComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReductionPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoss_Rampage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoss_Rampage_Statics::NewProp_GroundSmashComp = { "GroundSmashComp", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Rampage, GroundSmashComp), Z_Construct_UClass_UGroundSmashComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSmashComp_MetaData), NewProp_GroundSmashComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoss_Rampage_Statics::NewProp_DamageReductionPercent = { "DamageReductionPercent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoss_Rampage, DamageReductionPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageReductionPercent_MetaData), NewProp_DamageReductionPercent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoss_Rampage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Rampage_Statics::NewProp_GroundSmashComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoss_Rampage_Statics::NewProp_DamageReductionPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Rampage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoss_Rampage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABoss,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Rampage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoss_Rampage_Statics::ClassParams = {
	&ABoss_Rampage::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoss_Rampage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Rampage_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoss_Rampage_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoss_Rampage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoss_Rampage()
{
	if (!Z_Registration_Info_UClass_ABoss_Rampage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoss_Rampage.OuterSingleton, Z_Construct_UClass_ABoss_Rampage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoss_Rampage.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABoss_Rampage>()
{
	return ABoss_Rampage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoss_Rampage);
ABoss_Rampage::~ABoss_Rampage() {}
// End Class ABoss_Rampage

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Rampage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoss_Rampage, ABoss_Rampage::StaticClass, TEXT("ABoss_Rampage"), &Z_Registration_Info_UClass_ABoss_Rampage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoss_Rampage), 1774620391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Rampage_h_326631021(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Rampage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Boss_Rampage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
