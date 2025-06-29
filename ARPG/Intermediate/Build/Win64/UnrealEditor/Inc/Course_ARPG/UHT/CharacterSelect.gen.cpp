// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/CharacterSelect.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelect() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UCharacterSelect();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCharacterSelect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UCharacterSelect Function SetCharacterClass
struct Z_Construct_UFunction_UCharacterSelect_SetCharacterClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CharacterSelect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelect_SetCharacterClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelect, nullptr, "SetCharacterClass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelect_SetCharacterClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSelect_SetCharacterClass_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSelect_SetCharacterClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelect_SetCharacterClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSelect::execSetCharacterClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterClass();
	P_NATIVE_END;
}
// End Class UCharacterSelect Function SetCharacterClass

// Begin Class UCharacterSelect
void UCharacterSelect::StaticRegisterNativesUCharacterSelect()
{
	UClass* Class = UCharacterSelect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCharacterClass", &UCharacterSelect::execSetCharacterClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterSelect);
UClass* Z_Construct_UClass_UCharacterSelect_NoRegister()
{
	return UCharacterSelect::StaticClass();
}
struct Z_Construct_UClass_UCharacterSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CharacterSelect.h" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharactersDataTable_MetaData[] = {
		{ "Category", "CharacterSelect" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_SelectCharacter_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CharacterName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[] = {
		{ "Category", "CharacterSelect" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharactersDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_SelectCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CharacterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSelect_SetCharacterClass, "SetCharacterClass" }, // 474858917
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSelect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelect_Statics::NewProp_CharactersDataTable = { "CharactersDataTable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelect, CharactersDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharactersDataTable_MetaData), NewProp_CharactersDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelect_Statics::NewProp_Button_SelectCharacter = { "Button_SelectCharacter", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelect, Button_SelectCharacter), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_SelectCharacter_MetaData), NewProp_Button_SelectCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelect_Statics::NewProp_Text_CharacterName = { "Text_CharacterName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelect, Text_CharacterName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CharacterName_MetaData), NewProp_Text_CharacterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterSelect_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelect, CharacterData), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterData_MetaData), NewProp_CharacterData_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelect_Statics::NewProp_CharactersDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelect_Statics::NewProp_Button_SelectCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelect_Statics::NewProp_Text_CharacterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelect_Statics::NewProp_CharacterData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterSelect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSelect_Statics::ClassParams = {
	&UCharacterSelect::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterSelect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelect_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelect_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterSelect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterSelect()
{
	if (!Z_Registration_Info_UClass_UCharacterSelect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSelect.OuterSingleton, Z_Construct_UClass_UCharacterSelect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterSelect.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UCharacterSelect>()
{
	return UCharacterSelect::StaticClass();
}
UCharacterSelect::UCharacterSelect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSelect);
UCharacterSelect::~UCharacterSelect() {}
// End Class UCharacterSelect

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSelect, UCharacterSelect::StaticClass, TEXT("UCharacterSelect"), &Z_Registration_Info_UClass_UCharacterSelect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSelect), 1257481476U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelect_h_484108180(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
