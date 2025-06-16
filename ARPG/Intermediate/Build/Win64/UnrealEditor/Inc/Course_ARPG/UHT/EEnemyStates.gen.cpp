// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EEnemyStates.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEnemyStates() {}

// Begin Cross Module References
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EEnemyStates();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Enum EEnemyStates
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyStates;
static UEnum* EEnemyStates_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyStates.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyStates.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Course_ARPG_EEnemyStates, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("EEnemyStates"));
	}
	return Z_Registration_Info_UEnum_EEnemyStates.OuterSingleton;
}
template<> COURSE_ARPG_API UEnum* StaticEnum<EEnemyStates>()
{
	return EEnemyStates_StaticEnum();
}
struct Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Charge.DisplayName", "Charge" },
		{ "Charge.Name", "Charge" },
		{ "GameOver.DisplayName", "GameOver" },
		{ "GameOver.Name", "GameOver" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "Idle" },
		{ "Melee.DisplayName", "Melee" },
		{ "Melee.Name", "Melee" },
		{ "ModuleRelativePath", "Public/Characters/EEnemyStates.h" },
		{ "Range.DisplayName", "Range" },
		{ "Range.Name", "Range" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Idle", (int64)Idle },
		{ "Range", (int64)Range },
		{ "Charge", (int64)Charge },
		{ "Melee", (int64)Melee },
		{ "GameOver", (int64)GameOver },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	"EEnemyStates",
	"EEnemyStates",
	Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Course_ARPG_EEnemyStates()
{
	if (!Z_Registration_Info_UEnum_EEnemyStates.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyStates.InnerSingleton, Z_Construct_UEnum_Course_ARPG_EEnemyStates_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyStates.InnerSingleton;
}
// End Enum EEnemyStates

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EEnemyStates_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyStates_StaticEnum, TEXT("EEnemyStates"), &Z_Registration_Info_UEnum_EEnemyStates, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2644618420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EEnemyStates_h_3429040564(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EEnemyStates_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EEnemyStates_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
