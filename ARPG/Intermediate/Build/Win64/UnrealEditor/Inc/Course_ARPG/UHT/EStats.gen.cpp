// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEStats() {}

// Begin Cross Module References
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EStats();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Enum EStats
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStats;
static UEnum* EStats_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStats.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStats.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Course_ARPG_EStats, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("EStats"));
	}
	return Z_Registration_Info_UEnum_EStats.OuterSingleton;
}
template<> COURSE_ARPG_API UEnum* StaticEnum<EStats>()
{
	return EStats_StaticEnum();
}
struct Z_Construct_UEnum_Course_ARPG_EStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Armor.DisplayName", "Armor" },
		{ "Armor.Name", "Armor" },
		{ "BlueprintType", "true" },
		{ "Health.DisplayName", "Health" },
		{ "Health.Name", "Health" },
		{ "MaxArmor.DisplayName", "Maximum Armor" },
		{ "MaxArmor.Name", "MaxArmor" },
		{ "MaxHealth.DisplayName", "Maximum Health" },
		{ "MaxHealth.Name", "MaxHealth" },
		{ "MaxStamina.DisplayName", "Maximum Stamina" },
		{ "MaxStamina.Name", "MaxStamina" },
		{ "MeleeRange.DisplayName", "MeleeRange" },
		{ "MeleeRange.Name", "MeleeRange" },
		{ "ModuleRelativePath", "Public/Characters/EStats.h" },
		{ "None.DisplayName", "None Selected" },
		{ "None.Name", "None" },
		{ "Stamina.DisplayName", "Stamina" },
		{ "Stamina.Name", "Stamina" },
		{ "Strength.DisplayName", "Strength" },
		{ "Strength.Name", "Strength" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "None", (int64)None },
		{ "Health", (int64)Health },
		{ "MaxHealth", (int64)MaxHealth },
		{ "Strength", (int64)Strength },
		{ "Stamina", (int64)Stamina },
		{ "MaxStamina", (int64)MaxStamina },
		{ "MeleeRange", (int64)MeleeRange },
		{ "Armor", (int64)Armor },
		{ "MaxArmor", (int64)MaxArmor },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Course_ARPG_EStats_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	"EStats",
	"EStats",
	Z_Construct_UEnum_Course_ARPG_EStats_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Course_ARPG_EStats_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Course_ARPG_EStats_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Course_ARPG_EStats_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Course_ARPG_EStats()
{
	if (!Z_Registration_Info_UEnum_EStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStats.InnerSingleton, Z_Construct_UEnum_Course_ARPG_EStats_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStats.InnerSingleton;
}
// End Enum EStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_EStats_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStats_StaticEnum, TEXT("EStats"), &Z_Registration_Info_UEnum_EStats, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2765038443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_EStats_h_1293461527(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_EStats_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_EStats_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
