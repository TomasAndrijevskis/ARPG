// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/GroundSmashComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundSmashComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AGroundSmashArea_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UGroundSmashComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UGroundSmashComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UGroundSmashComponent
void UGroundSmashComponent::StaticRegisterNativesUGroundSmashComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroundSmashComponent);
UClass* Z_Construct_UClass_UGroundSmashComponent_NoRegister()
{
	return UGroundSmashComponent::StaticClass();
}
struct Z_Construct_UClass_UGroundSmashComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/GroundSmashComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/GroundSmashComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnSocketName_MetaData[] = {
		{ "Category", "GroundSmashComponent" },
		{ "ModuleRelativePath", "Public/Combat/GroundSmashComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleClass_MetaData[] = {
		{ "Category", "GroundSmashComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//FX_Trail_L_03\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/GroundSmashComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FX_Trail_L_03" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSmashAreaClass_MetaData[] = {
		{ "Category", "GroundSmashComponent" },
		{ "ModuleRelativePath", "Public/Combat/GroundSmashComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSmashAreaActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/GroundSmashComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpawnSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GroundSmashAreaClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GroundSmashAreaActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroundSmashComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_SpawnSocketName = { "SpawnSocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroundSmashComponent, SpawnSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnSocketName_MetaData), NewProp_SpawnSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_ParticleClass = { "ParticleClass", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroundSmashComponent, ParticleClass), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleClass_MetaData), NewProp_ParticleClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_GroundSmashAreaClass = { "GroundSmashAreaClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroundSmashComponent, GroundSmashAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSmashAreaClass_MetaData), NewProp_GroundSmashAreaClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_GroundSmashAreaActor = { "GroundSmashAreaActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGroundSmashComponent, GroundSmashAreaActor), Z_Construct_UClass_AGroundSmashArea_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSmashAreaActor_MetaData), NewProp_GroundSmashAreaActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroundSmashComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_SpawnSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_ParticleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_GroundSmashAreaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroundSmashComponent_Statics::NewProp_GroundSmashAreaActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundSmashComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGroundSmashComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundSmashComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroundSmashComponent_Statics::ClassParams = {
	&UGroundSmashComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGroundSmashComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGroundSmashComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGroundSmashComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGroundSmashComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGroundSmashComponent()
{
	if (!Z_Registration_Info_UClass_UGroundSmashComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroundSmashComponent.OuterSingleton, Z_Construct_UClass_UGroundSmashComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGroundSmashComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UGroundSmashComponent>()
{
	return UGroundSmashComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGroundSmashComponent);
UGroundSmashComponent::~UGroundSmashComponent() {}
// End Class UGroundSmashComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGroundSmashComponent, UGroundSmashComponent::StaticClass, TEXT("UGroundSmashComponent"), &Z_Registration_Info_UClass_UGroundSmashComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroundSmashComponent), 254904273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashComponent_h_592143888(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
