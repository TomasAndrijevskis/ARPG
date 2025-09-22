// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/BonfireMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonfireMenu() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireMenu();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBonfireMenu
void UBonfireMenu::StaticRegisterNativesUBonfireMenu()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonfireMenu);
UClass* Z_Construct_UClass_UBonfireMenu_NoRegister()
{
	return UBonfireMenu::StaticClass();
}
struct Z_Construct_UClass_UBonfireMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BonfireMenu.h" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_QuickTravelMenu_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//UButton* Button_SaveAll;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nUButton* Button_SaveAll;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_StatsScreen_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_AbilitiesScreen_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_QuitBonfire_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(meta = (BindWidget))\n//UButton* Button_MainMenu;\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(meta = (BindWidget))\nUButton* Button_MainMenu;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SaveAll_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_QuickTravelMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StatsScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_AbilitiesScreen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MainMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_QuitBonfire_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BonfireMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_QuickTravelMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_StatsScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_AbilitiesScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_QuitBonfire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SaveAll;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_QuickTravelMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StatsScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_AbilitiesScreen;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_MainMenu;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_QuitBonfire;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonfireMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_QuickTravelMenu = { "Button_QuickTravelMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Button_QuickTravelMenu), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_QuickTravelMenu_MetaData), NewProp_Button_QuickTravelMenu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_StatsScreen = { "Button_StatsScreen", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Button_StatsScreen), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_StatsScreen_MetaData), NewProp_Button_StatsScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_AbilitiesScreen = { "Button_AbilitiesScreen", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Button_AbilitiesScreen), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_AbilitiesScreen_MetaData), NewProp_Button_AbilitiesScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_QuitBonfire = { "Button_QuitBonfire", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Button_QuitBonfire), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_QuitBonfire_MetaData), NewProp_Button_QuitBonfire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_SaveAll = { "Text_SaveAll", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Text_SaveAll), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SaveAll_MetaData), NewProp_Text_SaveAll_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_QuickTravelMenu = { "Text_QuickTravelMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Text_QuickTravelMenu), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_QuickTravelMenu_MetaData), NewProp_Text_QuickTravelMenu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_StatsScreen = { "Text_StatsScreen", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Text_StatsScreen), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StatsScreen_MetaData), NewProp_Text_StatsScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_AbilitiesScreen = { "Text_AbilitiesScreen", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Text_AbilitiesScreen), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_AbilitiesScreen_MetaData), NewProp_Text_AbilitiesScreen_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_MainMenu = { "Text_MainMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Text_MainMenu), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MainMenu_MetaData), NewProp_Text_MainMenu_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_QuitBonfire = { "Text_QuitBonfire", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, Text_QuitBonfire), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_QuitBonfire_MetaData), NewProp_Text_QuitBonfire_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireMenu_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireMenu, PlayerController), Z_Construct_UClass_AARPG_PlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonfireMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_QuickTravelMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_StatsScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_AbilitiesScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Button_QuitBonfire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_SaveAll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_QuickTravelMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_StatsScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_AbilitiesScreen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_MainMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_Text_QuitBonfire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireMenu_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBonfireMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonfireMenu_Statics::ClassParams = {
	&UBonfireMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBonfireMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UBonfireMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBonfireMenu()
{
	if (!Z_Registration_Info_UClass_UBonfireMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonfireMenu.OuterSingleton, Z_Construct_UClass_UBonfireMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBonfireMenu.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBonfireMenu>()
{
	return UBonfireMenu::StaticClass();
}
UBonfireMenu::UBonfireMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBonfireMenu);
UBonfireMenu::~UBonfireMenu() {}
// End Class UBonfireMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBonfireMenu, UBonfireMenu::StaticClass, TEXT("UBonfireMenu"), &Z_Registration_Info_UClass_UBonfireMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonfireMenu), 107605174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireMenu_h_4000364519(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
