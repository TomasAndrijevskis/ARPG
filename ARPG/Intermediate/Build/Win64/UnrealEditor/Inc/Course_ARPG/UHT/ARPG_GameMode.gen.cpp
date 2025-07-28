// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Gamemode/ARPG_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_GameMode() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_GameMode();
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AARPG_GameMode
void AARPG_GameMode::StaticRegisterNativesAARPG_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARPG_GameMode);
UClass* Z_Construct_UClass_AARPG_GameMode_NoRegister()
{
	return AARPG_GameMode::StaticClass();
}
struct Z_Construct_UClass_AARPG_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/ARPG_GameMode.h" },
		{ "ModuleRelativePath", "Public/Gamemode/ARPG_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawners_MetaData[] = {
		{ "Category", "ARPG_GameMode" },
		{ "ModuleRelativePath", "Public/Gamemode/ARPG_GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySpawners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemySpawners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AARPG_GameMode_Statics::NewProp_EnemySpawners_Inner = { "EnemySpawners", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARPG_GameMode_Statics::NewProp_EnemySpawners = { "EnemySpawners", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AARPG_GameMode, EnemySpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpawners_MetaData), NewProp_EnemySpawners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARPG_GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPG_GameMode_Statics::NewProp_EnemySpawners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPG_GameMode_Statics::NewProp_EnemySpawners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AARPG_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AARPG_GameMode_Statics::ClassParams = {
	&AARPG_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AARPG_GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_GameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AARPG_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AARPG_GameMode()
{
	if (!Z_Registration_Info_UClass_AARPG_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARPG_GameMode.OuterSingleton, Z_Construct_UClass_AARPG_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AARPG_GameMode.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AARPG_GameMode>()
{
	return AARPG_GameMode::StaticClass();
}
AARPG_GameMode::AARPG_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AARPG_GameMode);
AARPG_GameMode::~AARPG_GameMode() {}
// End Class AARPG_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AARPG_GameMode, AARPG_GameMode::StaticClass, TEXT("AARPG_GameMode"), &Z_Registration_Info_UClass_AARPG_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARPG_GameMode), 3081697868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_3964610086(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
