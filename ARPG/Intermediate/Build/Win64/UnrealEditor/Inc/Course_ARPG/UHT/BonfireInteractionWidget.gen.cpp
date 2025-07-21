// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/BonfireInteractionWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonfireInteractionWidget() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireInteractionWidget();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireInteractionWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBonfireInteractionWidget
void UBonfireInteractionWidget::StaticRegisterNativesUBonfireInteractionWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonfireInteractionWidget);
UClass* Z_Construct_UClass_UBonfireInteractionWidget_NoRegister()
{
	return UBonfireInteractionWidget::StaticClass();
}
struct Z_Construct_UClass_UBonfireInteractionWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BonfireInteractionWidget.h" },
		{ "ModuleRelativePath", "Public/UI/BonfireInteractionWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_InteractionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/BonfireInteractionWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_InteractionText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonfireInteractionWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireInteractionWidget_Statics::NewProp_Text_InteractionText = { "Text_InteractionText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireInteractionWidget, Text_InteractionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_InteractionText_MetaData), NewProp_Text_InteractionText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonfireInteractionWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireInteractionWidget_Statics::NewProp_Text_InteractionText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBonfireInteractionWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonfireInteractionWidget_Statics::ClassParams = {
	&UBonfireInteractionWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBonfireInteractionWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBonfireInteractionWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBonfireInteractionWidget()
{
	if (!Z_Registration_Info_UClass_UBonfireInteractionWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonfireInteractionWidget.OuterSingleton, Z_Construct_UClass_UBonfireInteractionWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBonfireInteractionWidget.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBonfireInteractionWidget>()
{
	return UBonfireInteractionWidget::StaticClass();
}
UBonfireInteractionWidget::UBonfireInteractionWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBonfireInteractionWidget);
UBonfireInteractionWidget::~UBonfireInteractionWidget() {}
// End Class UBonfireInteractionWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBonfireInteractionWidget, UBonfireInteractionWidget::StaticClass, TEXT("UBonfireInteractionWidget"), &Z_Registration_Info_UClass_UBonfireInteractionWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonfireInteractionWidget), 3638797622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionWidget_h_2263977121(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
