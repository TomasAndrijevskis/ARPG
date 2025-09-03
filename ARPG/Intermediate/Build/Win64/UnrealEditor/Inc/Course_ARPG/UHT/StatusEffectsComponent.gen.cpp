// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/StatusEffectsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectsComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusEffectsComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusEffectsComponent_NoRegister();
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectData();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin ScriptStruct FStatusEffectData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatusEffectData;
class UScriptStruct* FStatusEffectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatusEffectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatusEffectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusEffectData, (UObject*)Z_Construct_UPackage__Script_Course_ARPG(), TEXT("StatusEffectData"));
	}
	return Z_Registration_Info_UScriptStruct_StatusEffectData.OuterSingleton;
}
template<> COURSE_ARPG_API UScriptStruct* StaticStruct<FStatusEffectData>()
{
	return FStatusEffectData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStatusEffectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusEffectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusEffectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
	nullptr,
	&NewStructOps,
	"StatusEffectData",
	nullptr,
	0,
	sizeof(FStatusEffectData),
	alignof(FStatusEffectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStatusEffectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectData()
{
	if (!Z_Registration_Info_UScriptStruct_StatusEffectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatusEffectData.InnerSingleton, Z_Construct_UScriptStruct_FStatusEffectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StatusEffectData.InnerSingleton;
}
// End ScriptStruct FStatusEffectData

// Begin Class UStatusEffectsComponent Function Burn
struct Z_Construct_UFunction_UStatusEffectsComponent_Burn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectsComponent_Burn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectsComponent, nullptr, "Burn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_Burn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectsComponent_Burn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusEffectsComponent_Burn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectsComponent_Burn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusEffectsComponent::execBurn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Burn();
	P_NATIVE_END;
}
// End Class UStatusEffectsComponent Function Burn

// Begin Class UStatusEffectsComponent Function Poison
struct Z_Construct_UFunction_UStatusEffectsComponent_Poison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectsComponent_Poison_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectsComponent, nullptr, "Poison", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_Poison_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectsComponent_Poison_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusEffectsComponent_Poison()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectsComponent_Poison_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusEffectsComponent::execPoison)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Poison();
	P_NATIVE_END;
}
// End Class UStatusEffectsComponent Function Poison

// Begin Class UStatusEffectsComponent Function StopEffect
struct Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics
{
	struct StatusEffectsComponent_eventStopEffect_Parms
	{
		FStatusEffectData Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusEffectsComponent_eventStopEffect_Parms, Data), Z_Construct_UScriptStruct_FStatusEffectData, METADATA_PARAMS(0, nullptr) }; // 3537026047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectsComponent, nullptr, "StopEffect", nullptr, nullptr, Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::StatusEffectsComponent_eventStopEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::StatusEffectsComponent_eventStopEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusEffectsComponent_StopEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectsComponent_StopEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusEffectsComponent::execStopEffect)
{
	P_GET_STRUCT_REF(FStatusEffectData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopEffect(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UStatusEffectsComponent Function StopEffect

// Begin Class UStatusEffectsComponent Function StopFreeze
struct Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectsComponent, nullptr, "StopFreeze", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusEffectsComponent::execStopFreeze)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopFreeze();
	P_NATIVE_END;
}
// End Class UStatusEffectsComponent Function StopFreeze

// Begin Class UStatusEffectsComponent
void UStatusEffectsComponent::StaticRegisterNativesUStatusEffectsComponent()
{
	UClass* Class = UStatusEffectsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Burn", &UStatusEffectsComponent::execBurn },
		{ "Poison", &UStatusEffectsComponent::execPoison },
		{ "StopEffect", &UStatusEffectsComponent::execStopEffect },
		{ "StopFreeze", &UStatusEffectsComponent::execStopFreeze },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusEffectsComponent);
UClass* Z_Construct_UClass_UStatusEffectsComponent_NoRegister()
{
	return UStatusEffectsComponent::StaticClass();
}
struct Z_Construct_UClass_UStatusEffectsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/StatusEffectsComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrozenEffectRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BurnEffectRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoisonEffectRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "StatusEffectsComponent" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectScale_MetaData[] = {
		{ "Category", "StatusEffectsComponent" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityCompRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrozenEffectRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BurnEffectRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoisonEffectRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterRef;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EffectScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityCompRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusEffectsComponent_Burn, "Burn" }, // 3162985827
		{ &Z_Construct_UFunction_UStatusEffectsComponent_Poison, "Poison" }, // 3715770423
		{ &Z_Construct_UFunction_UStatusEffectsComponent_StopEffect, "StopEffect" }, // 2826247846
		{ &Z_Construct_UFunction_UStatusEffectsComponent_StopFreeze, "StopFreeze" }, // 1245890619
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffectsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_FrozenEffectRef = { "FrozenEffectRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, FrozenEffectRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrozenEffectRef_MetaData), NewProp_FrozenEffectRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_BurnEffectRef = { "BurnEffectRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, BurnEffectRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnEffectRef_MetaData), NewProp_BurnEffectRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_PoisonEffectRef = { "PoisonEffectRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, PoisonEffectRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoisonEffectRef_MetaData), NewProp_PoisonEffectRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_CharacterRef = { "CharacterRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, CharacterRef), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRef_MetaData), NewProp_CharacterRef_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_EffectScale = { "EffectScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, EffectScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectScale_MetaData), NewProp_EffectScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_AbilityCompRef = { "AbilityCompRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, AbilityCompRef), Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityCompRef_MetaData), NewProp_AbilityCompRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusEffectsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_FrozenEffectRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_BurnEffectRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_PoisonEffectRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_CharacterRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_EffectScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_AbilityCompRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatusEffectsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffectsComponent_Statics::ClassParams = {
	&UStatusEffectsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatusEffectsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusEffectsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusEffectsComponent()
{
	if (!Z_Registration_Info_UClass_UStatusEffectsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusEffectsComponent.OuterSingleton, Z_Construct_UClass_UStatusEffectsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusEffectsComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UStatusEffectsComponent>()
{
	return UStatusEffectsComponent::StaticClass();
}
UStatusEffectsComponent::UStatusEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusEffectsComponent);
UStatusEffectsComponent::~UStatusEffectsComponent() {}
// End Class UStatusEffectsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStatusEffectData::StaticStruct, Z_Construct_UScriptStruct_FStatusEffectData_Statics::NewStructOps, TEXT("StatusEffectData"), &Z_Registration_Info_UScriptStruct_StatusEffectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatusEffectData), 3537026047U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusEffectsComponent, UStatusEffectsComponent::StaticClass, TEXT("UStatusEffectsComponent"), &Z_Registration_Info_UClass_UStatusEffectsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusEffectsComponent), 478746956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_3448246824(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
