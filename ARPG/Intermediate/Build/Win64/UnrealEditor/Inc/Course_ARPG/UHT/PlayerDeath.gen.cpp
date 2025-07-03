// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/PlayerDeath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerDeath() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerDeath();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerDeath_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UPlayerDeath
void UPlayerDeath::StaticRegisterNativesUPlayerDeath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerDeath);
UClass* Z_Construct_UClass_UPlayerDeath_NoRegister()
{
	return UPlayerDeath::StaticClass();
}
struct Z_Construct_UClass_UPlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerDeath.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerDeath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeIn_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/PlayerDeath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerDeath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerDeath_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerDeath, FadeIn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeIn_MetaData), NewProp_FadeIn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerDeath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerDeath_Statics::NewProp_FadeIn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDeath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerDeath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDeath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerDeath_Statics::ClassParams = {
	&UPlayerDeath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerDeath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDeath_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerDeath_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerDeath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerDeath()
{
	if (!Z_Registration_Info_UClass_UPlayerDeath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerDeath.OuterSingleton, Z_Construct_UClass_UPlayerDeath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerDeath.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UPlayerDeath>()
{
	return UPlayerDeath::StaticClass();
}
UPlayerDeath::UPlayerDeath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerDeath);
UPlayerDeath::~UPlayerDeath() {}
// End Class UPlayerDeath

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerDeath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerDeath, UPlayerDeath::StaticClass, TEXT("UPlayerDeath"), &Z_Registration_Info_UClass_UPlayerDeath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerDeath), 1375700381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerDeath_h_1472156029(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerDeath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerDeath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
