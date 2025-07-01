// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/MainCharacter_Warrior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter_Warrior() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Warrior();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Warrior_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_DamageIncrease_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_GetArmor_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_LifeStealAttack_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_RangeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMainCharacter_Warrior
void AMainCharacter_Warrior::StaticRegisterNativesAMainCharacter_Warrior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter_Warrior);
UClass* Z_Construct_UClass_AMainCharacter_Warrior_NoRegister()
{
	return AMainCharacter_Warrior::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Warrior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MainCharacter_Warrior.h" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Warrior.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_DamageIncrease_MetaData[] = {
		{ "Category", "MainCharacter_Warrior" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Warrior.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_LifeStealAttack_MetaData[] = {
		{ "Category", "MainCharacter_Warrior" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Warrior.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_RangeAttack_MetaData[] = {
		{ "Category", "MainCharacter_Warrior" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Warrior.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_GetArmor_MetaData[] = {
		{ "Category", "MainCharacter_Warrior" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Warrior.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_DamageIncrease;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_LifeStealAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_RangeAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_GetArmor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter_Warrior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_DamageIncrease = { "AbilityComp_DamageIncrease", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Warrior, AbilityComp_DamageIncrease), Z_Construct_UClass_UAbilityComponent_DamageIncrease_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_DamageIncrease_MetaData), NewProp_AbilityComp_DamageIncrease_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_LifeStealAttack = { "AbilityComp_LifeStealAttack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Warrior, AbilityComp_LifeStealAttack), Z_Construct_UClass_UAbilityComponent_LifeStealAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_LifeStealAttack_MetaData), NewProp_AbilityComp_LifeStealAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_RangeAttack = { "AbilityComp_RangeAttack", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Warrior, AbilityComp_RangeAttack), Z_Construct_UClass_UAbilityComponent_RangeAttack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_RangeAttack_MetaData), NewProp_AbilityComp_RangeAttack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_GetArmor = { "AbilityComp_GetArmor", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Warrior, AbilityComp_GetArmor), Z_Construct_UClass_UAbilityComponent_GetArmor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_GetArmor_MetaData), NewProp_AbilityComp_GetArmor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Warrior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_DamageIncrease,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_LifeStealAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_RangeAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Warrior_Statics::NewProp_AbilityComp_GetArmor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Warrior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Warrior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMainCharacter_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Warrior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Warrior_Statics::ClassParams = {
	&AMainCharacter_Warrior::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMainCharacter_Warrior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Warrior_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Warrior_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Warrior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter_Warrior()
{
	if (!Z_Registration_Info_UClass_AMainCharacter_Warrior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter_Warrior.OuterSingleton, Z_Construct_UClass_AMainCharacter_Warrior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter_Warrior.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMainCharacter_Warrior>()
{
	return AMainCharacter_Warrior::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter_Warrior);
AMainCharacter_Warrior::~AMainCharacter_Warrior() {}
// End Class AMainCharacter_Warrior

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Warrior_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter_Warrior, AMainCharacter_Warrior::StaticClass, TEXT("AMainCharacter_Warrior"), &Z_Registration_Info_UClass_AMainCharacter_Warrior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter_Warrior), 519574301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Warrior_h_1088288477(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Warrior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Warrior_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
