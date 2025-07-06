// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/CombatComponent_Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombatComponent_Enemy() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Enemy();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Enemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UCombatComponent_Enemy
void UCombatComponent_Enemy::StaticRegisterNativesUCombatComponent_Enemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombatComponent_Enemy);
UClass* Z_Construct_UClass_UCombatComponent_Enemy_NoRegister()
{
	return UCombatComponent_Enemy::StaticClass();
}
struct Z_Construct_UClass_UCombatComponent_Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/CombatComponent_Enemy.h" },
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/CombatComponent_Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombatComponent_Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCombatComponent_Enemy_Statics::NewProp_AnimDuration = { "AnimDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCombatComponent_Enemy, AnimDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimDuration_MetaData), NewProp_AnimDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombatComponent_Enemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombatComponent_Enemy_Statics::NewProp_AnimDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Enemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCombatComponent_Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCombatComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombatComponent_Enemy_Statics::ClassParams = {
	&UCombatComponent_Enemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCombatComponent_Enemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Enemy_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCombatComponent_Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UCombatComponent_Enemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCombatComponent_Enemy()
{
	if (!Z_Registration_Info_UClass_UCombatComponent_Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombatComponent_Enemy.OuterSingleton, Z_Construct_UClass_UCombatComponent_Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCombatComponent_Enemy.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UCombatComponent_Enemy>()
{
	return UCombatComponent_Enemy::StaticClass();
}
UCombatComponent_Enemy::UCombatComponent_Enemy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCombatComponent_Enemy);
UCombatComponent_Enemy::~UCombatComponent_Enemy() {}
// End Class UCombatComponent_Enemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCombatComponent_Enemy, UCombatComponent_Enemy::StaticClass, TEXT("UCombatComponent_Enemy"), &Z_Registration_Info_UClass_UCombatComponent_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombatComponent_Enemy), 865511258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Enemy_h_881208720(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
