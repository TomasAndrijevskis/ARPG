// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/Base/AbilityComponent_Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_Enemy() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Enemy();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Enemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_Enemy
void UAbilityComponent_Enemy::StaticRegisterNativesUAbilityComponent_Enemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_Enemy);
UClass* Z_Construct_UClass_UAbilityComponent_Enemy_NoRegister()
{
	return UAbilityComponent_Enemy::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/Base/AbilityComponent_Enemy.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/Base/AbilityComponent_Enemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAbilityComponent_Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_Enemy_Statics::ClassParams = {
	&UAbilityComponent_Enemy::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_Enemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_Enemy()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_Enemy.OuterSingleton, Z_Construct_UClass_UAbilityComponent_Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_Enemy.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_Enemy>()
{
	return UAbilityComponent_Enemy::StaticClass();
}
UAbilityComponent_Enemy::UAbilityComponent_Enemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_Enemy);
UAbilityComponent_Enemy::~UAbilityComponent_Enemy() {}
// End Class UAbilityComponent_Enemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_Enemy, UAbilityComponent_Enemy::StaticClass, TEXT("UAbilityComponent_Enemy"), &Z_Registration_Info_UClass_UAbilityComponent_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_Enemy), 2207470841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Enemy_h_3869208955(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
