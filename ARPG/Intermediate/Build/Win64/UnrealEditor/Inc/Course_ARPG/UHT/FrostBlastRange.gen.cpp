// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/FrostBlastRange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrostBlastRange() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AFrostBlastRange();
COURSE_ARPG_API UClass* Z_Construct_UClass_AFrostBlastRange_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AFrostBlastRange Function CheckEnemiesInRange
struct Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/FrostBlastRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFrostBlastRange, nullptr, "CheckEnemiesInRange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFrostBlastRange::execCheckEnemiesInRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckEnemiesInRange();
	P_NATIVE_END;
}
// End Class AFrostBlastRange Function CheckEnemiesInRange

// Begin Class AFrostBlastRange
void AFrostBlastRange::StaticRegisterNativesAFrostBlastRange()
{
	UClass* Class = AFrostBlastRange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckEnemiesInRange", &AFrostBlastRange::execCheckEnemiesInRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFrostBlastRange);
UClass* Z_Construct_UClass_AFrostBlastRange_NoRegister()
{
	return AFrostBlastRange::StaticClass();
}
struct Z_Construct_UClass_AFrostBlastRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/FrostBlastRange.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/FrostBlastRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "FrostBlastRange" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/FrostBlastRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEffect_MetaData[] = {
		{ "Category", "FrostBlastRange" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/FrostBlastRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrozenEffectClass_MetaData[] = {
		{ "Category", "FrostBlastRange" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/FrostBlastRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RangeEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrozenEffectClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFrostBlastRange_CheckEnemiesInRange, "CheckEnemiesInRange" }, // 332683661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFrostBlastRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrostBlastRange_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrostBlastRange, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrostBlastRange_Statics::NewProp_RangeEffect = { "RangeEffect", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrostBlastRange, RangeEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEffect_MetaData), NewProp_RangeEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFrostBlastRange_Statics::NewProp_FrozenEffectClass = { "FrozenEffectClass", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFrostBlastRange, FrozenEffectClass), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrozenEffectClass_MetaData), NewProp_FrozenEffectClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFrostBlastRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrostBlastRange_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrostBlastRange_Statics::NewProp_RangeEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFrostBlastRange_Statics::NewProp_FrozenEffectClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrostBlastRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFrostBlastRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFrostBlastRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFrostBlastRange_Statics::ClassParams = {
	&AFrostBlastRange::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFrostBlastRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFrostBlastRange_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFrostBlastRange_Statics::Class_MetaDataParams), Z_Construct_UClass_AFrostBlastRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFrostBlastRange()
{
	if (!Z_Registration_Info_UClass_AFrostBlastRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFrostBlastRange.OuterSingleton, Z_Construct_UClass_AFrostBlastRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFrostBlastRange.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AFrostBlastRange>()
{
	return AFrostBlastRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFrostBlastRange);
AFrostBlastRange::~AFrostBlastRange() {}
// End Class AFrostBlastRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FrostBlastRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFrostBlastRange, AFrostBlastRange::StaticClass, TEXT("AFrostBlastRange"), &Z_Registration_Info_UClass_AFrostBlastRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFrostBlastRange), 3601759323U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FrostBlastRange_h_1738808230(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FrostBlastRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FrostBlastRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
