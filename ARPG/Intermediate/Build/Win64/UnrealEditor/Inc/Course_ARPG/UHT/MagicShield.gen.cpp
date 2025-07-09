// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/MagicShield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicShield() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMagicShield();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMagicShield_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMagicShield
void AMagicShield::StaticRegisterNativesAMagicShield()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMagicShield);
UClass* Z_Construct_UClass_AMagicShield_NoRegister()
{
	return AMagicShield::StaticClass();
}
struct Z_Construct_UClass_AMagicShield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/MagicShield.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/MagicShield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldCollision_MetaData[] = {
		{ "Category", "MagicShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/MagicShield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MagicShield_MetaData[] = {
		{ "Category", "MagicShield" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/MagicShield.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MagicShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMagicShield>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicShield_Statics::NewProp_ShieldCollision = { "ShieldCollision", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicShield, ShieldCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldCollision_MetaData), NewProp_ShieldCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMagicShield_Statics::NewProp_MagicShield = { "MagicShield", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMagicShield, MagicShield), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MagicShield_MetaData), NewProp_MagicShield_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMagicShield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicShield_Statics::NewProp_ShieldCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMagicShield_Statics::NewProp_MagicShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicShield_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMagicShield_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicShield_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMagicShield_Statics::ClassParams = {
	&AMagicShield::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMagicShield_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMagicShield_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMagicShield_Statics::Class_MetaDataParams), Z_Construct_UClass_AMagicShield_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMagicShield()
{
	if (!Z_Registration_Info_UClass_AMagicShield.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMagicShield.OuterSingleton, Z_Construct_UClass_AMagicShield_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMagicShield.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMagicShield>()
{
	return AMagicShield::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMagicShield);
AMagicShield::~AMagicShield() {}
// End Class AMagicShield

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_MagicShield_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMagicShield, AMagicShield::StaticClass, TEXT("AMagicShield"), &Z_Registration_Info_UClass_AMagicShield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMagicShield), 3933541866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_MagicShield_h_946476140(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_MagicShield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_MagicShield_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
