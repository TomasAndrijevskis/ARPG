// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Interfaces/Fighter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFighter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COURSE_ARPG_API UClass* Z_Construct_UClass_UFighter();
COURSE_ARPG_API UClass* Z_Construct_UClass_UFighter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Interface UFighter
void UFighter::StaticRegisterNativesUFighter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFighter);
UClass* Z_Construct_UClass_UFighter_NoRegister()
{
	return UFighter::StaticClass();
}
struct Z_Construct_UClass_UFighter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Fighter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFighter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFighter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFighter_Statics::ClassParams = {
	&UFighter::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFighter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFighter()
{
	if (!Z_Registration_Info_UClass_UFighter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFighter.OuterSingleton, Z_Construct_UClass_UFighter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFighter.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UFighter>()
{
	return UFighter::StaticClass();
}
UFighter::UFighter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFighter);
UFighter::~UFighter() {}
// End Interface UFighter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Fighter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFighter, UFighter::StaticClass, TEXT("UFighter"), &Z_Registration_Info_UClass_UFighter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFighter), 2323567720U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Fighter_h_2071853880(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Fighter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Fighter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
