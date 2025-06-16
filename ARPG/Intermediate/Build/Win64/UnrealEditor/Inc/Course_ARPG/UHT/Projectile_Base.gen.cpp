// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Projectile_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectile_Base() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AProjectile_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AProjectile_Base_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AProjectile_Base Function DestroyProjectile
struct Z_Construct_UFunction_AProjectile_Base_DestroyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Projectile_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_DestroyProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, nullptr, "DestroyProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_DestroyProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectile_Base_DestroyProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AProjectile_Base_DestroyProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_Base_DestroyProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectile_Base::execDestroyProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyProjectile();
	P_NATIVE_END;
}
// End Class AProjectile_Base Function DestroyProjectile

// Begin Class AProjectile_Base Function HandleBeginOverlap
struct Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics
{
	struct Projectile_Base_eventHandleBeginOverlap_Parms
	{
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Projectile_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Projectile_Base_eventHandleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectile_Base, nullptr, "HandleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::Projectile_Base_eventHandleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::Projectile_Base_eventHandleBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProjectile_Base::execHandleBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBeginOverlap(Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class AProjectile_Base Function HandleBeginOverlap

// Begin Class AProjectile_Base
void AProjectile_Base::StaticRegisterNativesAProjectile_Base()
{
	UClass* Class = AProjectile_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyProjectile", &AProjectile_Base::execDestroyProjectile },
		{ "HandleBeginOverlap", &AProjectile_Base::execHandleBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectile_Base);
UClass* Z_Construct_UClass_AProjectile_Base_NoRegister()
{
	return AProjectile_Base::StaticClass();
}
struct Z_Construct_UClass_AProjectile_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Projectile_Base.h" },
		{ "ModuleRelativePath", "Public/Combat/Projectile_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitTemplate_MetaData[] = {
		{ "Category", "Projectile_Base" },
		{ "ModuleRelativePath", "Public/Combat/Projectile_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectile_Base_DestroyProjectile, "DestroyProjectile" }, // 723678561
		{ &Z_Construct_UFunction_AProjectile_Base_HandleBeginOverlap, "HandleBeginOverlap" }, // 403077949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectile_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitTemplate = { "HitTemplate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectile_Base, HitTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitTemplate_MetaData), NewProp_HitTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectile_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectile_Base_Statics::NewProp_HitTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectile_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectile_Base_Statics::ClassParams = {
	&AProjectile_Base::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProjectile_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectile_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectile_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectile_Base()
{
	if (!Z_Registration_Info_UClass_AProjectile_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectile_Base.OuterSingleton, Z_Construct_UClass_AProjectile_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectile_Base.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AProjectile_Base>()
{
	return AProjectile_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile_Base);
AProjectile_Base::~AProjectile_Base() {}
// End Class AProjectile_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectile_Base, AProjectile_Base::StaticClass, TEXT("AProjectile_Base"), &Z_Registration_Info_UClass_AProjectile_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectile_Base), 4028870372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_4059822734(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
