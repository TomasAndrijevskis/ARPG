// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/FTraceSockets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTraceSockets() {}

// Begin Cross Module References
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FTraceSockets();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FTraceSockets
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TraceSockets;
class UScriptStruct* FTraceSockets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TraceSockets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TraceSockets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTraceSockets, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("TraceSockets"));
	}
	return Z_Registration_Info_UScriptStruct_TraceSockets.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FTraceSockets>()
{
	return FTraceSockets::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTraceSockets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSocket_MetaData[] = {
		{ "Category", "TraceSockets" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSocket_MetaData[] = {
		{ "Category", "TraceSockets" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketRotation_MetaData[] = {
		{ "Category", "TraceSockets" },
		{ "ModuleRelativePath", "Public/Combat/FTraceSockets.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndSocket;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTraceSockets>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_StartSocket = { "StartSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceSockets, StartSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSocket_MetaData), NewProp_StartSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_EndSocket = { "EndSocket", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceSockets, EndSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSocket_MetaData), NewProp_EndSocket_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_SocketRotation = { "SocketRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTraceSockets, SocketRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketRotation_MetaData), NewProp_SocketRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_StartSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_EndSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTraceSockets_Statics::NewProp_SocketRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTraceSockets_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	&NewStructOps,
	"TraceSockets",
	Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceSockets_Statics::PropPointers),
	sizeof(FTraceSockets),
	alignof(FTraceSockets),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTraceSockets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTraceSockets_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTraceSockets()
{
	if (!Z_Registration_Info_UScriptStruct_TraceSockets.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TraceSockets.InnerSingleton, Z_Construct_UScriptStruct_FTraceSockets_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TraceSockets.InnerSingleton;
}
// End ScriptStruct FTraceSockets

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_FTraceSockets_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTraceSockets::StaticStruct, Z_Construct_UScriptStruct_FTraceSockets_Statics::NewStructOps, TEXT("TraceSockets"), &Z_Registration_Info_UScriptStruct_TraceSockets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTraceSockets), 486663129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_FTraceSockets_h_292191796(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_FTraceSockets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_FTraceSockets_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
