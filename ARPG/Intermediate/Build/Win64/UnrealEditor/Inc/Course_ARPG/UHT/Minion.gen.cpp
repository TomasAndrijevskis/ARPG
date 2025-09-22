// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Minion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinion() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMinion_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UMinionHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMinion
void AMinion::StaticRegisterNativesAMinion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinion);
UClass* Z_Construct_UClass_AMinion_NoRegister()
{
	return AMinion::StaticClass();
}
struct Z_Construct_UClass_AMinion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Minion.h" },
		{ "ModuleRelativePath", "Public/Characters/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetRef_MetaData[] = {
		{ "Category", "Minion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetComponent_MetaData[] = {
		{ "Category", "Minion" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/Minion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "Minion" },
		{ "ModuleRelativePath", "Public/Characters/Minion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_HealthBarWidgetRef = { "HealthBarWidgetRef", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, HealthBarWidgetRef), Z_Construct_UClass_UMinionHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetRef_MetaData), NewProp_HealthBarWidgetRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_HealthBarWidgetComponent = { "HealthBarWidgetComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, HealthBarWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetComponent_MetaData), NewProp_HealthBarWidgetComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMinion_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMinion, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMinionHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMinion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_HealthBarWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_HealthBarWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMinion_Statics::NewProp_HealthBarWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMinion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinion_Statics::ClassParams = {
	&AMinion::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMinion_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMinion()
{
	if (!Z_Registration_Info_UClass_AMinion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinion.OuterSingleton, Z_Construct_UClass_AMinion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMinion.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMinion>()
{
	return AMinion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMinion);
AMinion::~AMinion() {}
// End Class AMinion

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMinion, AMinion::StaticClass, TEXT("AMinion"), &Z_Registration_Info_UClass_AMinion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinion), 11756737U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_h_3275181636(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Minion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
