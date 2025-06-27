// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/AbilityFooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityFooter() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityFooter();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityFooter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityFooter Function RemoveCooldownText
struct Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityFooter, nullptr, "RemoveCooldownText", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityFooter::execRemoveCooldownText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveCooldownText();
	P_NATIVE_END;
}
// End Class UAbilityFooter Function RemoveCooldownText

// Begin Class UAbilityFooter Function SetAbility
struct Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics
{
	struct AbilityFooter_eventSetAbility_Parms
	{
		UTexture2D* Image;
		FString ActionKey;
		UAbilityComponent_Base* AbilityComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityFooter_eventSetAbility_Parms, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::NewProp_ActionKey = { "ActionKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityFooter_eventSetAbility_Parms, ActionKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::NewProp_AbilityComp = { "AbilityComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityFooter_eventSetAbility_Parms, AbilityComp), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_MetaData), NewProp_AbilityComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::NewProp_ActionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::NewProp_AbilityComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityFooter, nullptr, "SetAbility", nullptr, nullptr, Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::AbilityFooter_eventSetAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::AbilityFooter_eventSetAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityFooter_SetAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityFooter_SetAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityFooter::execSetAbility)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Image);
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionKey);
	P_GET_OBJECT(UAbilityComponent_Base,Z_Param_AbilityComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbility(Z_Param_Image,Z_Param_ActionKey,Z_Param_AbilityComp);
	P_NATIVE_END;
}
// End Class UAbilityFooter Function SetAbility

// Begin Class UAbilityFooter Function SetCooldownText
struct Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics
{
	struct AbilityFooter_eventSetCooldownText_Parms
	{
		float TimeLeft;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeft;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::NewProp_TimeLeft = { "TimeLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilityFooter_eventSetCooldownText_Parms, TimeLeft), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::NewProp_TimeLeft,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityFooter, nullptr, "SetCooldownText", nullptr, nullptr, Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::AbilityFooter_eventSetCooldownText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::AbilityFooter_eventSetCooldownText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAbilityFooter_SetCooldownText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityFooter_SetCooldownText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityFooter::execSetCooldownText)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeLeft);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCooldownText(Z_Param_TimeLeft);
	P_NATIVE_END;
}
// End Class UAbilityFooter Function SetCooldownText

// Begin Class UAbilityFooter Function SetImageAvailability
struct Z_Construct_UFunction_UAbilityFooter_SetImageAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityFooter_SetImageAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityFooter, nullptr, "SetImageAvailability", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityFooter_SetImageAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityFooter_SetImageAvailability_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityFooter_SetImageAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityFooter_SetImageAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityFooter::execSetImageAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImageAvailability();
	P_NATIVE_END;
}
// End Class UAbilityFooter Function SetImageAvailability

// Begin Class UAbilityFooter
void UAbilityFooter::StaticRegisterNativesUAbilityFooter()
{
	UClass* Class = UAbilityFooter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveCooldownText", &UAbilityFooter::execRemoveCooldownText },
		{ "SetAbility", &UAbilityFooter::execSetAbility },
		{ "SetCooldownText", &UAbilityFooter::execSetCooldownText },
		{ "SetImageAvailability", &UAbilityFooter::execSetImageAvailability },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityFooter);
UClass* Z_Construct_UClass_UAbilityFooter_NoRegister()
{
	return UAbilityFooter::StaticClass();
}
struct Z_Construct_UClass_UAbilityFooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/AbilityFooter.h" },
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityComp_REF_MetaData[] = {
		{ "Category", "AbilityFooter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CooldownValue_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_ActionKey_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Image_AbilityIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityImage_MetaData[] = {
		{ "Category", "AbilityFooter" },
		{ "ModuleRelativePath", "Public/UI/AbilityFooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityComp_REF;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CooldownValue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_ActionKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Image_AbilityIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityFooter_RemoveCooldownText, "RemoveCooldownText" }, // 1114935626
		{ &Z_Construct_UFunction_UAbilityFooter_SetAbility, "SetAbility" }, // 2533361158
		{ &Z_Construct_UFunction_UAbilityFooter_SetCooldownText, "SetCooldownText" }, // 3980551470
		{ &Z_Construct_UFunction_UAbilityFooter_SetImageAvailability, "SetImageAvailability" }, // 3309870358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityFooter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityFooter_Statics::NewProp_AbilityComp_REF = { "AbilityComp_REF", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFooter, AbilityComp_REF), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityComp_REF_MetaData), NewProp_AbilityComp_REF_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityFooter_Statics::NewProp_Text_CooldownValue = { "Text_CooldownValue", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFooter, Text_CooldownValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CooldownValue_MetaData), NewProp_Text_CooldownValue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityFooter_Statics::NewProp_Text_ActionKey = { "Text_ActionKey", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFooter, Text_ActionKey), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_ActionKey_MetaData), NewProp_Text_ActionKey_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityFooter_Statics::NewProp_Image_AbilityIcon = { "Image_AbilityIcon", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFooter, Image_AbilityIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Image_AbilityIcon_MetaData), NewProp_Image_AbilityIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityFooter_Statics::NewProp_AbilityImage = { "AbilityImage", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityFooter, AbilityImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityImage_MetaData), NewProp_AbilityImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityFooter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFooter_Statics::NewProp_AbilityComp_REF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFooter_Statics::NewProp_Text_CooldownValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFooter_Statics::NewProp_Text_ActionKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFooter_Statics::NewProp_Image_AbilityIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityFooter_Statics::NewProp_AbilityImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFooter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityFooter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFooter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityFooter_Statics::ClassParams = {
	&UAbilityFooter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityFooter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFooter_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityFooter_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityFooter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityFooter()
{
	if (!Z_Registration_Info_UClass_UAbilityFooter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityFooter.OuterSingleton, Z_Construct_UClass_UAbilityFooter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityFooter.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityFooter>()
{
	return UAbilityFooter::StaticClass();
}
UAbilityFooter::UAbilityFooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityFooter);
UAbilityFooter::~UAbilityFooter() {}
// End Class UAbilityFooter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityFooter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityFooter, UAbilityFooter::StaticClass, TEXT("UAbilityFooter"), &Z_Registration_Info_UClass_UAbilityFooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityFooter), 4248473439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityFooter_h_4254590893(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityFooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityFooter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
