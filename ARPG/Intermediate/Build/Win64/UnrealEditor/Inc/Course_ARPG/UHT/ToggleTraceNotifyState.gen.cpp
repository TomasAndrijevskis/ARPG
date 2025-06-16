// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/ToggleTraceNotifyState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToggleTraceNotifyState() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UToggleTraceNotifyState();
COURSE_ARPG_API UClass* Z_Construct_UClass_UToggleTraceNotifyState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UToggleTraceNotifyState
void UToggleTraceNotifyState::StaticRegisterNativesUToggleTraceNotifyState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToggleTraceNotifyState);
UClass* Z_Construct_UClass_UToggleTraceNotifyState_NoRegister()
{
	return UToggleTraceNotifyState::StaticClass();
}
struct Z_Construct_UClass_UToggleTraceNotifyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animations/ToggleTraceNotifyState.h" },
		{ "ModuleRelativePath", "Public/Animations/ToggleTraceNotifyState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToggleTraceNotifyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UToggleTraceNotifyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UToggleTraceNotifyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UToggleTraceNotifyState_Statics::ClassParams = {
	&UToggleTraceNotifyState::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UToggleTraceNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UToggleTraceNotifyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UToggleTraceNotifyState()
{
	if (!Z_Registration_Info_UClass_UToggleTraceNotifyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToggleTraceNotifyState.OuterSingleton, Z_Construct_UClass_UToggleTraceNotifyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UToggleTraceNotifyState.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UToggleTraceNotifyState>()
{
	return UToggleTraceNotifyState::StaticClass();
}
UToggleTraceNotifyState::UToggleTraceNotifyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UToggleTraceNotifyState);
UToggleTraceNotifyState::~UToggleTraceNotifyState() {}
// End Class UToggleTraceNotifyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_ToggleTraceNotifyState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UToggleTraceNotifyState, UToggleTraceNotifyState::StaticClass, TEXT("UToggleTraceNotifyState"), &Z_Registration_Info_UClass_UToggleTraceNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToggleTraceNotifyState), 1965728319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_ToggleTraceNotifyState_h_788562777(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_ToggleTraceNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_ToggleTraceNotifyState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
