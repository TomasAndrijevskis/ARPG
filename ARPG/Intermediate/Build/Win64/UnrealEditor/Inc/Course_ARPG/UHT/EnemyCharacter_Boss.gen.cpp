// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EnemyCharacter_Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Boss() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Boss();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Boss_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossHealthBar_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AEnemyCharacter_Boss Function CheckSecondPhase
struct Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics
{
	struct EnemyCharacter_Boss_eventCheckSecondPhase_Parms
	{
		float CurrentHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Boss_eventCheckSecondPhase_Parms, CurrentHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Boss, nullptr, "CheckSecondPhase", nullptr, nullptr, Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::EnemyCharacter_Boss_eventCheckSecondPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::EnemyCharacter_Boss_eventCheckSecondPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Boss::execCheckSecondPhase)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckSecondPhase(Z_Param_CurrentHealth);
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Boss Function CheckSecondPhase

// Begin Class AEnemyCharacter_Boss
void AEnemyCharacter_Boss::StaticRegisterNativesAEnemyCharacter_Boss()
{
	UClass* Class = AEnemyCharacter_Boss::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckSecondPhase", &AEnemyCharacter_Boss::execCheckSecondPhase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Boss);
UClass* Z_Construct_UClass_AEnemyCharacter_Boss_NoRegister()
{
	return AEnemyCharacter_Boss::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Boss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter_Boss.h" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidgetRef_MetaData[] = {
		{ "Category", "EnemyCharacter_Boss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[] = {
		{ "Category", "EnemyCharacter_Boss" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondPhaseHealthPercent_MetaData[] = {
		{ "Category", "EnemyCharacter_Boss" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTransitionMontage_MetaData[] = {
		{ "Category", "EnemyCharacter_Boss" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAnimReductionTime_MetaData[] = {
		{ "Category", "EnemyCharacter_Boss" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossName_MetaData[] = {
		{ "Category", "EnemyCharacter_Boss" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Boss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidgetRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HealthBarWidget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondPhaseHealthPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhaseTransitionMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackAnimReductionTime;
	static const UECodeGen_Private::FTextPropertyParams NewProp_BossName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_Boss_CheckSecondPhase, "CheckSecondPhase" }, // 3996320447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Boss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_HealthBarWidgetRef = { "HealthBarWidgetRef", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Boss, HealthBarWidgetRef), Z_Construct_UClass_UBossHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidgetRef_MetaData), NewProp_HealthBarWidgetRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Boss, HealthBarWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBossHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBarWidget_MetaData), NewProp_HealthBarWidget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_SecondPhaseHealthPercent = { "SecondPhaseHealthPercent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Boss, SecondPhaseHealthPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondPhaseHealthPercent_MetaData), NewProp_SecondPhaseHealthPercent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_PhaseTransitionMontage = { "PhaseTransitionMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Boss, PhaseTransitionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTransitionMontage_MetaData), NewProp_PhaseTransitionMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_AttackAnimReductionTime = { "AttackAnimReductionTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Boss, AttackAnimReductionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAnimReductionTime_MetaData), NewProp_AttackAnimReductionTime_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_BossName = { "BossName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Boss, BossName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossName_MetaData), NewProp_BossName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Boss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_HealthBarWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_HealthBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_SecondPhaseHealthPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_PhaseTransitionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_AttackAnimReductionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Boss_Statics::NewProp_BossName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Boss_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Boss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemyCharacter_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Boss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Boss_Statics::ClassParams = {
	&AEnemyCharacter_Boss::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyCharacter_Boss_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Boss_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Boss_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Boss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter_Boss()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter_Boss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Boss.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Boss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter_Boss.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AEnemyCharacter_Boss>()
{
	return AEnemyCharacter_Boss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Boss);
AEnemyCharacter_Boss::~AEnemyCharacter_Boss() {}
// End Class AEnemyCharacter_Boss

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Boss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Boss, AEnemyCharacter_Boss::StaticClass, TEXT("AEnemyCharacter_Boss"), &Z_Registration_Info_UClass_AEnemyCharacter_Boss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Boss), 515392462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Boss_h_2177838789(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Boss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
