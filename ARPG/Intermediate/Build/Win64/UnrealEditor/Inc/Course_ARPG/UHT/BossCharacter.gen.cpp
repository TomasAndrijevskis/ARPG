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
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABossCharacter();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABossCharacter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBossHealthBar_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemyProjectileComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UFighter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EEnemyStates();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABossCharacter Function CreateBossWidget
struct Z_Construct_UFunction_ABossCharacter_CreateBossWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_CreateBossWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "CreateBossWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_CreateBossWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_CreateBossWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABossCharacter_CreateBossWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_CreateBossWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execCreateBossWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateBossWidget();
	P_NATIVE_END;
}
// End Class ABossCharacter Function CreateBossWidget

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "FinishedDeathAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim_Statics::Function_MetaDataParams) };
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

// Begin Class ABossCharacter Function GetBossHealthBarWidget
struct Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics
{
	struct BossCharacter_eventGetBossHealthBarWidget_Parms
	{
		UBossHealthBar* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventGetBossHealthBarWidget_Parms, ReturnValue), Z_Construct_UClass_UBossHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "GetBossHealthBarWidget", nullptr, nullptr, Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::BossCharacter_eventGetBossHealthBarWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::BossCharacter_eventGetBossHealthBarWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execGetBossHealthBarWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBossHealthBar**)Z_Param__Result=P_THIS->GetBossHealthBarWidget();
	P_NATIVE_END;
}
// End Class ABossCharacter Function GetBossHealthBarWidget

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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "HandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_HandleDeath_Statics::Function_MetaDataParams) };
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
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "HandlePlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath_Statics::Function_MetaDataParams) };
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

// Begin Class ABossCharacter Function ReceiveDamage
struct Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics
{
	struct BossCharacter_eventReceiveDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventReceiveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventReceiveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventReceiveDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BossCharacter_eventReceiveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABossCharacter, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::BossCharacter_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::BossCharacter_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABossCharacter_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABossCharacter_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABossCharacter::execReceiveDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class ABossCharacter Function ReceiveDamage

// Begin Class ABossCharacter
void ABossCharacter::StaticRegisterNativesABossCharacter()
{
	UClass* Class = ABossCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateBossWidget", &ABossCharacter::execCreateBossWidget },
		{ "DetectPawn", &ABossCharacter::execDetectPawn },
		{ "FinishedDeathAnim", &ABossCharacter::execFinishedDeathAnim },
		{ "GetBossHealthBarWidget", &ABossCharacter::execGetBossHealthBarWidget },
		{ "HandleDeath", &ABossCharacter::execHandleDeath },
		{ "HandlePlayerDeath", &ABossCharacter::execHandlePlayerDeath },
		{ "ReceiveDamage", &ABossCharacter::execReceiveDamage },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComp_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComp_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossHealthBarWidget_MetaData[] = {
		{ "Category", "BossCharacter" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossHealthBarWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/BossCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RewardXP;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BossHealthBarWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BossHealthBarWidgetRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABossCharacter_CreateBossWidget, "CreateBossWidget" }, // 684153863
		{ &Z_Construct_UFunction_ABossCharacter_DetectPawn, "DetectPawn" }, // 1807264011
		{ &Z_Construct_UFunction_ABossCharacter_FinishedDeathAnim, "FinishedDeathAnim" }, // 2979917188
		{ &Z_Construct_UFunction_ABossCharacter_GetBossHealthBarWidget, "GetBossHealthBarWidget" }, // 3056615204
		{ &Z_Construct_UFunction_ABossCharacter_HandleDeath, "HandleDeath" }, // 2005241168
		{ &Z_Construct_UFunction_ABossCharacter_HandlePlayerDeath, "HandlePlayerDeath" }, // 846598087
		{ &Z_Construct_UFunction_ABossCharacter_ReceiveDamage, "ReceiveDamage" }, // 3601987387
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_TraceComp = { "TraceComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, TraceComp), Z_Construct_UClass_UTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComp_MetaData), NewProp_TraceComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_ProjectileComp = { "ProjectileComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, ProjectileComp), Z_Construct_UClass_UEnemyProjectileComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileComp_MetaData), NewProp_ProjectileComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, InitialState), Z_Construct_UEnum_Course_ARPG_EEnemyStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialState_MetaData), NewProp_InitialState_MetaData) }; // 2644618420
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_DeathAnim = { "DeathAnim", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, DeathAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnim_MetaData), NewProp_DeathAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_RewardXP = { "RewardXP", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, RewardXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardXP_MetaData), NewProp_RewardXP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_BossHealthBarWidget = { "BossHealthBarWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, BossHealthBarWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UBossHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossHealthBarWidget_MetaData), NewProp_BossHealthBarWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_BossHealthBarWidgetRef = { "BossHealthBarWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, BossHealthBarWidgetRef), Z_Construct_UClass_UBossHealthBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossHealthBarWidgetRef_MetaData), NewProp_BossHealthBarWidgetRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, ControllerRef), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRef_MetaData), NewProp_ControllerRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABossCharacter_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABossCharacter, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABossCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_StatsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_CombatComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_TraceComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_ProjectileComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_InitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_DeathAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_RewardXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_BossHealthBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_BossHealthBarWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_ControllerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABossCharacter_Statics::NewProp_BlackboardComp,
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
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABossCharacter, ABossCharacter::StaticClass, TEXT("ABossCharacter"), &Z_Registration_Info_UClass_ABossCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABossCharacter), 1548654741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_782331440(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
