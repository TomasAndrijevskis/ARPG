// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/GroundSmashArea.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroundSmashArea() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AGroundSmashArea();
COURSE_ARPG_API UClass* Z_Construct_UClass_AGroundSmashArea_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AGroundSmashArea Function CheckPlayerInRange
struct Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/GroundSmashArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGroundSmashArea, nullptr, "CheckPlayerInRange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGroundSmashArea::execCheckPlayerInRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckPlayerInRange();
	P_NATIVE_END;
}
// End Class AGroundSmashArea Function CheckPlayerInRange

// Begin Class AGroundSmashArea
void AGroundSmashArea::StaticRegisterNativesAGroundSmashArea()
{
	UClass* Class = AGroundSmashArea::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckPlayerInRange", &AGroundSmashArea::execCheckPlayerInRange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroundSmashArea);
UClass* Z_Construct_UClass_AGroundSmashArea_NoRegister()
{
	return AGroundSmashArea::StaticClass();
}
struct Z_Construct_UClass_AGroundSmashArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/GroundSmashArea.h" },
		{ "ModuleRelativePath", "Public/Combat/GroundSmashArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "GroundSmashArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/GroundSmashArea.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeEffect_MetaData[] = {
		{ "Category", "GroundSmashArea" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/GroundSmashArea.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RangeEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGroundSmashArea_CheckPlayerInRange, "CheckPlayerInRange" }, // 3030261050
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroundSmashArea>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroundSmashArea_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroundSmashArea, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGroundSmashArea_Statics::NewProp_RangeEffect = { "RangeEffect", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGroundSmashArea, RangeEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeEffect_MetaData), NewProp_RangeEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroundSmashArea_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroundSmashArea_Statics::NewProp_Collision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroundSmashArea_Statics::NewProp_RangeEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroundSmashArea_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGroundSmashArea_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGroundSmashArea_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroundSmashArea_Statics::ClassParams = {
	&AGroundSmashArea::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGroundSmashArea_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGroundSmashArea_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGroundSmashArea_Statics::Class_MetaDataParams), Z_Construct_UClass_AGroundSmashArea_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGroundSmashArea()
{
	if (!Z_Registration_Info_UClass_AGroundSmashArea.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroundSmashArea.OuterSingleton, Z_Construct_UClass_AGroundSmashArea_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGroundSmashArea.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AGroundSmashArea>()
{
	return AGroundSmashArea::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGroundSmashArea);
AGroundSmashArea::~AGroundSmashArea() {}
// End Class AGroundSmashArea

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashArea_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGroundSmashArea, AGroundSmashArea::StaticClass, TEXT("AGroundSmashArea"), &Z_Registration_Info_UClass_AGroundSmashArea, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroundSmashArea), 1963791505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashArea_h_3255468906(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashArea_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_GroundSmashArea_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
