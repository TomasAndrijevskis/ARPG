// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/AbilityUpgradeScreen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityUpgradeScreen() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityUpgradeScreen();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityUpgradeScreen_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UDescriptionWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityUpgradeScreen Function CreateAbilityDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "CreateAbilityDescriptionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execCreateAbilityDescriptionWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAbilityDescriptionWidget();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function CreateAbilityDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function CreateDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics
{
	struct AbilityUpgradeScreen_eventCreateDescriptionWidget_Parms
	{
		UHorizontalBox* Box;
		TSubclassOf<UDescriptionWidget> Class;
		FString Description;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventCreateDescriptionWidget_Parms, Box), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventCreateDescriptionWidget_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UDescriptionWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventCreateDescriptionWidget_Parms, Description), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::NewProp_Description,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "CreateDescriptionWidget", nullptr, nullptr, Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::AbilityUpgradeScreen_eventCreateDescriptionWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::AbilityUpgradeScreen_eventCreateDescriptionWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execCreateDescriptionWidget)
{
	P_GET_OBJECT(UHorizontalBox,Z_Param_Box);
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDescriptionWidget(Z_Param_Box,Z_Param_Class,Z_Param_Description);
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function CreateDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function CreateUpgradeDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "CreateUpgradeDescriptionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execCreateUpgradeDescriptionWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateUpgradeDescriptionWidget();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function CreateUpgradeDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function InitializeAbility
struct Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics
{
	struct AbilityUpgradeScreen_eventInitializeAbility_Parms
	{
		UAbilityComponent_Base* AbilityComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::NewProp_AbilityComp = { "AbilityComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventInitializeAbility_Parms, AbilityComp), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_MetaData), NewProp_AbilityComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::NewProp_AbilityComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "InitializeAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::AbilityUpgradeScreen_eventInitializeAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::AbilityUpgradeScreen_eventInitializeAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execInitializeAbility)
{
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_AbilityComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAbility(Z_Param_AbilityComp);
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function InitializeAbility

// Begin Class UAbilityUpgradeScreen Function RemoveAbilityDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "RemoveAbilityDescriptionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execRemoveAbilityDescriptionWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAbilityDescriptionWidget();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function RemoveAbilityDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function RemoveDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics
{
	struct AbilityUpgradeScreen_eventRemoveDescriptionWidget_Parms
	{
		UHorizontalBox* Box;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventRemoveDescriptionWidget_Parms, Box), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::NewProp_Box,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "RemoveDescriptionWidget", nullptr, nullptr, Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::AbilityUpgradeScreen_eventRemoveDescriptionWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::AbilityUpgradeScreen_eventRemoveDescriptionWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execRemoveDescriptionWidget)
{
	P_GET_OBJECT(UHorizontalBox,Z_Param_Box);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDescriptionWidget(Z_Param_Box);
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function RemoveDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function RemoveUpgradeDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "RemoveUpgradeDescriptionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execRemoveUpgradeDescriptionWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUpgradeDescriptionWidget();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function RemoveUpgradeDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function SetAbilityIconEnable
struct Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "SetAbilityIconEnable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execSetAbilityIconEnable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityIconEnable();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function SetAbilityIconEnable

// Begin Class UAbilityUpgradeScreen Function SetButtonText
struct Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "SetButtonText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execSetButtonText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetButtonText();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function SetButtonText

// Begin Class UAbilityUpgradeScreen Function SetIconStyle
struct Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics
{
	struct AbilityUpgradeScreen_eventSetIconStyle_Parms
	{
		UTexture2D* Icon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventSetIconStyle_Parms, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "SetIconStyle", nullptr, nullptr, Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::AbilityUpgradeScreen_eventSetIconStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::AbilityUpgradeScreen_eventSetIconStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execSetIconStyle)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Icon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIconStyle(Z_Param_Icon);
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function SetIconStyle

// Begin Class UAbilityUpgradeScreen Function UnlockAbility
struct Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "UnlockAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execUnlockAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnlockAbility();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function UnlockAbility

// Begin Class UAbilityUpgradeScreen
void UAbilityUpgradeScreen::StaticRegisterNativesUAbilityUpgradeScreen()
{
	UClass* Class = UAbilityUpgradeScreen::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAbilityDescriptionWidget", &UAbilityUpgradeScreen::execCreateAbilityDescriptionWidget },
		{ "CreateDescriptionWidget", &UAbilityUpgradeScreen::execCreateDescriptionWidget },
		{ "CreateUpgradeDescriptionWidget", &UAbilityUpgradeScreen::execCreateUpgradeDescriptionWidget },
		{ "InitializeAbility", &UAbilityUpgradeScreen::execInitializeAbility },
		{ "RemoveAbilityDescriptionWidget", &UAbilityUpgradeScreen::execRemoveAbilityDescriptionWidget },
		{ "RemoveDescriptionWidget", &UAbilityUpgradeScreen::execRemoveDescriptionWidget },
		{ "RemoveUpgradeDescriptionWidget", &UAbilityUpgradeScreen::execRemoveUpgradeDescriptionWidget },
		{ "SetAbilityIconEnable", &UAbilityUpgradeScreen::execSetAbilityIconEnable },
		{ "SetButtonText", &UAbilityUpgradeScreen::execSetButtonText },
		{ "SetIconStyle", &UAbilityUpgradeScreen::execSetIconStyle },
		{ "UnlockAbility", &UAbilityUpgradeScreen::execUnlockAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityUpgradeScreen);
UClass* Z_Construct_UClass_UAbilityUpgradeScreen_NoRegister()
{
	return UAbilityUpgradeScreen::StaticClass();
}
struct Z_Construct_UClass_UAbilityUpgradeScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/AbilityUpgradeScreen.h" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_REF_MetaData[] = {
		{ "Category", "AbilityUpgradeScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_AbilityIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_UpgradeAbility_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_AbilityDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_UpgradeDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Upgrade_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDescriptionClass_MetaData[] = {
		{ "Category", "AbilityUpgradeScreen" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeDescriptionClass_MetaData[] = {
		{ "Category", "AbilityUpgradeScreen" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_REF;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_AbilityIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_UpgradeAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_AbilityDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_UpgradeDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Upgrade;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityDescriptionClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UpgradeDescriptionClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_CreateAbilityDescriptionWidget, "CreateAbilityDescriptionWidget" }, // 4220160096
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget, "CreateDescriptionWidget" }, // 2080978876
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_CreateUpgradeDescriptionWidget, "CreateUpgradeDescriptionWidget" }, // 2939335390
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_InitializeAbility, "InitializeAbility" }, // 2690938116
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveAbilityDescriptionWidget, "RemoveAbilityDescriptionWidget" }, // 3583004453
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget, "RemoveDescriptionWidget" }, // 3453854116
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveUpgradeDescriptionWidget, "RemoveUpgradeDescriptionWidget" }, // 3478661906
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconEnable, "SetAbilityIconEnable" }, // 962247242
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_SetButtonText, "SetButtonText" }, // 2049788075
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle, "SetIconStyle" }, // 2883721318
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility, "UnlockAbility" }, // 4104439692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityUpgradeScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityComp_REF = { "AbilityComp_REF", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, AbilityComp_REF), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_REF_MetaData), NewProp_AbilityComp_REF_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_AbilityIcon = { "Button_AbilityIcon", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, Button_AbilityIcon), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_AbilityIcon_MetaData), NewProp_Button_AbilityIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_UpgradeAbility = { "Button_UpgradeAbility", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, Button_UpgradeAbility), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_UpgradeAbility_MetaData), NewProp_Button_UpgradeAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_HorizontalBox_AbilityDescription = { "HorizontalBox_AbilityDescription", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, HorizontalBox_AbilityDescription), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_AbilityDescription_MetaData), NewProp_HorizontalBox_AbilityDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_HorizontalBox_UpgradeDescription = { "HorizontalBox_UpgradeDescription", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, HorizontalBox_UpgradeDescription), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_UpgradeDescription_MetaData), NewProp_HorizontalBox_UpgradeDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Text_Upgrade = { "Text_Upgrade", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, Text_Upgrade), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Upgrade_MetaData), NewProp_Text_Upgrade_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityDescriptionClass = { "AbilityDescriptionClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, AbilityDescriptionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDescriptionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDescriptionClass_MetaData), NewProp_AbilityDescriptionClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_UpgradeDescriptionClass = { "UpgradeDescriptionClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, UpgradeDescriptionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDescriptionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpgradeDescriptionClass_MetaData), NewProp_UpgradeDescriptionClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityUpgradeScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityComp_REF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_AbilityIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_UpgradeAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_HorizontalBox_AbilityDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_HorizontalBox_UpgradeDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Text_Upgrade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityDescriptionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_UpgradeDescriptionClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityUpgradeScreen_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityUpgradeScreen_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityUpgradeScreen_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::ClassParams = {
	&UAbilityUpgradeScreen::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityUpgradeScreen_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityUpgradeScreen_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityUpgradeScreen_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityUpgradeScreen_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityUpgradeScreen()
{
	if (!Z_Registration_Info_UClass_UAbilityUpgradeScreen.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityUpgradeScreen.OuterSingleton, Z_Construct_UClass_UAbilityUpgradeScreen_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityUpgradeScreen.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityUpgradeScreen>()
{
	return UAbilityUpgradeScreen::StaticClass();
}
UAbilityUpgradeScreen::UAbilityUpgradeScreen(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityUpgradeScreen);
UAbilityUpgradeScreen::~UAbilityUpgradeScreen() {}
// End Class UAbilityUpgradeScreen

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityUpgradeScreen, UAbilityUpgradeScreen::StaticClass, TEXT("UAbilityUpgradeScreen"), &Z_Registration_Info_UClass_UAbilityUpgradeScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityUpgradeScreen), 214982608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_2449618047(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
