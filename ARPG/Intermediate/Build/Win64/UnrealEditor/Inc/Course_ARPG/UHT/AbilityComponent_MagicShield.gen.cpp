// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_MagicShield.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_MagicShield() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMagicShield_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_MagicShield();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_MagicShield_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Player();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_MagicShield Function SpawnShield
struct Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_MagicShield.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_MagicShield, nullptr, "SpawnShield", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_MagicShield::execSpawnShield)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnShield();
	P_NATIVE_END;
}
// End Class UAbilityComponent_MagicShield Function SpawnShield

// Begin Class UAbilityComponent_MagicShield
void UAbilityComponent_MagicShield::StaticRegisterNativesUAbilityComponent_MagicShield()
{
	UClass* Class = UAbilityComponent_MagicShield::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnShield", &UAbilityComponent_MagicShield::execSpawnShield },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_MagicShield);
UClass* Z_Construct_UClass_UAbilityComponent_MagicShield_NoRegister()
{
	return UAbilityComponent_MagicShield::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_MagicShield_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Combat/Abilities/AbilityComponent_MagicShield.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_MagicShield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_MagicShield.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShieldClass_MetaData[] = {
		{ "Category", "AbilityComponent_MagicShield" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_MagicShield.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShieldActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ShieldClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_MagicShield_SpawnShield, "SpawnShield" }, // 3431141618
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_MagicShield>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::NewProp_ShieldActor = { "ShieldActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_MagicShield, ShieldActor), Z_Construct_UClass_AMagicShield_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldActor_MetaData), NewProp_ShieldActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::NewProp_ShieldClass = { "ShieldClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_MagicShield, ShieldClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShieldClass_MetaData), NewProp_ShieldClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::NewProp_ShieldActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::NewProp_ShieldClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Player,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::ClassParams = {
	&UAbilityComponent_MagicShield::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_MagicShield()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_MagicShield.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_MagicShield.OuterSingleton, Z_Construct_UClass_UAbilityComponent_MagicShield_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_MagicShield.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_MagicShield>()
{
	return UAbilityComponent_MagicShield::StaticClass();
}
UAbilityComponent_MagicShield::UAbilityComponent_MagicShield() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_MagicShield);
UAbilityComponent_MagicShield::~UAbilityComponent_MagicShield() {}
// End Class UAbilityComponent_MagicShield

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_MagicShield_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_MagicShield, UAbilityComponent_MagicShield::StaticClass, TEXT("UAbilityComponent_MagicShield"), &Z_Registration_Info_UClass_UAbilityComponent_MagicShield, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_MagicShield), 200719757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_MagicShield_h_2820903287(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_MagicShield_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_MagicShield_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
