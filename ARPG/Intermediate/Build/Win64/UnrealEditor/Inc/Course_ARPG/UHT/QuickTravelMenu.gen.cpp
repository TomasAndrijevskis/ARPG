// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/QuickTravelMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickTravelMenu() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UQuickTravelButton_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UQuickTravelMenu();
COURSE_ARPG_API UClass* Z_Construct_UClass_UQuickTravelMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UQuickTravelMenu
void UQuickTravelMenu::StaticRegisterNativesUQuickTravelMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickTravelMenu);
UClass* Z_Construct_UClass_UQuickTravelMenu_NoRegister()
{
	return UQuickTravelMenu::StaticClass();
}
struct Z_Construct_UClass_UQuickTravelMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/QuickTravelMenu.h" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VB_QuickTravelContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Exit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/QuickTravelMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickTravelButtonClass_MetaData[] = {
		{ "Category", "QuickTravelMenu" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuickTravelButtonRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VB_QuickTravelContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Exit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_QuickTravelButtonClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuickTravelButtonRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickTravelMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_VB_QuickTravelContainer = { "VB_QuickTravelContainer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelMenu, VB_QuickTravelContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VB_QuickTravelContainer_MetaData), NewProp_VB_QuickTravelContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_Button_Exit = { "Button_Exit", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelMenu, Button_Exit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Exit_MetaData), NewProp_Button_Exit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelMenu, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_QuickTravelButtonClass = { "QuickTravelButtonClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelMenu, QuickTravelButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuickTravelButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickTravelButtonClass_MetaData), NewProp_QuickTravelButtonClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_QuickTravelButtonRef = { "QuickTravelButtonRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelMenu, QuickTravelButtonRef), Z_Construct_UClass_UQuickTravelButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuickTravelButtonRef_MetaData), NewProp_QuickTravelButtonRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickTravelMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_VB_QuickTravelContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_Button_Exit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_QuickTravelButtonClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelMenu_Statics::NewProp_QuickTravelButtonRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuickTravelMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickTravelMenu_Statics::ClassParams = {
	&UQuickTravelMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuickTravelMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuickTravelMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuickTravelMenu()
{
	if (!Z_Registration_Info_UClass_UQuickTravelMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickTravelMenu.OuterSingleton, Z_Construct_UClass_UQuickTravelMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuickTravelMenu.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UQuickTravelMenu>()
{
	return UQuickTravelMenu::StaticClass();
}
UQuickTravelMenu::UQuickTravelMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickTravelMenu);
UQuickTravelMenu::~UQuickTravelMenu() {}
// End Class UQuickTravelMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuickTravelMenu, UQuickTravelMenu::StaticClass, TEXT("UQuickTravelMenu"), &Z_Registration_Info_UClass_UQuickTravelMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickTravelMenu), 3667006383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelMenu_h_478172294(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
