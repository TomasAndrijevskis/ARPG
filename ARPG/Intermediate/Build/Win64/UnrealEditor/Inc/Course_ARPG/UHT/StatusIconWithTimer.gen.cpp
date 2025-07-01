// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/StatusIconWithTimer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusIconWithTimer() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusIconWithTimer();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusIconWithTimer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UStatusIconWithTimer Function InitializeWidget
struct Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics
{
	struct StatusIconWithTimer_eventInitializeWidget_Parms
	{
		float Duration;
		UTexture2D* Image;
		UAbilityComponent_Base* NewAbilityCompRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithTimer_eventInitializeWidget_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithTimer_eventInitializeWidget_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::NewProp_NewAbilityCompRef = { "NewAbilityCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithTimer_eventInitializeWidget_Parms, NewAbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAbilityCompRef_MetaData), NewProp_NewAbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::NewProp_NewAbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithTimer, nullptr, "InitializeWidget", nullptr, nullptr, Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::StatusIconWithTimer_eventInitializeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::StatusIconWithTimer_eventInitializeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithTimer::execInitializeWidget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_NewAbilityCompRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWidget(Z_Param_Duration,Z_Param_Image,Z_Param_NewAbilityCompRef);
	P_NATIVE_END;
}
// End Class UStatusIconWithTimer Function InitializeWidget

// Begin Class UStatusIconWithTimer Function RemoveWidget
struct Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithTimer, nullptr, "RemoveWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithTimer::execRemoveWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWidget();
	P_NATIVE_END;
}
// End Class UStatusIconWithTimer Function RemoveWidget

// Begin Class UStatusIconWithTimer Function SetCountdownTime
struct Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics
{
	struct StatusIconWithTimer_eventSetCountdownTime_Parms
	{
		float TimeLeft;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithTimer_eventSetCountdownTime_Parms, TimeLeft), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::NewProp_TimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithTimer, nullptr, "SetCountdownTime", nullptr, nullptr, Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::StatusIconWithTimer_eventSetCountdownTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::StatusIconWithTimer_eventSetCountdownTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithTimer::execSetCountdownTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLeft);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCountdownTime(Z_Param_TimeLeft);
	P_NATIVE_END;
}
// End Class UStatusIconWithTimer Function SetCountdownTime

// Begin Class UStatusIconWithTimer Function SetStatusIcon
struct Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics
{
	struct StatusIconWithTimer_eventSetStatusIcon_Parms
	{
		UTexture2D* Icon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithTimer_eventSetStatusIcon_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithTimer, nullptr, "SetStatusIcon", nullptr, nullptr, Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::StatusIconWithTimer_eventSetStatusIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::StatusIconWithTimer_eventSetStatusIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithTimer::execSetStatusIcon)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatusIcon(Z_Param_Icon);
	P_NATIVE_END;
}
// End Class UStatusIconWithTimer Function SetStatusIcon

// Begin Class UStatusIconWithTimer
void UStatusIconWithTimer::StaticRegisterNativesUStatusIconWithTimer()
{
	UClass* Class = UStatusIconWithTimer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeWidget", &UStatusIconWithTimer::execInitializeWidget },
		{ "RemoveWidget", &UStatusIconWithTimer::execRemoveWidget },
		{ "SetCountdownTime", &UStatusIconWithTimer::execSetCountdownTime },
		{ "SetStatusIcon", &UStatusIconWithTimer::execSetStatusIcon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusIconWithTimer);
UClass* Z_Construct_UClass_UStatusIconWithTimer_NoRegister()
{
	return UStatusIconWithTimer::StaticClass();
}
struct Z_Construct_UClass_UStatusIconWithTimer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/StatusIconWithTimer.h" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Countdown_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_StatusIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithTimer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Countdown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_StatusIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusIconWithTimer_InitializeWidget, "InitializeWidget" }, // 1903640484
		{ &Z_Construct_UFunction_UStatusIconWithTimer_RemoveWidget, "RemoveWidget" }, // 3235133936
		{ &Z_Construct_UFunction_UStatusIconWithTimer_SetCountdownTime, "SetCountdownTime" }, // 2099435167
		{ &Z_Construct_UFunction_UStatusIconWithTimer_SetStatusIcon, "SetStatusIcon" }, // 2629506964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusIconWithTimer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusIconWithTimer_Statics::NewProp_Text_Countdown = { "Text_Countdown", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusIconWithTimer, Text_Countdown), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Countdown_MetaData), NewProp_Text_Countdown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusIconWithTimer_Statics::NewProp_Image_StatusIcon = { "Image_StatusIcon", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusIconWithTimer, Image_StatusIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_StatusIcon_MetaData), NewProp_Image_StatusIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusIconWithTimer_Statics::NewProp_AbilityCompRef = { "AbilityCompRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusIconWithTimer, AbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCompRef_MetaData), NewProp_AbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusIconWithTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusIconWithTimer_Statics::NewProp_Text_Countdown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusIconWithTimer_Statics::NewProp_Image_StatusIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusIconWithTimer_Statics::NewProp_AbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithTimer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusIconWithTimer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithTimer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusIconWithTimer_Statics::ClassParams = {
	&UStatusIconWithTimer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatusIconWithTimer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithTimer_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithTimer_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusIconWithTimer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusIconWithTimer()
{
	if (!Z_Registration_Info_UClass_UStatusIconWithTimer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusIconWithTimer.OuterSingleton, Z_Construct_UClass_UStatusIconWithTimer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusIconWithTimer.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UStatusIconWithTimer>()
{
	return UStatusIconWithTimer::StaticClass();
}
UStatusIconWithTimer::UStatusIconWithTimer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusIconWithTimer);
UStatusIconWithTimer::~UStatusIconWithTimer() {}
// End Class UStatusIconWithTimer

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusIconWithTimer, UStatusIconWithTimer::StaticClass, TEXT("UStatusIconWithTimer"), &Z_Registration_Info_UClass_UStatusIconWithTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusIconWithTimer), 408274443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_660758701(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
