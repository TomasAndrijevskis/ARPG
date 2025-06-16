// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/BossCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBossCharacter() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ABossCharacter();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UFighter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EEnemyStates();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABossCharacter Function DetectPawn
struct Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics
{
	struct BossCharacter_eventDetectPawn_Parms
	{
		APawn* DetectedPawn;
		APawn* PawnToDetect;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnToDetect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_DetectedPawn = { "DetectedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventDetectPawn_Parms, DetectedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_PawnToDetect = { "PawnToDetect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventDetectPawn_Parms, PawnToDetect), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_DetectedPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::NewProp_PawnToDetect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "DetectPawn", nullptr, nullptr, Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::BossCharacter_eventDetectPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::BossCharacter_eventDetectPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABossCharacter_DetectPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_DetectPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execDetectPawn)
{
	P_GET_OBJECT(APawn,Z_Param_DetectedPawn);
	P_GET_OBJECT(APawn,Z_Param_PawnToDetect);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetectPawn(Z_Param_DetectedPawn,Z_Param_PawnToDetect);
	P_NATIVE_END;
}
// End Class ABossCharacter Function DetectPawn

// Begin Class ABossCharacter Function FinishedDeathAnim
struct Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "FinishedDeathAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execFinishedDeathAnim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishedDeathAnim();
	P_NATIVE_END;
}
// End Class ABossCharacter Function FinishedDeathAnim

// Begin Class ABossCharacter Function HandleDeath
struct Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "HandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABossCharacter_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execHandleDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath();
	P_NATIVE_END;
}
// End Class ABossCharacter Function HandleDeath

// Begin Class ABossCharacter Function HandlePlayerDeath
struct Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "HandlePlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execHandlePlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerDeath();
	P_NATIVE_END;
}
// End Class ABossCharacter Function HandlePlayerDeath

// Begin Class ABossCharacter
void ABossCharacter::StaticRegisterNativesABossCharacter()
{
	UClass* Class = ABossCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetectPawn", &ABossCharacter::execDetectPawn },
		{ "FinishedDeathAnim", &ABossCharacter::execFinishedDeathAnim },
		{ "HandleDeath", &ABossCharacter::execHandleDeath },
		{ "HandlePlayerDeath", &ABossCharacter::execHandlePlayerDeath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABossCharacter);
UClass* Z_Construct_UClass_ABossCharacter_NoRegister()
{
	return ABossCharacter::StaticClass();
}
struct Z_Construct_UClass_ABossCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BossCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComp_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComp_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnim_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardXP_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RewardXP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABossCharacter_DetectPawn, "DetectPawn" }, // 1807264011
		{ &Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim, "FinishedDeathAnim" }, // 2517807459
		{ &Z_Construct_UFunction_ABossCharacter_HandleDeath, "HandleDeath" }, // 1304527931
		{ &Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath, "HandlePlayerDeath" }, // 2644662596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABossCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_StatsComp = { "StatsComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, StatsComp), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComp_MetaData), NewProp_StatsComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_CombatComp = { "CombatComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, CombatComp), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComp_MetaData), NewProp_CombatComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, InitialState), Z_Construct_UEnum_Course_ARPG_EEnemyStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialState_MetaData), NewProp_InitialState_MetaData) }; // 2644618420
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_DeathAnim = { "DeathAnim", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, DeathAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnim_MetaData), NewProp_DeathAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_RewardXP = { "RewardXP", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, RewardXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardXP_MetaData), NewProp_RewardXP_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABossCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_StatsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_CombatComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_InitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_DeathAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_RewardXP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABossCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(ABossCharacter, IEnemy), false },  // 766191187
	{ Z_Construct_UClass_UFighter_NoRegister, (int32)VTABLE_OFFSET(ABossCharacter, IFighter), false },  // 2323567720
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABossCharacter_Statics::ClassParams = {
	&ABossCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABossCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABossCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABossCharacter()
{
	if (!Z_Registration_Info_UClass_ABossCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABossCharacter.OuterSingleton, Z_Construct_UClass_ABossCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABossCharacter.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABossCharacter>()
{
	return ABossCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABossCharacter);
ABossCharacter::~ABossCharacter() {}
// End Class ABossCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_BossCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABossCharacter, ABossCharacter::StaticClass, TEXT("ABossCharacter"), &Z_Registration_Info_UClass_ABossCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossCharacter), 2026573974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_BossCharacter_h_721935748(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_BossCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_BossCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
