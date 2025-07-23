// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/QuickTravelButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickTravelButton() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerTeleport_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UQuickTravelButton();
COURSE_ARPG_API UClass* Z_Construct_UClass_UQuickTravelButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UQuickTravelButton Function EnablePlayerInput
struct Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickTravelButton, nullptr, "EnablePlayerInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickTravelButton::execEnablePlayerInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnablePlayerInput();
	P_NATIVE_END;
}
// End Class UQuickTravelButton Function EnablePlayerInput

// Begin Class UQuickTravelButton Function ShowAnimBeforeTeleport
struct Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickTravelButton, nullptr, "ShowAnimBeforeTeleport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickTravelButton::execShowAnimBeforeTeleport)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAnimBeforeTeleport();
	P_NATIVE_END;
}
// End Class UQuickTravelButton Function ShowAnimBeforeTeleport

// Begin Class UQuickTravelButton Function TeleportPlayer
struct Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickTravelButton, nullptr, "TeleportPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickTravelButton::execTeleportPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TeleportPlayer();
	P_NATIVE_END;
}
// End Class UQuickTravelButton Function TeleportPlayer

// Begin Class UQuickTravelButton
void UQuickTravelButton::StaticRegisterNativesUQuickTravelButton()
{
	UClass* Class = UQuickTravelButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnablePlayerInput", &UQuickTravelButton::execEnablePlayerInput },
		{ "ShowAnimBeforeTeleport", &UQuickTravelButton::execShowAnimBeforeTeleport },
		{ "TeleportPlayer", &UQuickTravelButton::execTeleportPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickTravelButton);
UClass* Z_Construct_UClass_UQuickTravelButton_NoRegister()
{
	return UQuickTravelButton::StaticClass();
}
struct Z_Construct_UClass_UQuickTravelButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/QuickTravelButton.h" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_QuickTravel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_QuickTravelLocation_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTeleportRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTeleportClass_MetaData[] = {
		{ "Category", "QuickTravelButton" },
		{ "ModuleRelativePath", "Public/UI/QuickTravelButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_QuickTravel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_QuickTravelLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerTeleportRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerTeleportClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickTravelButton_EnablePlayerInput, "EnablePlayerInput" }, // 2294918564
		{ &Z_Construct_UFunction_UQuickTravelButton_ShowAnimBeforeTeleport, "ShowAnimBeforeTeleport" }, // 3313539069
		{ &Z_Construct_UFunction_UQuickTravelButton_TeleportPlayer, "TeleportPlayer" }, // 1930206717
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickTravelButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_Button_QuickTravel = { "Button_QuickTravel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelButton, Button_QuickTravel), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_QuickTravel_MetaData), NewProp_Button_QuickTravel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_Text_QuickTravelLocation = { "Text_QuickTravelLocation", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelButton, Text_QuickTravelLocation), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_QuickTravelLocation_MetaData), NewProp_Text_QuickTravelLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelButton, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelButton, PlayerController), Z_Construct_UClass_AARPG_PlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerTeleportRef = { "PlayerTeleportRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelButton, PlayerTeleportRef), Z_Construct_UClass_UPlayerTeleport_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTeleportRef_MetaData), NewProp_PlayerTeleportRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerTeleportClass = { "PlayerTeleportClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickTravelButton, PlayerTeleportClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerTeleport_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerTeleportClass_MetaData), NewProp_PlayerTeleportClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickTravelButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_Button_QuickTravel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_Text_QuickTravelLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerTeleportRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickTravelButton_Statics::NewProp_PlayerTeleportClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuickTravelButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickTravelButton_Statics::ClassParams = {
	&UQuickTravelButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UQuickTravelButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelButton_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickTravelButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuickTravelButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuickTravelButton()
{
	if (!Z_Registration_Info_UClass_UQuickTravelButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickTravelButton.OuterSingleton, Z_Construct_UClass_UQuickTravelButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuickTravelButton.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UQuickTravelButton>()
{
	return UQuickTravelButton::StaticClass();
}
UQuickTravelButton::UQuickTravelButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickTravelButton);
UQuickTravelButton::~UQuickTravelButton() {}
// End Class UQuickTravelButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuickTravelButton, UQuickTravelButton::StaticClass, TEXT("UQuickTravelButton"), &Z_Registration_Info_UClass_UQuickTravelButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickTravelButton), 3094713234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_3886443003(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
