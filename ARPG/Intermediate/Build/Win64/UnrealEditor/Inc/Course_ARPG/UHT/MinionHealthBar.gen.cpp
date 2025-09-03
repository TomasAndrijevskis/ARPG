// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/MinionHealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionHealthBar() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UMinionHealthBar();
COURSE_ARPG_API UClass* Z_Construct_UClass_UMinionHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UMinionHealthBar Function SetHealth
struct Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics
{
	struct MinionHealthBar_eventSetHealth_Parms
	{
		float NewHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/MinionHealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MinionHealthBar_eventSetHealth_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::NewProp_NewHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMinionHealthBar, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::MinionHealthBar_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::MinionHealthBar_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMinionHealthBar_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMinionHealthBar_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMinionHealthBar::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_NewHealthPercent);
	P_NATIVE_END;
}
// End Class UMinionHealthBar Function SetHealth

// Begin Class UMinionHealthBar
void UMinionHealthBar::StaticRegisterNativesUMinionHealthBar()
{
	UClass* Class = UMinionHealthBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealth", &UMinionHealthBar::execSetHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMinionHealthBar);
UClass* Z_Construct_UClass_UMinionHealthBar_NoRegister()
{
	return UMinionHealthBar::StaticClass();
}
struct Z_Construct_UClass_UMinionHealthBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MinionHealthBar.h" },
		{ "ModuleRelativePath", "Public/UI/MinionHealthBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/MinionHealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_HealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMinionHealthBar_SetHealth, "SetHealth" }, // 4142941414
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMinionHealthBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMinionHealthBar_Statics::NewProp_ProgressBar_HealthBar = { "ProgressBar_HealthBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMinionHealthBar, ProgressBar_HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_HealthBar_MetaData), NewProp_ProgressBar_HealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMinionHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMinionHealthBar_Statics::NewProp_ProgressBar_HealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinionHealthBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMinionHealthBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMinionHealthBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMinionHealthBar_Statics::ClassParams = {
	&UMinionHealthBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMinionHealthBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMinionHealthBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMinionHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UMinionHealthBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMinionHealthBar()
{
	if (!Z_Registration_Info_UClass_UMinionHealthBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMinionHealthBar.OuterSingleton, Z_Construct_UClass_UMinionHealthBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMinionHealthBar.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UMinionHealthBar>()
{
	return UMinionHealthBar::StaticClass();
}
UMinionHealthBar::UMinionHealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMinionHealthBar);
UMinionHealthBar::~UMinionHealthBar() {}
// End Class UMinionHealthBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_MinionHealthBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMinionHealthBar, UMinionHealthBar::StaticClass, TEXT("UMinionHealthBar"), &Z_Registration_Info_UClass_UMinionHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMinionHealthBar), 2988374151U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_MinionHealthBar_h_2650357748(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_MinionHealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_MinionHealthBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
