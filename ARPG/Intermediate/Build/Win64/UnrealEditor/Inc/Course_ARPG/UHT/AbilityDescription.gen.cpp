// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/AbilityDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityDescription() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityDescription();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityDescription_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityDescription
void UAbilityDescription::StaticRegisterNativesUAbilityDescription()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityDescription);
UClass* Z_Construct_UClass_UAbilityDescription_NoRegister()
{
	return UAbilityDescription::StaticClass();
}
struct Z_Construct_UClass_UAbilityDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/AbilityDescription.h" },
		{ "ModuleRelativePath", "Public/UI/AbilityDescription.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_AbilityDescription_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/AbilityDescription.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_AbilityDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityDescription>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityDescription_Statics::NewProp_Text_AbilityDescription = { "Text_AbilityDescription", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityDescription, Text_AbilityDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_AbilityDescription_MetaData), NewProp_Text_AbilityDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityDescription_Statics::NewProp_Text_AbilityDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityDescription_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityDescription_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityDescription_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityDescription_Statics::ClassParams = {
	&UAbilityDescription::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAbilityDescription_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityDescription_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityDescription_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityDescription_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityDescription()
{
	if (!Z_Registration_Info_UClass_UAbilityDescription.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityDescription.OuterSingleton, Z_Construct_UClass_UAbilityDescription_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityDescription.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityDescription>()
{
	return UAbilityDescription::StaticClass();
}
UAbilityDescription::UAbilityDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityDescription);
UAbilityDescription::~UAbilityDescription() {}
// End Class UAbilityDescription

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityDescription_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityDescription, UAbilityDescription::StaticClass, TEXT("UAbilityDescription"), &Z_Registration_Info_UClass_UAbilityDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityDescription), 3345935696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityDescription_h_250920448(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityDescription_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
