// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/Abilities/AbilityComponent_FrostBlast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityComponent_FrostBlast() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AFrostBlastRange_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_FrostBlast();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_FrostBlast_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UAbilityComponent_FrostBlast Function CompleteAbility
struct Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_FrostBlast, nullptr, "CompleteAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_FrostBlast::execCompleteAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteAbility();
	P_NATIVE_END;
}
// End Class UAbilityComponent_FrostBlast Function CompleteAbility

// Begin Class UAbilityComponent_FrostBlast Function StartAbility
struct Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityComponent_FrostBlast, nullptr, "StartAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAbilityComponent_FrostBlast::execStartAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartAbility();
	P_NATIVE_END;
}
// End Class UAbilityComponent_FrostBlast Function StartAbility

// Begin Class UAbilityComponent_FrostBlast
void UAbilityComponent_FrostBlast::StaticRegisterNativesUAbilityComponent_FrostBlast()
{
	UClass* Class = UAbilityComponent_FrostBlast::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompleteAbility", &UAbilityComponent_FrostBlast::execCompleteAbility },
		{ "StartAbility", &UAbilityComponent_FrostBlast::execStartAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityComponent_FrostBlast);
UClass* Z_Construct_UClass_UAbilityComponent_FrostBlast_NoRegister()
{
	return UAbilityComponent_FrostBlast::StaticClass();
}
struct Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/Abilities/AbilityComponent_FrostBlast.h" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialBlast_MetaData[] = {
		{ "Category", "AbilityComponent_FrostBlast" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Warmup_MetaData[] = {
		{ "Category", "AbilityComponent_FrostBlast" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "AbilityComponent_FrostBlast" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrostBlastRangeActor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ik_foot_root\n" },
#endif
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ik_foot_root" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrostBlastClass_MetaData[] = {
		{ "Category", "AbilityComponent_FrostBlast" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "AbilityComponent_FrostBlast" },
		{ "ModuleRelativePath", "Public/Combat/Abilities/AbilityComponent_FrostBlast.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialBlast;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Warmup;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrostBlastRangeActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FrostBlastClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityComponent_FrostBlast_CompleteAbility, "CompleteAbility" }, // 1354267060
		{ &Z_Construct_UFunction_UAbilityComponent_FrostBlast_StartAbility, "StartAbility" }, // 3469588358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityComponent_FrostBlast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_InitialBlast = { "InitialBlast", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FrostBlast, InitialBlast), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialBlast_MetaData), NewProp_InitialBlast_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_Warmup = { "Warmup", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FrostBlast, Warmup), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Warmup_MetaData), NewProp_Warmup_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FrostBlast, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_FrostBlastRangeActor = { "FrostBlastRangeActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FrostBlast, FrostBlastRangeActor), Z_Construct_UClass_AFrostBlastRange_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrostBlastRangeActor_MetaData), NewProp_FrostBlastRangeActor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_FrostBlastClass = { "FrostBlastClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FrostBlast, FrostBlastClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrostBlastClass_MetaData), NewProp_FrostBlastClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilityComponent_FrostBlast, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_InitialBlast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_Warmup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_FrostBlastRangeActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_FrostBlastClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilityComponent_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::ClassParams = {
	&UAbilityComponent_FrostBlast::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAbilityComponent_FrostBlast()
{
	if (!Z_Registration_Info_UClass_UAbilityComponent_FrostBlast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityComponent_FrostBlast.OuterSingleton, Z_Construct_UClass_UAbilityComponent_FrostBlast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAbilityComponent_FrostBlast.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UAbilityComponent_FrostBlast>()
{
	return UAbilityComponent_FrostBlast::StaticClass();
}
UAbilityComponent_FrostBlast::UAbilityComponent_FrostBlast() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityComponent_FrostBlast);
UAbilityComponent_FrostBlast::~UAbilityComponent_FrostBlast() {}
// End Class UAbilityComponent_FrostBlast

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FrostBlast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityComponent_FrostBlast, UAbilityComponent_FrostBlast::StaticClass, TEXT("UAbilityComponent_FrostBlast"), &Z_Registration_Info_UClass_UAbilityComponent_FrostBlast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityComponent_FrostBlast), 4068590157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FrostBlast_h_3862525636(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FrostBlast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_FrostBlast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
