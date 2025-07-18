// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/SaveGame/Bonfire.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonfire() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ABonfire();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABonfire_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABonfire
void ABonfire::StaticRegisterNativesABonfire()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonfire);
UClass* Z_Construct_UClass_ABonfire_NoRegister()
{
	return ABonfire::StaticClass();
}
struct Z_Construct_UClass_ABonfire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGame/Bonfire.h" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonfireMesh_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonfireCollision_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRangeCollision_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BonfireMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BonfireCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionRangeCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonfire>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireMesh = { "BonfireMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, BonfireMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonfireMesh_MetaData), NewProp_BonfireMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireCollision = { "BonfireCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, BonfireCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonfireCollision_MetaData), NewProp_BonfireCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionRangeCollision = { "InteractionRangeCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, InteractionRangeCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRangeCollision_MetaData), NewProp_InteractionRangeCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonfire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionRangeCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABonfire_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonfire_Statics::ClassParams = {
	&ABonfire::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABonfire_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::Class_MetaDataParams), Z_Construct_UClass_ABonfire_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABonfire()
{
	if (!Z_Registration_Info_UClass_ABonfire.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonfire.OuterSingleton, Z_Construct_UClass_ABonfire_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABonfire.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABonfire>()
{
	return ABonfire::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABonfire);
ABonfire::~ABonfire() {}
// End Class ABonfire

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABonfire, ABonfire::StaticClass, TEXT("ABonfire"), &Z_Registration_Info_UClass_ABonfire, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonfire), 2655209184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_2751933848(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
