// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/EScreens.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEScreens() {}

// Begin Cross Module References
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EScreens();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Enum EScreens
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreens;
static UEnum* EScreens_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScreens.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScreens.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Course_ARPG_EScreens, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("EScreens"));
	}
	return Z_Registration_Info_UEnum_EScreens.OuterSingleton;
}
template<> COURSE_ARPG_API UEnum* StaticEnum<EScreens>()
{
	return EScreens_StaticEnum();
}
struct Z_Construct_UEnum_Course_ARPG_EScreens_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AbilitiesScreen.DisplayName", "Abilities Screen" },
		{ "AbilitiesScreen.Name", "AbilitiesScreen" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UI/EScreens.h" },
		{ "StatsScreen.DisplayName", "Stats Screen" },
		{ "StatsScreen.Name", "StatsScreen" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "StatsScreen", (int64)StatsScreen },
		{ "AbilitiesScreen", (int64)AbilitiesScreen },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Course_ARPG_EScreens_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	"EScreens",
	"EScreens",
	Z_Construct_UEnum_Course_ARPG_EScreens_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Course_ARPG_EScreens_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Course_ARPG_EScreens_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Course_ARPG_EScreens_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Course_ARPG_EScreens()
{
	if (!Z_Registration_Info_UEnum_EScreens.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreens.InnerSingleton, Z_Construct_UEnum_Course_ARPG_EScreens_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScreens.InnerSingleton;
}
// End Enum EScreens

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EScreens_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScreens_StaticEnum, TEXT("EScreens"), &Z_Registration_Info_UEnum_EScreens, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 702563385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EScreens_h_3049646283(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EScreens_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EScreens_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
