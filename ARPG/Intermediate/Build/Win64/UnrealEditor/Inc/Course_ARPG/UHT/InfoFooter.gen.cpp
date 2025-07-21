// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/InfoFooter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfoFooter() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UInfoFooter();
COURSE_ARPG_API UClass* Z_Construct_UClass_UInfoFooter_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EScreens();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UInfoFooter Function InitializeFooter
struct Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics
{
	struct InfoFooter_eventInitializeFooter_Parms
	{
		TEnumAsByte<EScreens> ScreenType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/InfoFooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::NewProp_ScreenType = { "ScreenType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InfoFooter_eventInitializeFooter_Parms, ScreenType), Z_Construct_UEnum_Course_ARPG_EScreens, METADATA_PARAMS(0, nullptr) }; // 702563385
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::NewProp_ScreenType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInfoFooter, nullptr, "InitializeFooter", nullptr, nullptr, Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::InfoFooter_eventInitializeFooter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::InfoFooter_eventInitializeFooter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInfoFooter_InitializeFooter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInfoFooter_InitializeFooter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInfoFooter::execInitializeFooter)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_ScreenType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeFooter(EScreens(Z_Param_ScreenType));
	P_NATIVE_END;
}
// End Class UInfoFooter Function InitializeFooter

// Begin Class UInfoFooter
void UInfoFooter::StaticRegisterNativesUInfoFooter()
{
	UClass* Class = UInfoFooter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeFooter", &UInfoFooter::execInitializeFooter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInfoFooter);
UClass* Z_Construct_UClass_UInfoFooter_NoRegister()
{
	return UInfoFooter::StaticClass();
}
struct Z_Construct_UClass_UInfoFooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/InfoFooter.h" },
		{ "ModuleRelativePath", "Public/UI/InfoFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Exit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InfoFooter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/InfoFooter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Exit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInfoFooter_InitializeFooter, "InitializeFooter" }, // 2133554594
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInfoFooter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoFooter_Statics::NewProp_Button_Exit = { "Button_Exit", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoFooter, Button_Exit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Exit_MetaData), NewProp_Button_Exit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInfoFooter_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInfoFooter, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInfoFooter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoFooter_Statics::NewProp_Button_Exit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInfoFooter_Statics::NewProp_PlayerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoFooter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInfoFooter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoFooter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInfoFooter_Statics::ClassParams = {
	&UInfoFooter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInfoFooter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInfoFooter_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInfoFooter_Statics::Class_MetaDataParams), Z_Construct_UClass_UInfoFooter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInfoFooter()
{
	if (!Z_Registration_Info_UClass_UInfoFooter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInfoFooter.OuterSingleton, Z_Construct_UClass_UInfoFooter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInfoFooter.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UInfoFooter>()
{
	return UInfoFooter::StaticClass();
}
UInfoFooter::UInfoFooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInfoFooter);
UInfoFooter::~UInfoFooter() {}
// End Class UInfoFooter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoFooter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInfoFooter, UInfoFooter::StaticClass, TEXT("UInfoFooter"), &Z_Registration_Info_UClass_UInfoFooter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInfoFooter), 1685863014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoFooter_h_3374519254(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoFooter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoFooter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
