// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Data/AbilityUpgradeRequirements.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityUpgradeRequirements() {}

// Begin Cross Module References
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityUpgradeRequirements();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FAbilityUpgradeRequirements
static_assert(std::is_polymorphic<FAbilityUpgradeRequirements>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAbilityUpgradeRequirements cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements;
class UScriptStruct* FAbilityUpgradeRequirements::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityUpgradeRequirements, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("AbilityUpgradeRequirements"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FAbilityUpgradeRequirements>()
{
	return FAbilityUpgradeRequirements::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/Data/AbilityUpgradeRequirements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "AbilityUpgradeRequirements" },
		{ "ModuleRelativePath", "Public/Characters/Data/AbilityUpgradeRequirements.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredPoints_MetaData[] = {
		{ "Category", "AbilityUpgradeRequirements" },
		{ "ModuleRelativePath", "Public/Characters/Data/AbilityUpgradeRequirements.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityUpgradeRequirements>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityUpgradeRequirements, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::NewProp_RequiredPoints = { "RequiredPoints", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityUpgradeRequirements, RequiredPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredPoints_MetaData), NewProp_RequiredPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::NewProp_RequiredPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AbilityUpgradeRequirements",
	Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::PropPointers),
	sizeof(FAbilityUpgradeRequirements),
	alignof(FAbilityUpgradeRequirements),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityUpgradeRequirements()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements.InnerSingleton, Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements.InnerSingleton;
}
// End ScriptStruct FAbilityUpgradeRequirements

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_AbilityUpgradeRequirements_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityUpgradeRequirements::StaticStruct, Z_Construct_UScriptStruct_FAbilityUpgradeRequirements_Statics::NewStructOps, TEXT("AbilityUpgradeRequirements"), &Z_Registration_Info_UScriptStruct_AbilityUpgradeRequirements, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityUpgradeRequirements), 2821023478U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_AbilityUpgradeRequirements_h_4096355018(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_AbilityUpgradeRequirements_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_AbilityUpgradeRequirements_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
