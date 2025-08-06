// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/BonfireInteractionAnim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonfireInteractionAnim() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireInteractionAnim();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireInteractionAnim_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBonfireInteractionAnim
void UBonfireInteractionAnim::StaticRegisterNativesUBonfireInteractionAnim()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBonfireInteractionAnim);
UClass* Z_Construct_UClass_UBonfireInteractionAnim_NoRegister()
{
	return UBonfireInteractionAnim::StaticClass();
}
struct Z_Construct_UClass_UBonfireInteractionAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BonfireInteractionAnim.h" },
		{ "ModuleRelativePath", "Public/UI/BonfireInteractionAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeIn_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/BonfireInteractionAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BonfireInteractionAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/BonfireInteractionAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBonfireInteractionAnim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireInteractionAnim_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireInteractionAnim, FadeIn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeIn_MetaData), NewProp_FadeIn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireInteractionAnim_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireInteractionAnim, PlayerController), Z_Construct_UClass_AARPG_PlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBonfireInteractionAnim_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBonfireInteractionAnim, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBonfireInteractionAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireInteractionAnim_Statics::NewProp_FadeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireInteractionAnim_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBonfireInteractionAnim_Statics::NewProp_PlayerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionAnim_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBonfireInteractionAnim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionAnim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBonfireInteractionAnim_Statics::ClassParams = {
	&UBonfireInteractionAnim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBonfireInteractionAnim_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionAnim_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBonfireInteractionAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UBonfireInteractionAnim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBonfireInteractionAnim()
{
	if (!Z_Registration_Info_UClass_UBonfireInteractionAnim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBonfireInteractionAnim.OuterSingleton, Z_Construct_UClass_UBonfireInteractionAnim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBonfireInteractionAnim.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBonfireInteractionAnim>()
{
	return UBonfireInteractionAnim::StaticClass();
}
UBonfireInteractionAnim::UBonfireInteractionAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBonfireInteractionAnim);
UBonfireInteractionAnim::~UBonfireInteractionAnim() {}
// End Class UBonfireInteractionAnim

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionAnim_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBonfireInteractionAnim, UBonfireInteractionAnim::StaticClass, TEXT("UBonfireInteractionAnim"), &Z_Registration_Info_UClass_UBonfireInteractionAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBonfireInteractionAnim), 3876822354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionAnim_h_3055176242(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_BonfireInteractionAnim_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
