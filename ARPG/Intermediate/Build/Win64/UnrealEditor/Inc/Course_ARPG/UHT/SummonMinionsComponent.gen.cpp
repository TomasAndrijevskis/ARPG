// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/SummonMinionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSummonMinionsComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_USummonMinionsComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_USummonMinionsComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class USummonMinionsComponent
void USummonMinionsComponent::StaticRegisterNativesUSummonMinionsComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USummonMinionsComponent);
UClass* Z_Construct_UClass_USummonMinionsComponent_NoRegister()
{
	return USummonMinionsComponent::StaticClass();
}
struct Z_Construct_UClass_USummonMinionsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/SummonMinionsComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/SummonMinionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinionClass_MetaData[] = {
		{ "Category", "SummonMinionsComponent" },
		{ "ModuleRelativePath", "Public/Combat/SummonMinionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinionSpawnAmount_MetaData[] = {
		{ "Category", "SummonMinionsComponent" },
		{ "ModuleRelativePath", "Public/Combat/SummonMinionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDistance_MetaData[] = {
		{ "Category", "SummonMinionsComponent" },
		{ "ModuleRelativePath", "Public/Combat/SummonMinionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDistance_MetaData[] = {
		{ "Category", "SummonMinionsComponent" },
		{ "ModuleRelativePath", "Public/Combat/SummonMinionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_MinionClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinionSpawnAmount_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinionSpawnAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinSpawnDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSpawnDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USummonMinionsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinionClass = { "MinionClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USummonMinionsComponent, MinionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionClass_MetaData), NewProp_MinionClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinionSpawnAmount_Inner = { "MinionSpawnAmount", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinionSpawnAmount = { "MinionSpawnAmount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USummonMinionsComponent, MinionSpawnAmount), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinionSpawnAmount_MetaData), NewProp_MinionSpawnAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinSpawnDistance = { "MinSpawnDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USummonMinionsComponent, MinSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnDistance_MetaData), NewProp_MinSpawnDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MaxSpawnDistance = { "MaxSpawnDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USummonMinionsComponent, MaxSpawnDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpawnDistance_MetaData), NewProp_MaxSpawnDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USummonMinionsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinionSpawnAmount_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinionSpawnAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MinSpawnDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USummonMinionsComponent_Statics::NewProp_MaxSpawnDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USummonMinionsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USummonMinionsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USummonMinionsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USummonMinionsComponent_Statics::ClassParams = {
	&USummonMinionsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USummonMinionsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USummonMinionsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USummonMinionsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USummonMinionsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USummonMinionsComponent()
{
	if (!Z_Registration_Info_UClass_USummonMinionsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USummonMinionsComponent.OuterSingleton, Z_Construct_UClass_USummonMinionsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USummonMinionsComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<USummonMinionsComponent>()
{
	return USummonMinionsComponent::StaticClass();
}
USummonMinionsComponent::USummonMinionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USummonMinionsComponent);
USummonMinionsComponent::~USummonMinionsComponent() {}
// End Class USummonMinionsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_SummonMinionsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USummonMinionsComponent, USummonMinionsComponent::StaticClass, TEXT("USummonMinionsComponent"), &Z_Registration_Info_UClass_USummonMinionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USummonMinionsComponent), 3807711416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_SummonMinionsComponent_h_1183617248(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_SummonMinionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_SummonMinionsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
