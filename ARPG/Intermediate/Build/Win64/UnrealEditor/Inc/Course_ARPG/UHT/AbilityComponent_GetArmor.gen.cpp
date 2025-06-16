// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_GetArmor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_GetArmor() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_GetArmor();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_GetArmor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_GetArmor Function GiveArmor
struct Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_GetArmor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_GetArmor, nullptr, "GiveArmor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_GetArmor::execGiveArmor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveArmor();
	P_NATIVE_END;
}
// End Class UAbilityComponent_GetArmor Function GiveArmor

// Begin Class UAbilityComponent_GetArmor
void UAbilityComponent_GetArmor::StaticRegisterNativesUAbilityComponent_GetArmor()
{
	UClass* Class = UAbilityComponent_GetArmor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GiveArmor", &UAbilityComponent_GetArmor::execGiveArmor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_GetArmor);
UClass* Z_Construct_UClass_UAbilityComponent_GetArmor_NoRegister()
{
	return UAbilityComponent_GetArmor::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_GetArmor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/Abilities/AbilityComponent_GetArmor.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_GetArmor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[] = {
		{ "Category", "AbilityComponent_GetArmor" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_GetArmor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageReductionPercent_MetaData[] = {
		{ "Category", "AbilityComponent_GetArmor" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_GetArmor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCasting_MetaData[] = {
		{ "Category", "AbilityComponent_GetArmor" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_GetArmor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Armor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageReductionPercent;
	static void NewProp_bIsCasting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCasting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_GetArmor_GiveArmor, "GiveArmor" }, // 3091579760
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_GetArmor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_GetArmor, Armor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Armor_MetaData), NewProp_Armor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_DamageReductionPercent = { "DamageReductionPercent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_GetArmor, DamageReductionPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageReductionPercent_MetaData), NewProp_DamageReductionPercent_MetaData) };
void Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_bIsCasting_SetBit(void* Obj)
{
	((UAbilityComponent_GetArmor*)Obj)->bIsCasting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_bIsCasting = { "bIsCasting", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAbilityComponent_GetArmor), &Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_bIsCasting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCasting_MetaData), NewProp_bIsCasting_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_Armor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_DamageReductionPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::NewProp_bIsCasting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::ClassParams = {
	&UAbilityComponent_GetArmor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_GetArmor()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_GetArmor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_GetArmor.OuterSingleton, Z_Construct_UClass_UAbilityComponent_GetArmor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_GetArmor.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_GetArmor>()
{
	return UAbilityComponent_GetArmor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_GetArmor);
UAbilityComponent_GetArmor::~UAbilityComponent_GetArmor() {}
// End Class UAbilityComponent_GetArmor

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_GetArmor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_GetArmor, UAbilityComponent_GetArmor::StaticClass, TEXT("UAbilityComponent_GetArmor"), &Z_Registration_Info_UClass_UAbilityComponent_GetArmor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_GetArmor), 3872227169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_GetArmor_h_4282939398(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_GetArmor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_GetArmor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
