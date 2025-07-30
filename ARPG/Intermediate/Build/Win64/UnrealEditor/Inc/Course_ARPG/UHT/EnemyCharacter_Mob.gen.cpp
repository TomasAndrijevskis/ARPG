// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EnemyCharacter_Mob.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Mob() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Mob();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Mob_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AEnemyCharacter_Mob
void AEnemyCharacter_Mob::StaticRegisterNativesAEnemyCharacter_Mob()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Mob);
UClass* Z_Construct_UClass_AEnemyCharacter_Mob_NoRegister()
{
	return AEnemyCharacter_Mob::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Mob_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter_Mob.h" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Mob.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetRef_MetaData[] = {
		{ "Category", "EnemyCharacter_Mob" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Mob.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetComponent_MetaData[] = {
		{ "Category", "EnemyCharacter_Mob" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Mob.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetClass_MetaData[] = {
		{ "Category", "EnemyCharacter_Mob" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Mob.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Mob>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Mob_Statics::NewProp_HealthBarWidgetRef = { "HealthBarWidgetRef", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Mob, HealthBarWidgetRef), Z_Construct_UClass_UEnemyHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetRef_MetaData), NewProp_HealthBarWidgetRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Mob_Statics::NewProp_HealthBarWidgetComponent = { "HealthBarWidgetComponent", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Mob, HealthBarWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetComponent_MetaData), NewProp_HealthBarWidgetComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyCharacter_Mob_Statics::NewProp_HealthBarWidgetClass = { "HealthBarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Mob, HealthBarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnemyHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetClass_MetaData), NewProp_HealthBarWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Mob_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Mob_Statics::NewProp_HealthBarWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Mob_Statics::NewProp_HealthBarWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Mob_Statics::NewProp_HealthBarWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Mob_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Mob_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Mob_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Mob_Statics::ClassParams = {
	&AEnemyCharacter_Mob::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemyCharacter_Mob_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Mob_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Mob_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Mob_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter_Mob()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter_Mob.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Mob.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Mob_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter_Mob.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AEnemyCharacter_Mob>()
{
	return AEnemyCharacter_Mob::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Mob);
AEnemyCharacter_Mob::~AEnemyCharacter_Mob() {}
// End Class AEnemyCharacter_Mob

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Mob_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Mob, AEnemyCharacter_Mob::StaticClass, TEXT("AEnemyCharacter_Mob"), &Z_Registration_Info_UClass_AEnemyCharacter_Mob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Mob), 2562960923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Mob_h_3961793517(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Mob_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Mob_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
