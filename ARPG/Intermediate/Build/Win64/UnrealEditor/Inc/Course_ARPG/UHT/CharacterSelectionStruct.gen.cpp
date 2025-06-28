// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/Data/CharacterSelectionStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelectionStruct() {}

// Begin Cross Module References
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSelectionStruct();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FCharacterSelectionStruct
static_assert(std::is_polymorphic<FCharacterSelectionStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCharacterSelectionStruct cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterSelectionStruct;
class UScriptStruct* FCharacterSelectionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterSelectionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterSelectionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSelectionStruct, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("CharacterSelectionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterSelectionStruct.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FCharacterSelectionStruct>()
{
	return FCharacterSelectionStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Characters/Data/CharacterSelectionStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCharacterClass_MetaData[] = {
		{ "Category", "CharacterSelectionStruct" },
		{ "ModuleRelativePath", "Public/Characters/Data/CharacterSelectionStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "CharacterSelectionStruct" },
		{ "ModuleRelativePath", "Public/Characters/Data/CharacterSelectionStruct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[] = {
		{ "Category", "CharacterSelectionStruct" },
		{ "ModuleRelativePath", "Public/Characters/Data/CharacterSelectionStruct.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SelectedCharacterClass;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSelectionStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewProp_SelectedCharacterClass = { "SelectedCharacterClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSelectionStruct, SelectedCharacterClass), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCharacterClass_MetaData), NewProp_SelectedCharacterClass_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSelectionStruct, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCharacterSelectionStruct, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_MetaData), NewProp_Image_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewProp_SelectedCharacterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewProp_Image,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CharacterSelectionStruct",
	Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::PropPointers),
	sizeof(FCharacterSelectionStruct),
	alignof(FCharacterSelectionStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCharacterSelectionStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterSelectionStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterSelectionStruct.InnerSingleton, Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CharacterSelectionStruct.InnerSingleton;
}
// End ScriptStruct FCharacterSelectionStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_CharacterSelectionStruct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCharacterSelectionStruct::StaticStruct, Z_Construct_UScriptStruct_FCharacterSelectionStruct_Statics::NewStructOps, TEXT("CharacterSelectionStruct"), &Z_Registration_Info_UScriptStruct_CharacterSelectionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterSelectionStruct), 598714439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_CharacterSelectionStruct_h_2175704787(TEXT("/Script/Course_ARPG"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_CharacterSelectionStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_Data_CharacterSelectionStruct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
