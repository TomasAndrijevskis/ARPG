// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Objects/BonfireData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonfireData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FBonfireData();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FBonfireData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BonfireData;
class UScriptStruct* FBonfireData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BonfireData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BonfireData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBonfireData, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("BonfireData"));
	}
	return Z_Registration_Info_UScriptStruct_BonfireData.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FBonfireData>()
{
	return FBonfireData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBonfireData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Objects/BonfireData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/BonfireData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Objects/BonfireData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBonfireData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBonfireData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBonfireData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBonfireData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBonfireData, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBonfireData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBonfireData_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBonfireData_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBonfireData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBonfireData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	&NewStructOps,
	"BonfireData",
	Z_Construct_UScriptStruct_FBonfireData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBonfireData_Statics::PropPointers),
	sizeof(FBonfireData),
	alignof(FBonfireData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBonfireData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBonfireData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBonfireData()
{
	if (!Z_Registration_Info_UScriptStruct_BonfireData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BonfireData.InnerSingleton, Z_Construct_UScriptStruct_FBonfireData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BonfireData.InnerSingleton;
}
// End ScriptStruct FBonfireData

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_BonfireData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBonfireData::StaticStruct, Z_Construct_UScriptStruct_FBonfireData_Statics::NewStructOps, TEXT("BonfireData"), &Z_Registration_Info_UScriptStruct_BonfireData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBonfireData), 1025949070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_BonfireData_h_3743143653(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_BonfireData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_BonfireData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
