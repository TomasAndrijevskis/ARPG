// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/PoisonExplosionArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoisonExplosionArea() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_APoisonExplosionArea();
COURSE_ARPG_API UClass* Z_Construct_UClass_APoisonExplosionArea_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnExplosionTriggeredSignature
struct Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnExplosionTriggeredSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Course_ARPG_OnExplosionTriggeredSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExplosionTriggeredSignature_DelegateWrapper(const FMulticastScriptDelegate& OnExplosionTriggeredSignature)
{
	OnExplosionTriggeredSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnExplosionTriggeredSignature

// Begin Class APoisonExplosionArea Function CheckPlayerInRange
struct Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APoisonExplosionArea, nullptr, "CheckPlayerInRange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APoisonExplosionArea::execCheckPlayerInRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckPlayerInRange();
	P_NATIVE_END;
}
// End Class APoisonExplosionArea Function CheckPlayerInRange

// Begin Class APoisonExplosionArea
void APoisonExplosionArea::StaticRegisterNativesAPoisonExplosionArea()
{
	UClass* Class = APoisonExplosionArea::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckPlayerInRange", &APoisonExplosionArea::execCheckPlayerInRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APoisonExplosionArea);
UClass* Z_Construct_UClass_APoisonExplosionArea_NoRegister()
{
	return APoisonExplosionArea::StaticClass();
}
struct Z_Construct_UClass_APoisonExplosionArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/PoisonExplosionArea.h" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnEffect_MetaData[] = {
		{ "Category", "PoisonExplosionArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonArea_MetaData[] = {
		{ "Category", "PoisonExplosionArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/PoisonExplosionArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoisonArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APoisonExplosionArea_CheckPlayerInRange, "CheckPlayerInRange" }, // 1792515205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoisonExplosionArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoisonExplosionArea_Statics::NewProp_SpawnEffect = { "SpawnEffect", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoisonExplosionArea, SpawnEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnEffect_MetaData), NewProp_SpawnEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoisonExplosionArea_Statics::NewProp_PoisonArea = { "PoisonArea", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoisonExplosionArea, PoisonArea), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonArea_MetaData), NewProp_PoisonArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APoisonExplosionArea_Statics::NewProp_AbilityCompRef = { "AbilityCompRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APoisonExplosionArea, AbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCompRef_MetaData), NewProp_AbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APoisonExplosionArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoisonExplosionArea_Statics::NewProp_SpawnEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoisonExplosionArea_Statics::NewProp_PoisonArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APoisonExplosionArea_Statics::NewProp_AbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoisonExplosionArea_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APoisonExplosionArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APoisonExplosionArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APoisonExplosionArea_Statics::ClassParams = {
	&APoisonExplosionArea::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APoisonExplosionArea_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APoisonExplosionArea_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APoisonExplosionArea_Statics::Class_MetaDataParams), Z_Construct_UClass_APoisonExplosionArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APoisonExplosionArea()
{
	if (!Z_Registration_Info_UClass_APoisonExplosionArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APoisonExplosionArea.OuterSingleton, Z_Construct_UClass_APoisonExplosionArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APoisonExplosionArea.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<APoisonExplosionArea>()
{
	return APoisonExplosionArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APoisonExplosionArea);
APoisonExplosionArea::~APoisonExplosionArea() {}
// End Class APoisonExplosionArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APoisonExplosionArea, APoisonExplosionArea::StaticClass, TEXT("APoisonExplosionArea"), &Z_Registration_Info_UClass_APoisonExplosionArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APoisonExplosionArea), 1291918621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_1482454460(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
