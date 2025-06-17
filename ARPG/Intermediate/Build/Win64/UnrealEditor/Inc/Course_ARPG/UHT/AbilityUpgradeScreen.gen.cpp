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
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityDescription_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityUpgradeScreen();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityUpgradeScreen_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityUpgradeScreen Function CreateDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "CreateDescriptionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateDescriptionWidget();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function CreateDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function RemoveDescriptionWidget
struct Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "RemoveDescriptionWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget_Statics::Function_MetaDataParams) };
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
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDescriptionWidget();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function RemoveDescriptionWidget

// Begin Class UAbilityUpgradeScreen Function SetAbility
struct Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics
{
	struct AbilityUpgradeScreen_eventSetAbility_Parms
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::NewProp_AbilityComp = { "AbilityComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityUpgradeScreen_eventSetAbility_Parms, AbilityComp), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_MetaData), NewProp_AbilityComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::NewProp_AbilityComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "SetAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::AbilityUpgradeScreen_eventSetAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::AbilityUpgradeScreen_eventSetAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execSetAbility)
{
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_AbilityComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbility(Z_Param_AbilityComp);
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function SetAbility

// Begin Class UAbilityUpgradeScreen Function SetAbilityIconAvailability
struct Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityUpgradeScreen, nullptr, "SetAbilityIconAvailability", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityUpgradeScreen::execSetAbilityIconAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbilityIconAvailability();
	P_NATIVE_END;
}
// End Class UAbilityUpgradeScreen Function SetAbilityIconAvailability

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
		{ "CreateDescriptionWidget", &UAbilityUpgradeScreen::execCreateDescriptionWidget },
		{ "RemoveDescriptionWidget", &UAbilityUpgradeScreen::execRemoveDescriptionWidget },
		{ "SetAbility", &UAbilityUpgradeScreen::execSetAbility },
		{ "SetAbilityIconAvailability", &UAbilityUpgradeScreen::execSetAbilityIconAvailability },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDescription_MetaData[] = {
		{ "Category", "AbilityUpgradeScreen" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_AbilityIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "AbilityUpgradeScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_REF_MetaData[] = {
		{ "Category", "AbilityUpgradeScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_ImproveStat_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalBox_Description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityDescriptionClass_MetaData[] = {
		{ "Category", "AbilityUpgradeScreen" },
		{ "ModuleRelativePath", "Public/UI/AbilityUpgradeScreen.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbilityDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_AbilityIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_REF;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_ImproveStat;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizontalBox_Description;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityDescriptionClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_CreateDescriptionWidget, "CreateDescriptionWidget" }, // 1102835122
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_RemoveDescriptionWidget, "RemoveDescriptionWidget" }, // 1429595603
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbility, "SetAbility" }, // 2591637145
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_SetAbilityIconAvailability, "SetAbilityIconAvailability" }, // 1122049639
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_SetIconStyle, "SetIconStyle" }, // 2883721318
		{ &Z_Construct_UFunction_UAbilityUpgradeScreen_UnlockAbility, "UnlockAbility" }, // 4104439692
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityUpgradeScreen>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityDescription = { "AbilityDescription", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, AbilityDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDescription_MetaData), NewProp_AbilityDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_AbilityIcon = { "Button_AbilityIcon", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, Button_AbilityIcon), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_AbilityIcon_MetaData), NewProp_Button_AbilityIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityComp_REF = { "AbilityComp_REF", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, AbilityComp_REF), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_REF_MetaData), NewProp_AbilityComp_REF_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_ImproveStat = { "Button_ImproveStat", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, Button_ImproveStat), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_ImproveStat_MetaData), NewProp_Button_ImproveStat_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_HorizontalBox_Description = { "HorizontalBox_Description", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, HorizontalBox_Description), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HorizontalBox_Description_MetaData), NewProp_HorizontalBox_Description_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityDescriptionClass = { "AbilityDescriptionClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityUpgradeScreen, AbilityDescriptionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAbilityDescription_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityDescriptionClass_MetaData), NewProp_AbilityDescriptionClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityUpgradeScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_AbilityIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityComp_REF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_Button_ImproveStat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_HorizontalBox_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityUpgradeScreen_Statics::NewProp_AbilityDescriptionClass,
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
		{ Z_Construct_UClass_UAbilityUpgradeScreen, UAbilityUpgradeScreen::StaticClass, TEXT("UAbilityUpgradeScreen"), &Z_Registration_Info_UClass_UAbilityUpgradeScreen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityUpgradeScreen), 3875614433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_4156619713(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
