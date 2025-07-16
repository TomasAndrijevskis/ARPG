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
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusEffectsComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusEffectsComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

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

// Begin Class UStatusEffectsComponent Function ReturnSpeed
struct Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectsComponent, nullptr, "ReturnSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusEffectsComponent::execReturnSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnSpeed();
	P_NATIVE_END;
}
// End Class UStatusEffectsComponent Function ReturnSpeed

// Begin Class UStatusEffectsComponent Function StopBurning
struct Z_Construct_UFunction_UStatusEffectsComponent_StopBurning_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectsComponent_StopBurning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectsComponent, nullptr, "StopBurning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectsComponent_StopBurning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectsComponent_StopBurning_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UStatusEffectsComponent_StopBurning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectsComponent_StopBurning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatusEffectsComponent::execStopBurning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBurning();
	P_NATIVE_END;
}
// End Class UStatusEffectsComponent Function StopBurning

// Begin Class UStatusEffectsComponent
void UStatusEffectsComponent::StaticRegisterNativesUStatusEffectsComponent()
{
	UClass* Class = UStatusEffectsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Burn", &UStatusEffectsComponent::execBurn },
		{ "ReturnSpeed", &UStatusEffectsComponent::execReturnSpeed },
		{ "StopBurning", &UStatusEffectsComponent::execStopBurning },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "StatusEffectsComponent" },
		{ "ModuleRelativePath", "Public/Combat/StatusEffectsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrozenEffectRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BurnEffectRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacterRef;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusEffectsComponent_Burn, "Burn" }, // 3162985827
		{ &Z_Construct_UFunction_UStatusEffectsComponent_ReturnSpeed, "ReturnSpeed" }, // 447756657
		{ &Z_Construct_UFunction_UStatusEffectsComponent_StopBurning, "StopBurning" }, // 4179840374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffectsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_FrozenEffectRef = { "FrozenEffectRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, FrozenEffectRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrozenEffectRef_MetaData), NewProp_FrozenEffectRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_BurnEffectRef = { "BurnEffectRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, BurnEffectRef), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BurnEffectRef_MetaData), NewProp_BurnEffectRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_EnemyCharacterRef = { "EnemyCharacterRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, EnemyCharacterRef), Z_Construct_UClass_AEnemyCharacter_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyCharacterRef_MetaData), NewProp_EnemyCharacterRef_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatusEffectsComponent, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusEffectsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_FrozenEffectRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_BurnEffectRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_EnemyCharacterRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffectsComponent_Statics::NewProp_SocketName,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusEffectsComponent, UStatusEffectsComponent::StaticClass, TEXT("UStatusEffectsComponent"), &Z_Registration_Info_UClass_UStatusEffectsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusEffectsComponent), 3833022621U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_3719946645(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
