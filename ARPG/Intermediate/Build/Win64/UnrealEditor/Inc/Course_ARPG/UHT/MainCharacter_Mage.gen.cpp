// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/MainCharacter_Mage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter_Mage() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Mage();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Mage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMainCharacter_Mage
void AMainCharacter_Mage::StaticRegisterNativesAMainCharacter_Mage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter_Mage);
UClass* Z_Construct_UClass_AMainCharacter_Mage_NoRegister()
{
	return AMainCharacter_Mage::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Mage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MainCharacter_Mage.h" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Mage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter_Mage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainCharacter_Mage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMainCharacter_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Mage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Mage_Statics::ClassParams = {
	&AMainCharacter_Mage::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Mage_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Mage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter_Mage()
{
	if (!Z_Registration_Info_UClass_AMainCharacter_Mage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter_Mage.OuterSingleton, Z_Construct_UClass_AMainCharacter_Mage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter_Mage.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMainCharacter_Mage>()
{
	return AMainCharacter_Mage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter_Mage);
AMainCharacter_Mage::~AMainCharacter_Mage() {}
// End Class AMainCharacter_Mage

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter_Mage, AMainCharacter_Mage::StaticClass, TEXT("AMainCharacter_Mage"), &Z_Registration_Info_UClass_AMainCharacter_Mage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter_Mage), 365343557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_3532395360(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Mage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
