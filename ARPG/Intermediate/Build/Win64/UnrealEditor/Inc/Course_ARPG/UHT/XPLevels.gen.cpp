// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Data/XPLevels.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXPLevels() {}

// Begin Cross Module References
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FXPLevels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FXPLevels
static_assert(std::is_polymorphic<FXPLevels>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FXPLevels cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XPLevels;
class UScriptStruct* FXPLevels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XPLevels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XPLevels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXPLevels, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("XPLevels"));
	}
	return Z_Registration_Info_UScriptStruct_XPLevels.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FXPLevels>()
{
	return FXPLevels::StaticStruct();
}
struct Z_Construct_UScriptStruct_FXPLevels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/Data/XPLevels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "XPLevels" },
		{ "ModuleRelativePath", "Public/Characters/Data/XPLevels.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[] = {
		{ "Category", "XPLevels" },
		{ "ModuleRelativePath", "Public/Characters/Data/XPLevels.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Experience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXPLevels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FXPLevels_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXPLevels, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXPLevels_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXPLevels, Experience), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Experience_MetaData), NewProp_Experience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXPLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXPLevels_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXPLevels_Statics::NewProp_Experience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXPLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXPLevels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"XPLevels",
	Z_Construct_UScriptStruct_FXPLevels_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXPLevels_Statics::PropPointers),
	sizeof(FXPLevels),
	alignof(FXPLevels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXPLevels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FXPLevels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FXPLevels()
{
	if (!Z_Registration_Info_UScriptStruct_XPLevels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XPLevels.InnerSingleton, Z_Construct_UScriptStruct_FXPLevels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_XPLevels.InnerSingleton;
}
// End ScriptStruct FXPLevels

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_Data_XPLevels_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FXPLevels::StaticStruct, Z_Construct_UScriptStruct_FXPLevels_Statics::NewStructOps, TEXT("XPLevels"), &Z_Registration_Info_UScriptStruct_XPLevels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXPLevels), 3764257016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_Data_XPLevels_h_101032072(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_Data_XPLevels_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_Data_XPLevels_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
