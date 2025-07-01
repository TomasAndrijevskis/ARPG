// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/InfoHeader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfoHeader() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UInfoHeader();
COURSE_ARPG_API UClass* Z_Construct_UClass_UInfoHeader_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UInfoHeader Function InitializeInfoHeader
struct Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics
{
	struct InfoHeader_eventInitializeInfoHeader_Parms
	{
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InfoHeader_eventInitializeInfoHeader_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoHeader, nullptr, "InitializeInfoHeader", nullptr, nullptr, Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::InfoHeader_eventInitializeInfoHeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::InfoHeader_eventInitializeInfoHeader_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoHeader::execInitializeInfoHeader)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeInfoHeader(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UInfoHeader Function InitializeInfoHeader

// Begin Class UInfoHeader Function SetPointsAmount
struct Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics
{
	struct InfoHeader_eventSetPointsAmount_Parms
	{
		int32 NewAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::NewProp_NewAmount = { "NewAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InfoHeader_eventSetPointsAmount_Parms, NewAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::NewProp_NewAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoHeader, nullptr, "SetPointsAmount", nullptr, nullptr, Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::InfoHeader_eventSetPointsAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::InfoHeader_eventSetPointsAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInfoHeader_SetPointsAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoHeader_SetPointsAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoHeader::execSetPointsAmount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPointsAmount(Z_Param_NewAmount);
	P_NATIVE_END;
}
// End Class UInfoHeader Function SetPointsAmount

// Begin Class UInfoHeader Function UpdateAbilityPoints
struct Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics
{
	struct InfoHeader_eventUpdateAbilityPoints_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InfoHeader_eventUpdateAbilityPoints_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoHeader, nullptr, "UpdateAbilityPoints", nullptr, nullptr, Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::InfoHeader_eventUpdateAbilityPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::InfoHeader_eventUpdateAbilityPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoHeader::execUpdateAbilityPoints)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateAbilityPoints(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UInfoHeader Function UpdateAbilityPoints

// Begin Class UInfoHeader Function UpdateStatValue
struct Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics
{
	struct InfoHeader_eventUpdateStatValue_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InfoHeader_eventUpdateStatValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoHeader, nullptr, "UpdateStatValue", nullptr, nullptr, Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::InfoHeader_eventUpdateStatValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::InfoHeader_eventUpdateStatValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInfoHeader_UpdateStatValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoHeader_UpdateStatValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoHeader::execUpdateStatValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStatValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UInfoHeader Function UpdateStatValue

// Begin Class UInfoHeader
void UInfoHeader::StaticRegisterNativesUInfoHeader()
{
	UClass* Class = UInfoHeader::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeInfoHeader", &UInfoHeader::execInitializeInfoHeader },
		{ "SetPointsAmount", &UInfoHeader::execSetPointsAmount },
		{ "UpdateAbilityPoints", &UInfoHeader::execUpdateAbilityPoints },
		{ "UpdateStatValue", &UInfoHeader::execUpdateStatValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInfoHeader);
UClass* Z_Construct_UClass_UInfoHeader_NoRegister()
{
	return UInfoHeader::StaticClass();
}
struct Z_Construct_UClass_UInfoHeader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/InfoHeader.h" },
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_PointsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_PointsValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InfoHeader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PointsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_PointsValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInfoHeader_InitializeInfoHeader, "InitializeInfoHeader" }, // 2613614286
		{ &Z_Construct_UFunction_UInfoHeader_SetPointsAmount, "SetPointsAmount" }, // 2518051993
		{ &Z_Construct_UFunction_UInfoHeader_UpdateAbilityPoints, "UpdateAbilityPoints" }, // 1010171841
		{ &Z_Construct_UFunction_UInfoHeader_UpdateStatValue, "UpdateStatValue" }, // 2438528260
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfoHeader>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoHeader_Statics::NewProp_Text_PointsText = { "Text_PointsText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoHeader, Text_PointsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PointsText_MetaData), NewProp_Text_PointsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoHeader_Statics::NewProp_Text_PointsValue = { "Text_PointsValue", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoHeader, Text_PointsValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_PointsValue_MetaData), NewProp_Text_PointsValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoHeader_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoHeader, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfoHeader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoHeader_Statics::NewProp_Text_PointsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoHeader_Statics::NewProp_Text_PointsValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoHeader_Statics::NewProp_PlayerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoHeader_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInfoHeader_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoHeader_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInfoHeader_Statics::ClassParams = {
	&UInfoHeader::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInfoHeader_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInfoHeader_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoHeader_Statics::Class_MetaDataParams), Z_Construct_UClass_UInfoHeader_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInfoHeader()
{
	if (!Z_Registration_Info_UClass_UInfoHeader.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInfoHeader.OuterSingleton, Z_Construct_UClass_UInfoHeader_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInfoHeader.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UInfoHeader>()
{
	return UInfoHeader::StaticClass();
}
UInfoHeader::UInfoHeader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInfoHeader);
UInfoHeader::~UInfoHeader() {}
// End Class UInfoHeader

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInfoHeader, UInfoHeader::StaticClass, TEXT("UInfoHeader"), &Z_Registration_Info_UClass_UInfoHeader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInfoHeader), 3451680268U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_3441445077(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
