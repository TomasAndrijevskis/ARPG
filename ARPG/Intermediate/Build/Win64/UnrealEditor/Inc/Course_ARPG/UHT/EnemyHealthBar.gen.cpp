// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/EnemyHealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyHealthBar() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyHealthBar();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UEnemyHealthBar Function SetHealth
struct Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics
{
	struct EnemyHealthBar_eventSetHealth_Parms
	{
		float NewHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/EnemyHealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyHealthBar_eventSetHealth_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::NewProp_NewHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyHealthBar, nullptr, "SetHealth", nullptr, nullptr, Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::EnemyHealthBar_eventSetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::EnemyHealthBar_eventSetHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnemyHealthBar_SetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyHealthBar_SetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEnemyHealthBar::execSetHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealth(Z_Param_NewHealthPercent);
	P_NATIVE_END;
}
// End Class UEnemyHealthBar Function SetHealth

// Begin Class UEnemyHealthBar
void UEnemyHealthBar::StaticRegisterNativesUEnemyHealthBar()
{
	UClass* Class = UEnemyHealthBar::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealth", &UEnemyHealthBar::execSetHealth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyHealthBar);
UClass* Z_Construct_UClass_UEnemyHealthBar_NoRegister()
{
	return UEnemyHealthBar::StaticClass();
}
struct Z_Construct_UClass_UEnemyHealthBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/EnemyHealthBar.h" },
		{ "ModuleRelativePath", "Public/UI/EnemyHealthBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/EnemyHealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar_HealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyHealthBar_SetHealth, "SetHealth" }, // 152091299
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyHealthBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyHealthBar_Statics::NewProp_ProgressBar_HealthBar = { "ProgressBar_HealthBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyHealthBar, ProgressBar_HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_HealthBar_MetaData), NewProp_ProgressBar_HealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyHealthBar_Statics::NewProp_ProgressBar_HealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyHealthBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyHealthBar_Statics::ClassParams = {
	&UEnemyHealthBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEnemyHealthBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyHealthBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyHealthBar()
{
	if (!Z_Registration_Info_UClass_UEnemyHealthBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyHealthBar.OuterSingleton, Z_Construct_UClass_UEnemyHealthBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyHealthBar.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UEnemyHealthBar>()
{
	return UEnemyHealthBar::StaticClass();
}
UEnemyHealthBar::UEnemyHealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyHealthBar);
UEnemyHealthBar::~UEnemyHealthBar() {}
// End Class UEnemyHealthBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyHealthBar, UEnemyHealthBar::StaticClass, TEXT("UEnemyHealthBar"), &Z_Registration_Info_UClass_UEnemyHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyHealthBar), 3854319580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_3163889010(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
