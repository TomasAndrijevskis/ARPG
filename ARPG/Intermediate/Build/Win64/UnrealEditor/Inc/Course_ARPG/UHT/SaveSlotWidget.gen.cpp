// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/SaveSlotWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSlotWidget() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_USaveSlotWidget();
COURSE_ARPG_API UClass* Z_Construct_UClass_USaveSlotWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class USaveSlotWidget Function OnButtonClicked
struct Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotWidget, nullptr, "OnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotWidget::execOnButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonClicked();
	P_NATIVE_END;
}
// End Class USaveSlotWidget Function OnButtonClicked

// Begin Class USaveSlotWidget Function SetSlotName
struct Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics
{
	struct SaveSlotWidget_eventSetSlotName_Parms
	{
		FString NewSlotName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewSlotName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::NewProp_NewSlotName = { "NewSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotWidget_eventSetSlotName_Parms, NewSlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::NewProp_NewSlotName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotWidget, nullptr, "SetSlotName", nullptr, nullptr, Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::SaveSlotWidget_eventSetSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::SaveSlotWidget_eventSetSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSlotWidget_SetSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotWidget_SetSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotWidget::execSetSlotName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewSlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlotName(Z_Param_NewSlotName);
	P_NATIVE_END;
}
// End Class USaveSlotWidget Function SetSlotName

// Begin Class USaveSlotWidget Function SetSlotStatus
struct Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics
{
	struct SaveSlotWidget_eventSetSlotStatus_Parms
	{
		FText NewText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveSlotWidget_eventSetSlotStatus_Parms, NewText), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::NewProp_NewText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSlotWidget, nullptr, "SetSlotStatus", nullptr, nullptr, Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::SaveSlotWidget_eventSetSlotStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::SaveSlotWidget_eventSetSlotStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USaveSlotWidget::execSetSlotStatus)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_NewText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlotStatus(Z_Param_NewText);
	P_NATIVE_END;
}
// End Class USaveSlotWidget Function SetSlotStatus

// Begin Class USaveSlotWidget
void USaveSlotWidget::StaticRegisterNativesUSaveSlotWidget()
{
	UClass* Class = USaveSlotWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnButtonClicked", &USaveSlotWidget::execOnButtonClicked },
		{ "SetSlotName", &USaveSlotWidget::execSetSlotName },
		{ "SetSlotStatus", &USaveSlotWidget::execSetSlotStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSlotWidget);
UClass* Z_Construct_UClass_USaveSlotWidget_NoRegister()
{
	return USaveSlotWidget::StaticClass();
}
struct Z_Construct_UClass_USaveSlotWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/SaveSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_MangageSaveSlot_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SaveSlotName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SaveSlotStatus_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SaveSlotWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_MangageSaveSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SaveSlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SaveSlotStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSlotWidget_OnButtonClicked, "OnButtonClicked" }, // 2691969567
		{ &Z_Construct_UFunction_USaveSlotWidget_SetSlotName, "SetSlotName" }, // 180797031
		{ &Z_Construct_UFunction_USaveSlotWidget_SetSlotStatus, "SetSlotStatus" }, // 4021623799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSlotWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotWidget_Statics::NewProp_Button_MangageSaveSlot = { "Button_MangageSaveSlot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotWidget, Button_MangageSaveSlot), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_MangageSaveSlot_MetaData), NewProp_Button_MangageSaveSlot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotWidget_Statics::NewProp_Text_SaveSlotName = { "Text_SaveSlotName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotWidget, Text_SaveSlotName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SaveSlotName_MetaData), NewProp_Text_SaveSlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveSlotWidget_Statics::NewProp_Text_SaveSlotStatus = { "Text_SaveSlotStatus", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveSlotWidget, Text_SaveSlotStatus), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SaveSlotStatus_MetaData), NewProp_Text_SaveSlotStatus_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveSlotWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotWidget_Statics::NewProp_Button_MangageSaveSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotWidget_Statics::NewProp_Text_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveSlotWidget_Statics::NewProp_Text_SaveSlotStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USaveSlotWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSlotWidget_Statics::ClassParams = {
	&USaveSlotWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USaveSlotWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSlotWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSlotWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSlotWidget()
{
	if (!Z_Registration_Info_UClass_USaveSlotWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSlotWidget.OuterSingleton, Z_Construct_UClass_USaveSlotWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSlotWidget.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<USaveSlotWidget>()
{
	return USaveSlotWidget::StaticClass();
}
USaveSlotWidget::USaveSlotWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSlotWidget);
USaveSlotWidget::~USaveSlotWidget() {}
// End Class USaveSlotWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveSlotWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSlotWidget, USaveSlotWidget::StaticClass, TEXT("USaveSlotWidget"), &Z_Registration_Info_UClass_USaveSlotWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSlotWidget), 2543697988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveSlotWidget_h_898578547(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveSlotWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_SaveSlotWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
