// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/CharacterSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelection() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UCharacterSelection();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCharacterSelection_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UCharacterSelection
void UCharacterSelection::StaticRegisterNativesUCharacterSelection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterSelection);
UClass* Z_Construct_UClass_UCharacterSelection_NoRegister()
{
	return UCharacterSelection::StaticClass();
}
struct Z_Construct_UClass_UCharacterSelection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CharacterSelection.h" },
		{ "ModuleRelativePath", "Public/UI/CharacterSelection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSelection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterSelection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSelection_Statics::ClassParams = {
	&UCharacterSelection::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelection_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterSelection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterSelection()
{
	if (!Z_Registration_Info_UClass_UCharacterSelection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterSelection.OuterSingleton, Z_Construct_UClass_UCharacterSelection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterSelection.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UCharacterSelection>()
{
	return UCharacterSelection::StaticClass();
}
UCharacterSelection::UCharacterSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSelection);
UCharacterSelection::~UCharacterSelection() {}
// End Class UCharacterSelection

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterSelection, UCharacterSelection::StaticClass, TEXT("UCharacterSelection"), &Z_Registration_Info_UClass_UCharacterSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterSelection), 3554443799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_3758452006(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_CharacterSelection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
