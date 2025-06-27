// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/SaveMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveMenu() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_USaveMenu();
COURSE_ARPG_API UClass* Z_Construct_UClass_USaveMenu_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_USaveSlotWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class USaveMenu
void USaveMenu::StaticRegisterNativesUSaveMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveMenu);
UClass* Z_Construct_UClass_USaveMenu_NoRegister()
{
	return USaveMenu::StaticClass();
}
struct Z_Construct_UClass_USaveMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SaveMenu.h" },
		{ "ModuleRelativePath", "Public/UI/SaveMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_SaveSlots_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SaveMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotWidgetClass_MetaData[] = {
		{ "Category", "SaveMenu" },
		{ "ModuleRelativePath", "Public/UI/SaveMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox_SaveSlots;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveSlotWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveMenu_Statics::NewProp_VerticalBox_SaveSlots = { "VerticalBox_SaveSlots", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveMenu, VerticalBox_SaveSlots), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBox_SaveSlots_MetaData), NewProp_VerticalBox_SaveSlots_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveMenu_Statics::NewProp_SaveSlotWidgetClass = { "SaveSlotWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveMenu, SaveSlotWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USaveSlotWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotWidgetClass_MetaData), NewProp_SaveSlotWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveMenu_Statics::NewProp_VerticalBox_SaveSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveMenu_Statics::NewProp_SaveSlotWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveMenu_Statics::ClassParams = {
	&USaveMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USaveMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveMenu()
{
	if (!Z_Registration_Info_UClass_USaveMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveMenu.OuterSingleton, Z_Construct_UClass_USaveMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveMenu.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<USaveMenu>()
{
	return USaveMenu::StaticClass();
}
USaveMenu::USaveMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveMenu);
USaveMenu::~USaveMenu() {}
// End Class USaveMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveMenu, USaveMenu::StaticClass, TEXT("USaveMenu"), &Z_Registration_Info_UClass_USaveMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveMenu), 2082706600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveMenu_h_1959397857(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
