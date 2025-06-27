// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/CharacterSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelection() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCharacterSelection();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCharacterSelection_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UCharacterSelection Function SetCharacterClass1
struct Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelection, nullptr, "SetCharacterClass1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSelection::execSetCharacterClass1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterClass1();
	P_NATIVE_END;
}
// End Class UCharacterSelection Function SetCharacterClass1

// Begin Class UCharacterSelection Function SetCharacterClass2
struct Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelection, nullptr, "SetCharacterClass2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterSelection::execSetCharacterClass2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCharacterClass2();
	P_NATIVE_END;
}
// End Class UCharacterSelection Function SetCharacterClass2

// Begin Class UCharacterSelection
void UCharacterSelection::StaticRegisterNativesUCharacterSelection()
{
	UClass* Class = UCharacterSelection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCharacterClass1", &UCharacterSelection::execSetCharacterClass1 },
		{ "SetCharacterClass2", &UCharacterSelection::execSetCharacterClass2 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterSelection);
UClass* Z_Construct_UClass_UCharacterSelection_NoRegister()
{
	return UCharacterSelection::StaticClass();
}
struct Z_Construct_UClass_UCharacterSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CharacterSelection.h" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass1_MetaData[] = {
		{ "Category", "CharacterSelection" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterClass2_MetaData[] = {
		{ "Category", "CharacterSelection" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass1;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterClass2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSelection_SetCharacterClass1, "SetCharacterClass1" }, // 3145465944
		{ &Z_Construct_UFunction_UCharacterSelection_SetCharacterClass2, "SetCharacterClass2" }, // 276806469
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSelection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelection_Statics::NewProp_Button_1 = { "Button_1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelection, Button_1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_1_MetaData), NewProp_Button_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelection_Statics::NewProp_Button_2 = { "Button_2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelection, Button_2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_2_MetaData), NewProp_Button_2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterSelection_Statics::NewProp_CharacterClass1 = { "CharacterClass1", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelection, CharacterClass1), Z_Construct_UClass_UClass, Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass1_MetaData), NewProp_CharacterClass1_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterSelection_Statics::NewProp_CharacterClass2 = { "CharacterClass2", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterSelection, CharacterClass2), Z_Construct_UClass_UClass, Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterClass2_MetaData), NewProp_CharacterClass2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSelection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelection_Statics::NewProp_Button_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelection_Statics::NewProp_Button_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelection_Statics::NewProp_CharacterClass1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelection_Statics::NewProp_CharacterClass2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterSelection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSelection_Statics::ClassParams = {
	&UCharacterSelection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterSelection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelection_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterSelection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterSelection()
{
	if (!Z_Registration_Info_UClass_UCharacterSelection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSelection.OuterSingleton, Z_Construct_UClass_UCharacterSelection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterSelection.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UCharacterSelection>()
{
	return UCharacterSelection::StaticClass();
}
UCharacterSelection::UCharacterSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSelection);
UCharacterSelection::~UCharacterSelection() {}
// End Class UCharacterSelection

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSelection, UCharacterSelection::StaticClass, TEXT("UCharacterSelection"), &Z_Registration_Info_UClass_UCharacterSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSelection), 2118300074U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_3312427296(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
