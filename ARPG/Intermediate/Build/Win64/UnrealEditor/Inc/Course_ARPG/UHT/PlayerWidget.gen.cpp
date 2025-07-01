// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/PlayerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityFooter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityUpgradeScreen_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UInfoHeader_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerWidget();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsScreenWidget_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusIconWithAmount_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusIconWithTimer_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EStats();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UPlayerWidget Function CreateAbilityFooter
struct Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics
{
	struct PlayerWidget_eventCreateAbilityFooter_Parms
	{
		UTexture2D* Image;
		FString ActionKey;
		UAbilityComponent_Base* AbilityCompRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateAbilityFooter_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateAbilityFooter_Parms, ActionKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::NewProp_AbilityCompRef = { "AbilityCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateAbilityFooter_Parms, AbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCompRef_MetaData), NewProp_AbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::NewProp_ActionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::NewProp_AbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "CreateAbilityFooter", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::PlayerWidget_eventCreateAbilityFooter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::PlayerWidget_eventCreateAbilityFooter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execCreateAbilityFooter)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionKey);
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_AbilityCompRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAbilityFooter(Z_Param_Image,Z_Param_ActionKey,Z_Param_AbilityCompRef);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function CreateAbilityFooter

// Begin Class UPlayerWidget Function CreateAbilityUpgradeScreen
struct Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics
{
	struct PlayerWidget_eventCreateAbilityUpgradeScreen_Parms
	{
		UAbilityComponent_Base* AbilityCompRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void CreateUpgradeInfoHeader(int Value);\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void CreateUpgradeInfoHeader(int Value);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::NewProp_AbilityCompRef = { "AbilityCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateAbilityUpgradeScreen_Parms, AbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCompRef_MetaData), NewProp_AbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::NewProp_AbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "CreateAbilityUpgradeScreen", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::PlayerWidget_eventCreateAbilityUpgradeScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::PlayerWidget_eventCreateAbilityUpgradeScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execCreateAbilityUpgradeScreen)
{
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_AbilityCompRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAbilityUpgradeScreen(Z_Param_AbilityCompRef);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function CreateAbilityUpgradeScreen

// Begin Class UPlayerWidget Function CreateStatsScreen
struct Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics
{
	struct PlayerWidget_eventCreateStatsScreen_Parms
	{
		TEnumAsByte<EStats> Stat;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//void CreateStatusIconWithTimer(TSubclassOf<UUserWidget> WidgetClass, float Duration, UTexture2D* Icon, UAbilityComponent_Base* AbilityRef);\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "void CreateStatusIconWithTimer(TSubclassOf<UUserWidget> WidgetClass, float Duration, UTexture2D* Icon, UAbilityComponent_Base* AbilityRef);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatsScreen_Parms, Stat), Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::NewProp_Stat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "CreateStatsScreen", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::PlayerWidget_eventCreateStatsScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::PlayerWidget_eventCreateStatsScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execCreateStatsScreen)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateStatsScreen(EStats(Z_Param_Stat));
	P_NATIVE_END;
}
// End Class UPlayerWidget Function CreateStatsScreen

// Begin Class UPlayerWidget Function CreateStatusIconWithAmount
struct Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics
{
	struct PlayerWidget_eventCreateStatusIconWithAmount_Parms
	{
		float Amount;
		UTexture2D* Image;
		UStatsComponent* StatsCompRef;
		FString Keyword;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsCompRef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Keyword;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithAmount_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithAmount_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_StatsCompRef = { "StatsCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithAmount_Parms, StatsCompRef), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsCompRef_MetaData), NewProp_StatsCompRef_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithAmount_Parms, Keyword), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_StatsCompRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::NewProp_Keyword,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "CreateStatusIconWithAmount", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::PlayerWidget_eventCreateStatusIconWithAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::PlayerWidget_eventCreateStatusIconWithAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execCreateStatusIconWithAmount)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_OBJECT(UStatsComponent,Z_Param_StatsCompRef);
	P_GET_PROPERTY(FStrProperty,Z_Param_Keyword);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateStatusIconWithAmount(Z_Param_Amount,Z_Param_Image,Z_Param_StatsCompRef,Z_Param_Keyword);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function CreateStatusIconWithAmount

// Begin Class UPlayerWidget Function CreateStatusIconWithTimer
struct Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics
{
	struct PlayerWidget_eventCreateStatusIconWithTimer_Parms
	{
		float Duration;
		UTexture2D* Image;
		UAbilityComponent_Base* AbilityCompRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithTimer_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithTimer_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::NewProp_AbilityCompRef = { "AbilityCompRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateStatusIconWithTimer_Parms, AbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCompRef_MetaData), NewProp_AbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::NewProp_AbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "CreateStatusIconWithTimer", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::PlayerWidget_eventCreateStatusIconWithTimer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::PlayerWidget_eventCreateStatusIconWithTimer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execCreateStatusIconWithTimer)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_AbilityCompRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateStatusIconWithTimer(Z_Param_Duration,Z_Param_Image,Z_Param_AbilityCompRef);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function CreateStatusIconWithTimer

// Begin Class UPlayerWidget Function CreateUpgradeInfoHeader
struct Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics
{
	struct PlayerWidget_eventCreateUpgradeInfoHeader_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventCreateUpgradeInfoHeader_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "CreateUpgradeInfoHeader", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::PlayerWidget_eventCreateUpgradeInfoHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::PlayerWidget_eventCreateUpgradeInfoHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execCreateUpgradeInfoHeader)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateUpgradeInfoHeader(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function CreateUpgradeInfoHeader

// Begin Class UPlayerWidget Function RemoveAbilityFooter
struct Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "RemoveAbilityFooter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execRemoveAbilityFooter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityFooter();
	P_NATIVE_END;
}
// End Class UPlayerWidget Function RemoveAbilityFooter

// Begin Class UPlayerWidget Function RemoveAbilityUpgradeScreen
struct Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "RemoveAbilityUpgradeScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execRemoveAbilityUpgradeScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityUpgradeScreen();
	P_NATIVE_END;
}
// End Class UPlayerWidget Function RemoveAbilityUpgradeScreen

// Begin Class UPlayerWidget Function RemoveStatsScreen
struct Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "RemoveStatsScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execRemoveStatsScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveStatsScreen();
	P_NATIVE_END;
}
// End Class UPlayerWidget Function RemoveStatsScreen

// Begin Class UPlayerWidget Function SetHealth
struct Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics
{
	struct PlayerWidget_eventSetHealth_Parms
	{
		float NewHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventSetHealth_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::NewProp_NewHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::PlayerWidget_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::PlayerWidget_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_NewHealthPercent);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetHealth

// Begin Class UPlayerWidget Function SetLevel
struct Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics
{
	struct PlayerWidget_eventSetLevel_Parms
	{
		int32 CurrentLevel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventSetLevel_Parms, CurrentLevel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::NewProp_CurrentLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetLevel", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::PlayerWidget_eventSetLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::PlayerWidget_eventSetLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentLevel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLevel(Z_Param_CurrentLevel);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetLevel

// Begin Class UPlayerWidget Function SetMana
struct Z_Construct_UFunction_UPlayerWidget_SetMana_Statics
{
	struct PlayerWidget_eventSetMana_Parms
	{
		float NewManaPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewManaPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::NewProp_NewManaPercent = { "NewManaPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventSetMana_Parms, NewManaPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::NewProp_NewManaPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetMana", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::PlayerWidget_eventSetMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::PlayerWidget_eventSetMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewManaPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMana(Z_Param_NewManaPercent);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetMana

// Begin Class UPlayerWidget Function SetStamina
struct Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics
{
	struct PlayerWidget_eventSetStamina_Parms
	{
		float NewStaminaPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStaminaPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::NewProp_NewStaminaPercent = { "NewStaminaPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventSetStamina_Parms, NewStaminaPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::NewProp_NewStaminaPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetStamina", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::PlayerWidget_eventSetStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::PlayerWidget_eventSetStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewStaminaPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStamina(Z_Param_NewStaminaPercent);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetStamina

// Begin Class UPlayerWidget Function SetXP
struct Z_Construct_UFunction_UPlayerWidget_SetXP_Statics
{
	struct PlayerWidget_eventSetXP_Parms
	{
		float CurrentXP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerWidget_eventSetXP_Parms, CurrentXP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::NewProp_CurrentXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerWidget, nullptr, "SetXP", nullptr, nullptr, Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::PlayerWidget_eventSetXP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::PlayerWidget_eventSetXP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerWidget_SetXP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerWidget_SetXP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerWidget::execSetXP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentXP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetXP(Z_Param_CurrentXP);
	P_NATIVE_END;
}
// End Class UPlayerWidget Function SetXP

// Begin Class UPlayerWidget
void UPlayerWidget::StaticRegisterNativesUPlayerWidget()
{
	UClass* Class = UPlayerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAbilityFooter", &UPlayerWidget::execCreateAbilityFooter },
		{ "CreateAbilityUpgradeScreen", &UPlayerWidget::execCreateAbilityUpgradeScreen },
		{ "CreateStatsScreen", &UPlayerWidget::execCreateStatsScreen },
		{ "CreateStatusIconWithAmount", &UPlayerWidget::execCreateStatusIconWithAmount },
		{ "CreateStatusIconWithTimer", &UPlayerWidget::execCreateStatusIconWithTimer },
		{ "CreateUpgradeInfoHeader", &UPlayerWidget::execCreateUpgradeInfoHeader },
		{ "RemoveAbilityFooter", &UPlayerWidget::execRemoveAbilityFooter },
		{ "RemoveAbilityUpgradeScreen", &UPlayerWidget::execRemoveAbilityUpgradeScreen },
		{ "RemoveStatsScreen", &UPlayerWidget::execRemoveStatsScreen },
		{ "SetHealth", &UPlayerWidget::execSetHealth },
		{ "SetLevel", &UPlayerWidget::execSetLevel },
		{ "SetMana", &UPlayerWidget::execSetMana },
		{ "SetStamina", &UPlayerWidget::execSetStamina },
		{ "SetXP", &UPlayerWidget::execSetXP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerWidget);
UClass* Z_Construct_UClass_UPlayerWidget_NoRegister()
{
	return UPlayerWidget::StaticClass();
}
struct Z_Construct_UClass_UPlayerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerWidget.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveStatusWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_StatusEffects_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_UpgradeInfo_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Health_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Stamina_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_Mana_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_Level_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_XP_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_AbilitiesFooter_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsWidget_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsScreenRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityUpgradeScreenWidget_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityUpgradeScreenWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityFooterWidget_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityFooterWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoHeaderWidget_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfoHeaderWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusIconWithTimerWidget_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusIconWithTimerWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusIconWithAmountWidget_MetaData[] = {
		{ "Category", "PlayerWidget" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusIconWithAmountWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/PlayerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveStatusWidget_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveStatusWidget_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ActiveStatusWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_StatusEffects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox_UpgradeInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Stamina;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_Mana;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_Level;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock_XP;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_AbilitiesFooter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatsWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsScreenRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityUpgradeScreenWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityUpgradeScreenWidgetRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityFooterWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityFooterWidgetRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfoHeaderWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InfoHeaderWidgetRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatusIconWithTimerWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusIconWithTimerWidgetRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatusIconWithAmountWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusIconWithAmountWidgetRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerWidget_CreateAbilityFooter, "CreateAbilityFooter" }, // 2450226120
		{ &Z_Construct_UFunction_UPlayerWidget_CreateAbilityUpgradeScreen, "CreateAbilityUpgradeScreen" }, // 4114941867
		{ &Z_Construct_UFunction_UPlayerWidget_CreateStatsScreen, "CreateStatsScreen" }, // 4114350968
		{ &Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithAmount, "CreateStatusIconWithAmount" }, // 1220247603
		{ &Z_Construct_UFunction_UPlayerWidget_CreateStatusIconWithTimer, "CreateStatusIconWithTimer" }, // 1058573187
		{ &Z_Construct_UFunction_UPlayerWidget_CreateUpgradeInfoHeader, "CreateUpgradeInfoHeader" }, // 4293353455
		{ &Z_Construct_UFunction_UPlayerWidget_RemoveAbilityFooter, "RemoveAbilityFooter" }, // 3287209945
		{ &Z_Construct_UFunction_UPlayerWidget_RemoveAbilityUpgradeScreen, "RemoveAbilityUpgradeScreen" }, // 1599882770
		{ &Z_Construct_UFunction_UPlayerWidget_RemoveStatsScreen, "RemoveStatsScreen" }, // 2486869418
		{ &Z_Construct_UFunction_UPlayerWidget_SetHealth, "SetHealth" }, // 3355234517
		{ &Z_Construct_UFunction_UPlayerWidget_SetLevel, "SetLevel" }, // 1934459601
		{ &Z_Construct_UFunction_UPlayerWidget_SetMana, "SetMana" }, // 2153918869
		{ &Z_Construct_UFunction_UPlayerWidget_SetStamina, "SetStamina" }, // 2945438898
		{ &Z_Construct_UFunction_UPlayerWidget_SetXP, "SetXP" }, // 4190898020
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ActiveStatusWidget_ValueProp = { "ActiveStatusWidget", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UStatusIconWithAmount_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ActiveStatusWidget_Key_KeyProp = { "ActiveStatusWidget_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ActiveStatusWidget = { "ActiveStatusWidget", nullptr, (EPropertyFlags)0x0010008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, ActiveStatusWidget), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveStatusWidget_MetaData), NewProp_ActiveStatusWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HorizontalBox_StatusEffects = { "HorizontalBox_StatusEffects", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, HorizontalBox_StatusEffects), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_StatusEffects_MetaData), NewProp_HorizontalBox_StatusEffects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_VerticalBox_UpgradeInfo = { "VerticalBox_UpgradeInfo", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, VerticalBox_UpgradeInfo), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalBox_UpgradeInfo_MetaData), NewProp_VerticalBox_UpgradeInfo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ProgressBar_Health = { "ProgressBar_Health", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, ProgressBar_Health), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Health_MetaData), NewProp_ProgressBar_Health_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ProgressBar_Stamina = { "ProgressBar_Stamina", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, ProgressBar_Stamina), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Stamina_MetaData), NewProp_ProgressBar_Stamina_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ProgressBar_Mana = { "ProgressBar_Mana", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, ProgressBar_Mana), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_Mana_MetaData), NewProp_ProgressBar_Mana_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_TextBlock_Level = { "TextBlock_Level", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, TextBlock_Level), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_Level_MetaData), NewProp_TextBlock_Level_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_TextBlock_XP = { "TextBlock_XP", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, TextBlock_XP), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBlock_XP_MetaData), NewProp_TextBlock_XP_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HorizontalBox_AbilitiesFooter = { "HorizontalBox_AbilitiesFooter", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, HorizontalBox_AbilitiesFooter), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_AbilitiesFooter_MetaData), NewProp_HorizontalBox_AbilitiesFooter_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatsWidget = { "StatsWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, StatsWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UStatsScreenWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsWidget_MetaData), NewProp_StatsWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatsScreenRef = { "StatsScreenRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, StatsScreenRef), Z_Construct_UClass_UStatsScreenWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsScreenRef_MetaData), NewProp_StatsScreenRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityUpgradeScreenWidget = { "AbilityUpgradeScreenWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, AbilityUpgradeScreenWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityUpgradeScreen_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityUpgradeScreenWidget_MetaData), NewProp_AbilityUpgradeScreenWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityUpgradeScreenWidgetRef = { "AbilityUpgradeScreenWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, AbilityUpgradeScreenWidgetRef), Z_Construct_UClass_UAbilityUpgradeScreen_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityUpgradeScreenWidgetRef_MetaData), NewProp_AbilityUpgradeScreenWidgetRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityFooterWidget = { "AbilityFooterWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, AbilityFooterWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityFooter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityFooterWidget_MetaData), NewProp_AbilityFooterWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityFooterWidgetRef = { "AbilityFooterWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, AbilityFooterWidgetRef), Z_Construct_UClass_UAbilityFooter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityFooterWidgetRef_MetaData), NewProp_AbilityFooterWidgetRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_InfoHeaderWidget = { "InfoHeaderWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, InfoHeaderWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UInfoHeader_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoHeaderWidget_MetaData), NewProp_InfoHeaderWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_InfoHeaderWidgetRef = { "InfoHeaderWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, InfoHeaderWidgetRef), Z_Construct_UClass_UInfoHeader_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfoHeaderWidgetRef_MetaData), NewProp_InfoHeaderWidgetRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithTimerWidget = { "StatusIconWithTimerWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, StatusIconWithTimerWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UStatusIconWithTimer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusIconWithTimerWidget_MetaData), NewProp_StatusIconWithTimerWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithTimerWidgetRef = { "StatusIconWithTimerWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, StatusIconWithTimerWidgetRef), Z_Construct_UClass_UStatusIconWithTimer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusIconWithTimerWidgetRef_MetaData), NewProp_StatusIconWithTimerWidgetRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithAmountWidget = { "StatusIconWithAmountWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, StatusIconWithAmountWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UStatusIconWithAmount_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusIconWithAmountWidget_MetaData), NewProp_StatusIconWithAmountWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithAmountWidgetRef = { "StatusIconWithAmountWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerWidget, StatusIconWithAmountWidgetRef), Z_Construct_UClass_UStatusIconWithAmount_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusIconWithAmountWidgetRef_MetaData), NewProp_StatusIconWithAmountWidgetRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ActiveStatusWidget_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ActiveStatusWidget_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ActiveStatusWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HorizontalBox_StatusEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_VerticalBox_UpgradeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ProgressBar_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ProgressBar_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_ProgressBar_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_TextBlock_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_TextBlock_XP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_HorizontalBox_AbilitiesFooter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatsWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatsScreenRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityUpgradeScreenWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityUpgradeScreenWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityFooterWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_AbilityFooterWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_InfoHeaderWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_InfoHeaderWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithTimerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithTimerWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithAmountWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerWidget_Statics::NewProp_StatusIconWithAmountWidgetRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerWidget_Statics::ClassParams = {
	&UPlayerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerWidget()
{
	if (!Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton, Z_Construct_UClass_UPlayerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerWidget.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UPlayerWidget>()
{
	return UPlayerWidget::StaticClass();
}
UPlayerWidget::UPlayerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerWidget);
UPlayerWidget::~UPlayerWidget() {}
// End Class UPlayerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerWidget, UPlayerWidget::StaticClass, TEXT("UPlayerWidget"), &Z_Registration_Info_UClass_UPlayerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerWidget), 208871102U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_415731405(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
