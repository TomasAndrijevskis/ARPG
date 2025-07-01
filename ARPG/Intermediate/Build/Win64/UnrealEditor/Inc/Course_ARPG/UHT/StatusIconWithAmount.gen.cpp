// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/StatusIconWithAmount.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusIconWithAmount() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusIconWithAmount();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusIconWithAmount_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UStatusIconWithAmount Function InitializeWidget
struct Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics
{
	struct StatusIconWithAmount_eventInitializeWidget_Parms
	{
		float Amount;
		UTexture2D* Image;
		UStatsComponent* NewStatsCompRef;
		FString NewKey;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewStatsCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStatsCompRef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithAmount_eventInitializeWidget_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithAmount_eventInitializeWidget_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_NewStatsCompRef = { "NewStatsCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithAmount_eventInitializeWidget_Parms, NewStatsCompRef), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewStatsCompRef_MetaData), NewProp_NewStatsCompRef_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithAmount_eventInitializeWidget_Parms, NewKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_NewStatsCompRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::NewProp_NewKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithAmount, nullptr, "InitializeWidget", nullptr, nullptr, Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::StatusIconWithAmount_eventInitializeWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::StatusIconWithAmount_eventInitializeWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithAmount::execInitializeWidget)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_OBJECT(UStatsComponent,Z_Param_NewStatsCompRef);
	P_GET_PROPERTY(FStrProperty,Z_Param_NewKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWidget(Z_Param_Amount,Z_Param_Image,Z_Param_NewStatsCompRef,Z_Param_NewKey);
	P_NATIVE_END;
}
// End Class UStatusIconWithAmount Function InitializeWidget

// Begin Class UStatusIconWithAmount Function RemoveWidget
struct Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithAmount, nullptr, "RemoveWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithAmount::execRemoveWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveWidget();
	P_NATIVE_END;
}
// End Class UStatusIconWithAmount Function RemoveWidget

// Begin Class UStatusIconWithAmount Function SetAmount
struct Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics
{
	struct StatusIconWithAmount_eventSetAmount_Parms
	{
		float AmountLeft;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AmountLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::NewProp_AmountLeft = { "AmountLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithAmount_eventSetAmount_Parms, AmountLeft), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::NewProp_AmountLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithAmount, nullptr, "SetAmount", nullptr, nullptr, Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::StatusIconWithAmount_eventSetAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::StatusIconWithAmount_eventSetAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusIconWithAmount_SetAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithAmount_SetAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithAmount::execSetAmount)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AmountLeft);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAmount(Z_Param_AmountLeft);
	P_NATIVE_END;
}
// End Class UStatusIconWithAmount Function SetAmount

// Begin Class UStatusIconWithAmount Function SetStatusIcon
struct Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics
{
	struct StatusIconWithAmount_eventSetStatusIcon_Parms
	{
		UTexture2D* Icon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusIconWithAmount_eventSetStatusIcon_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusIconWithAmount, nullptr, "SetStatusIcon", nullptr, nullptr, Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::StatusIconWithAmount_eventSetStatusIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::StatusIconWithAmount_eventSetStatusIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusIconWithAmount::execSetStatusIcon)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatusIcon(Z_Param_Icon);
	P_NATIVE_END;
}
// End Class UStatusIconWithAmount Function SetStatusIcon

// Begin Class UStatusIconWithAmount
void UStatusIconWithAmount::StaticRegisterNativesUStatusIconWithAmount()
{
	UClass* Class = UStatusIconWithAmount::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeWidget", &UStatusIconWithAmount::execInitializeWidget },
		{ "RemoveWidget", &UStatusIconWithAmount::execRemoveWidget },
		{ "SetAmount", &UStatusIconWithAmount::execSetAmount },
		{ "SetStatusIcon", &UStatusIconWithAmount::execSetStatusIcon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusIconWithAmount);
UClass* Z_Construct_UClass_UStatusIconWithAmount_NoRegister()
{
	return UStatusIconWithAmount::StaticClass();
}
struct Z_Construct_UClass_UStatusIconWithAmount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/StatusIconWithAmount.h" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Amount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_StatusIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsCompRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatusIconWithAmount.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Amount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_StatusIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusIconWithAmount_InitializeWidget, "InitializeWidget" }, // 1166988344
		{ &Z_Construct_UFunction_UStatusIconWithAmount_RemoveWidget, "RemoveWidget" }, // 232914918
		{ &Z_Construct_UFunction_UStatusIconWithAmount_SetAmount, "SetAmount" }, // 513660575
		{ &Z_Construct_UFunction_UStatusIconWithAmount_SetStatusIcon, "SetStatusIcon" }, // 786783590
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusIconWithAmount>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusIconWithAmount_Statics::NewProp_Text_Amount = { "Text_Amount", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusIconWithAmount, Text_Amount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Amount_MetaData), NewProp_Text_Amount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusIconWithAmount_Statics::NewProp_Image_StatusIcon = { "Image_StatusIcon", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusIconWithAmount, Image_StatusIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_StatusIcon_MetaData), NewProp_Image_StatusIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusIconWithAmount_Statics::NewProp_StatsCompRef = { "StatsCompRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusIconWithAmount, StatsCompRef), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsCompRef_MetaData), NewProp_StatsCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusIconWithAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusIconWithAmount_Statics::NewProp_Text_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusIconWithAmount_Statics::NewProp_Image_StatusIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusIconWithAmount_Statics::NewProp_StatsCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithAmount_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusIconWithAmount_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithAmount_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusIconWithAmount_Statics::ClassParams = {
	&UStatusIconWithAmount::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatusIconWithAmount_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithAmount_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusIconWithAmount_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusIconWithAmount_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusIconWithAmount()
{
	if (!Z_Registration_Info_UClass_UStatusIconWithAmount.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusIconWithAmount.OuterSingleton, Z_Construct_UClass_UStatusIconWithAmount_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusIconWithAmount.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UStatusIconWithAmount>()
{
	return UStatusIconWithAmount::StaticClass();
}
UStatusIconWithAmount::UStatusIconWithAmount(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusIconWithAmount);
UStatusIconWithAmount::~UStatusIconWithAmount() {}
// End Class UStatusIconWithAmount

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusIconWithAmount, UStatusIconWithAmount::StaticClass, TEXT("UStatusIconWithAmount"), &Z_Registration_Info_UClass_UStatusIconWithAmount, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusIconWithAmount), 2631909076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_370385196(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
