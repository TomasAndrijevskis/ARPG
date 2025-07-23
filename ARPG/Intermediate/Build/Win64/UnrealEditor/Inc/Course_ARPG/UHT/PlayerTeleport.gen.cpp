// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/UI/PlayerTeleport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTeleport() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerTeleport();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerTeleport_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UPlayerTeleport
void UPlayerTeleport::StaticRegisterNativesUPlayerTeleport()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerTeleport);
UClass* Z_Construct_UClass_UPlayerTeleport_NoRegister()
{
	return UPlayerTeleport::StaticClass();
}
struct Z_Construct_UClass_UPlayerTeleport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/PlayerTeleport.h" },
		{ "ModuleRelativePath", "Public/UI/PlayerTeleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeIn_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/PlayerTeleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerTeleport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/PlayerTeleport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FadeIn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerTeleport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerTeleport_Statics::NewProp_FadeIn = { "FadeIn", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerTeleport, FadeIn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeIn_MetaData), NewProp_FadeIn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerTeleport_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerTeleport, PlayerController), Z_Construct_UClass_AARPG_PlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerTeleport_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerTeleport, PlayerRef), Z_Construct_UClass_AMainCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerRef_MetaData), NewProp_PlayerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerTeleport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerTeleport_Statics::NewProp_FadeIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerTeleport_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerTeleport_Statics::NewProp_PlayerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerTeleport_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerTeleport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerTeleport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerTeleport_Statics::ClassParams = {
	&UPlayerTeleport::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlayerTeleport_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerTeleport_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerTeleport_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerTeleport_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerTeleport()
{
	if (!Z_Registration_Info_UClass_UPlayerTeleport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerTeleport.OuterSingleton, Z_Construct_UClass_UPlayerTeleport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerTeleport.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UPlayerTeleport>()
{
	return UPlayerTeleport::StaticClass();
}
UPlayerTeleport::UPlayerTeleport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerTeleport);
UPlayerTeleport::~UPlayerTeleport() {}
// End Class UPlayerTeleport

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerTeleport_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerTeleport, UPlayerTeleport::StaticClass, TEXT("UPlayerTeleport"), &Z_Registration_Info_UClass_UPlayerTeleport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerTeleport), 2214609433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerTeleport_h_111622817(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerTeleport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerTeleport_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
