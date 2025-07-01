// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/StatsScreenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsScreenWidget() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsScreenWidget();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsScreenWidget_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EStats();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UStatsScreenWidget Function ImproveStat
struct Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics
{
	struct StatsScreenWidget_eventImproveStat_Parms
	{
		float CurrentValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsScreenWidget_eventImproveStat_Parms, CurrentValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsScreenWidget_eventImproveStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::NewProp_CurrentValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsScreenWidget, nullptr, "ImproveStat", nullptr, nullptr, Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::StatsScreenWidget_eventImproveStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::StatsScreenWidget_eventImproveStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsScreenWidget_ImproveStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsScreenWidget_ImproveStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsScreenWidget::execImproveStat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ImproveStat(Z_Param_CurrentValue);
	P_NATIVE_END;
}
// End Class UStatsScreenWidget Function ImproveStat

// Begin Class UStatsScreenWidget Function OnClickedImproveStat
struct Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsScreenWidget, nullptr, "OnClickedImproveStat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsScreenWidget::execOnClickedImproveStat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClickedImproveStat();
	P_NATIVE_END;
}
// End Class UStatsScreenWidget Function OnClickedImproveStat

// Begin Class UStatsScreenWidget Function SetStatsVariables
struct Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics
{
	struct StatsScreenWidget_eventSetStatsVariables_Parms
	{
		TEnumAsByte<EStats> StatToImprove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StatToImprove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::NewProp_StatToImprove = { "StatToImprove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsScreenWidget_eventSetStatsVariables_Parms, StatToImprove), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::NewProp_StatToImprove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsScreenWidget, nullptr, "SetStatsVariables", nullptr, nullptr, Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::StatsScreenWidget_eventSetStatsVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::StatsScreenWidget_eventSetStatsVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsScreenWidget::execSetStatsVariables)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_StatToImprove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatsVariables(EStats(Z_Param_StatToImprove));
	P_NATIVE_END;
}
// End Class UStatsScreenWidget Function SetStatsVariables

// Begin Class UStatsScreenWidget Function UpdateText
struct Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics
{
	struct StatsScreenWidget_eventUpdateText_Parms
	{
		FString Name;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsScreenWidget_eventUpdateText_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsScreenWidget_eventUpdateText_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsScreenWidget, nullptr, "UpdateText", nullptr, nullptr, Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::StatsScreenWidget_eventUpdateText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::StatsScreenWidget_eventUpdateText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsScreenWidget_UpdateText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsScreenWidget_UpdateText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatsScreenWidget::execUpdateText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateText(Z_Param_Name,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UStatsScreenWidget Function UpdateText

// Begin Class UStatsScreenWidget
void UStatsScreenWidget::StaticRegisterNativesUStatsScreenWidget()
{
	UClass* Class = UStatsScreenWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ImproveStat", &UStatsScreenWidget::execImproveStat },
		{ "OnClickedImproveStat", &UStatsScreenWidget::execOnClickedImproveStat },
		{ "SetStatsVariables", &UStatsScreenWidget::execSetStatsVariables },
		{ "UpdateText", &UStatsScreenWidget::execUpdateText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsScreenWidget);
UClass* Z_Construct_UClass_UStatsScreenWidget_NoRegister()
{
	return UStatsScreenWidget::StaticClass();
}
struct Z_Construct_UClass_UStatsScreenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/StatsScreenWidget.h" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatValue_MetaData[] = {
		{ "Category", "StatsScreenWidget" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[] = {
		{ "Category", "StatsScreenWidget" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[] = {
		{ "Category", "StatsScreenWidget" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StatValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StatName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_ImproveStat_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/StatsScreenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StatValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StatValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StatName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_ImproveStat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsScreenWidget_ImproveStat, "ImproveStat" }, // 3335996652
		{ &Z_Construct_UFunction_UStatsScreenWidget_OnClickedImproveStat, "OnClickedImproveStat" }, // 425721780
		{ &Z_Construct_UFunction_UStatsScreenWidget_SetStatsVariables, "SetStatsVariables" }, // 2997399129
		{ &Z_Construct_UFunction_UStatsScreenWidget_UpdateText, "UpdateText" }, // 3794125817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsScreenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsScreenWidget, StatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatValue_MetaData), NewProp_StatValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsScreenWidget, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stat_MetaData), NewProp_Stat_MetaData) }; // 1779151500
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsScreenWidget, StatName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatName_MetaData), NewProp_StatName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Text_StatValue = { "Text_StatValue", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsScreenWidget, Text_StatValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StatValue_MetaData), NewProp_Text_StatValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Text_StatName = { "Text_StatName", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsScreenWidget, Text_StatName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StatName_MetaData), NewProp_Text_StatName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Button_ImproveStat = { "Button_ImproveStat", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsScreenWidget, Button_ImproveStat), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_ImproveStat_MetaData), NewProp_Button_ImproveStat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsScreenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_StatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Text_StatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Text_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsScreenWidget_Statics::NewProp_Button_ImproveStat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsScreenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsScreenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsScreenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsScreenWidget_Statics::ClassParams = {
	&UStatsScreenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatsScreenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsScreenWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsScreenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsScreenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsScreenWidget()
{
	if (!Z_Registration_Info_UClass_UStatsScreenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsScreenWidget.OuterSingleton, Z_Construct_UClass_UStatsScreenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsScreenWidget.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UStatsScreenWidget>()
{
	return UStatsScreenWidget::StaticClass();
}
UStatsScreenWidget::UStatsScreenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsScreenWidget);
UStatsScreenWidget::~UStatsScreenWidget() {}
// End Class UStatsScreenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatsScreenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsScreenWidget, UStatsScreenWidget::StaticClass, TEXT("UStatsScreenWidget"), &Z_Registration_Info_UClass_UStatsScreenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsScreenWidget), 3597348847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatsScreenWidget_h_980382095(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatsScreenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatsScreenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
