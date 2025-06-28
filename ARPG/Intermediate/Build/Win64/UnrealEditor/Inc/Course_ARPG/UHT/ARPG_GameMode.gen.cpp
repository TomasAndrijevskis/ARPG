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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AARPG_GameMode, AARPG_GameMode::StaticClass, TEXT("AARPG_GameMode"), &Z_Registration_Info_UClass_AARPG_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARPG_GameMode), 3305941756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_3059001230(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
