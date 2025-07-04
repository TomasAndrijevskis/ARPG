// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/SaveGame/AbilityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityData() {}

// Begin Cross Module References
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityData();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FAbilityData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AbilityData;
class UScriptStruct* FAbilityData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AbilityData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAbilityData, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("AbilityData"));
	}
	return Z_Registration_Info_UScriptStruct_AbilityData.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FAbilityData>()
{
	return FAbilityData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAbilityData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUnlocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManaCost_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownDuration_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/AbilityData.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsUnlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUnlocked;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ManaCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilityDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomProperties_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomProperties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CustomProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAbilityData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_bIsUnlocked_SetBit(void* Obj)
{
	((FAbilityData*)Obj)->bIsUnlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_bIsUnlocked = { "bIsUnlocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAbilityData), &Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_bIsUnlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUnlocked_MetaData), NewProp_bIsUnlocked_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityData, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_ManaCost = { "ManaCost", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityData, ManaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManaCost_MetaData), NewProp_ManaCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_AbilityDuration = { "AbilityDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityData, AbilityDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDuration_MetaData), NewProp_AbilityDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CooldownDuration = { "CooldownDuration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityData, CooldownDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownDuration_MetaData), NewProp_CooldownDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CustomProperties_ValueProp = { "CustomProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CustomProperties_Key_KeyProp = { "CustomProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CustomProperties = { "CustomProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAbilityData, CustomProperties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomProperties_MetaData), NewProp_CustomProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAbilityData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_bIsUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_ManaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_AbilityDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CooldownDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CustomProperties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CustomProperties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAbilityData_Statics::NewProp_CustomProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAbilityData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	&NewStructOps,
	"AbilityData",
	Z_Construct_UScriptStruct_FAbilityData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityData_Statics::PropPointers),
	sizeof(FAbilityData),
	alignof(FAbilityData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAbilityData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAbilityData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAbilityData()
{
	if (!Z_Registration_Info_UScriptStruct_AbilityData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AbilityData.InnerSingleton, Z_Construct_UScriptStruct_FAbilityData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AbilityData.InnerSingleton;
}
// End ScriptStruct FAbilityData

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_AbilityData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAbilityData::StaticStruct, Z_Construct_UScriptStruct_FAbilityData_Statics::NewStructOps, TEXT("AbilityData"), &Z_Registration_Info_UScriptStruct_AbilityData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAbilityData), 2470938448U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_AbilityData_h_1278367092(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_AbilityData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_AbilityData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
