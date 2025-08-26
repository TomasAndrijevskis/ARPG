// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/EnemyCharacter_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyCharacter_Base() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AEnemyCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_Enemy_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UFighter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatusEffectsComponent_NoRegister();
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

// Begin Class AEnemyCharacter_Base Function CreateHealthWidget
struct Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "CreateHealthWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execCreateHealthWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateHealthWidget();
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Base Function CreateHealthWidget

// Begin Class AEnemyCharacter_Base Function DetectPawn
struct Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics
{
	struct EnemyCharacter_Base_eventDetectPawn_Parms
	{
		APawn* DetectedPawn;
		APawn* PawnToDetect;
		TEnumAsByte<EEnemyStates> NewEnemyState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectedPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnToDetect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewEnemyState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::NewProp_DetectedPawn = { "DetectedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventDetectPawn_Parms, DetectedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::NewProp_PawnToDetect = { "PawnToDetect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventDetectPawn_Parms, PawnToDetect), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::NewProp_NewEnemyState = { "NewEnemyState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventDetectPawn_Parms, NewEnemyState), Z_Construct_UEnum_Course_ARPG_EEnemyStates, METADATA_PARAMS(0, nullptr) }; // 1265401373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::NewProp_DetectedPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::NewProp_PawnToDetect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::NewProp_NewEnemyState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "DetectPawn", nullptr, nullptr, Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::EnemyCharacter_Base_eventDetectPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::EnemyCharacter_Base_eventDetectPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execDetectPawn)
{
	P_GET_OBJECT(APawn,Z_Param_DetectedPawn);
	P_GET_OBJECT(APawn,Z_Param_PawnToDetect);
	P_GET_PROPERTY(FByteProperty,Z_Param_NewEnemyState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetectPawn(Z_Param_DetectedPawn,Z_Param_PawnToDetect,EEnemyStates(Z_Param_NewEnemyState));
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Base Function DetectPawn

// Begin Class AEnemyCharacter_Base Function FinishedDeathAnim
struct Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "FinishedDeathAnim", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execFinishedDeathAnim)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishedDeathAnim();
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Base Function FinishedDeathAnim

// Begin Class AEnemyCharacter_Base Function HandleDeath
struct Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "HandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execHandleDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath();
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Base Function HandleDeath

// Begin Class AEnemyCharacter_Base Function HandlePlayerDeath
struct Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "HandlePlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execHandlePlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePlayerDeath();
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Base Function HandlePlayerDeath

// Begin Class AEnemyCharacter_Base Function ReceiveDamage
struct Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics
{
	struct EnemyCharacter_Base_eventReceiveDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventReceiveDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventReceiveDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventReceiveDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventReceiveDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyCharacter_Base_eventReceiveDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "ReceiveDamage", nullptr, nullptr, Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::EnemyCharacter_Base_eventReceiveDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::EnemyCharacter_Base_eventReceiveDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execReceiveDamage)
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
// End Class AEnemyCharacter_Base Function ReceiveDamage

// Begin Class AEnemyCharacter_Base Function SetupAI
struct Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyCharacter_Base, nullptr, "SetupAI", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEnemyCharacter_Base::execSetupAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupAI();
	P_NATIVE_END;
}
// End Class AEnemyCharacter_Base Function SetupAI

// Begin Class AEnemyCharacter_Base
void AEnemyCharacter_Base::StaticRegisterNativesAEnemyCharacter_Base()
{
	UClass* Class = AEnemyCharacter_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateHealthWidget", &AEnemyCharacter_Base::execCreateHealthWidget },
		{ "DetectPawn", &AEnemyCharacter_Base::execDetectPawn },
		{ "FinishedDeathAnim", &AEnemyCharacter_Base::execFinishedDeathAnim },
		{ "HandleDeath", &AEnemyCharacter_Base::execHandleDeath },
		{ "HandlePlayerDeath", &AEnemyCharacter_Base::execHandlePlayerDeath },
		{ "ReceiveDamage", &AEnemyCharacter_Base::execReceiveDamage },
		{ "SetupAI", &AEnemyCharacter_Base::execSetupAI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyCharacter_Base);
UClass* Z_Construct_UClass_AEnemyCharacter_Base_NoRegister()
{
	return AEnemyCharacter_Base::StaticClass();
}
struct Z_Construct_UClass_AEnemyCharacter_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/EnemyCharacter_Base.h" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComp_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComp_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComp_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatusEffectsComp_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialState_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnim_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardXP_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomAttacks_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControllerRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "EnemyCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/EnemyCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatusEffectsComp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnim;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RewardXP;
	static void NewProp_bRandomAttacks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomAttacks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_CreateHealthWidget, "CreateHealthWidget" }, // 453377779
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_DetectPawn, "DetectPawn" }, // 1313332258
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_FinishedDeathAnim, "FinishedDeathAnim" }, // 1755501080
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_HandleDeath, "HandleDeath" }, // 3563767845
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_HandlePlayerDeath, "HandlePlayerDeath" }, // 3131908296
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_ReceiveDamage, "ReceiveDamage" }, // 1710603149
		{ &Z_Construct_UFunction_AEnemyCharacter_Base_SetupAI, "SetupAI" }, // 2086391254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyCharacter_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_StatsComp = { "StatsComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, StatsComp), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComp_MetaData), NewProp_StatsComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_CombatComp = { "CombatComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, CombatComp), Z_Construct_UClass_UCombatComponent_Enemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComp_MetaData), NewProp_CombatComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_TraceComp = { "TraceComp", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, TraceComp), Z_Construct_UClass_UTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComp_MetaData), NewProp_TraceComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_StatusEffectsComp = { "StatusEffectsComp", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, StatusEffectsComp), Z_Construct_UClass_UStatusEffectsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatusEffectsComp_MetaData), NewProp_StatusEffectsComp_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_InitialState = { "InitialState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, InitialState), Z_Construct_UEnum_Course_ARPG_EEnemyStates, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialState_MetaData), NewProp_InitialState_MetaData) }; // 1265401373
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_DeathAnim = { "DeathAnim", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, DeathAnim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnim_MetaData), NewProp_DeathAnim_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_RewardXP = { "RewardXP", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, RewardXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardXP_MetaData), NewProp_RewardXP_MetaData) };
void Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_bRandomAttacks_SetBit(void* Obj)
{
	((AEnemyCharacter_Base*)Obj)->bRandomAttacks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_bRandomAttacks = { "bRandomAttacks", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyCharacter_Base), &Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_bRandomAttacks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomAttacks_MetaData), NewProp_bRandomAttacks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_ControllerRef = { "ControllerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, ControllerRef), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControllerRef_MetaData), NewProp_ControllerRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyCharacter_Base, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyCharacter_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_StatsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_CombatComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_TraceComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_StatusEffectsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_InitialState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_DeathAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_RewardXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_bRandomAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_ControllerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyCharacter_Base_Statics::NewProp_BlackboardComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemyCharacter_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UEnemy_NoRegister, (int32)VTABLE_OFFSET(AEnemyCharacter_Base, IEnemy), false },  // 766191187
	{ Z_Construct_UClass_UFighter_NoRegister, (int32)VTABLE_OFFSET(AEnemyCharacter_Base, IFighter), false },  // 2323567720
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyCharacter_Base_Statics::ClassParams = {
	&AEnemyCharacter_Base::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEnemyCharacter_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyCharacter_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyCharacter_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemyCharacter_Base()
{
	if (!Z_Registration_Info_UClass_AEnemyCharacter_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyCharacter_Base.OuterSingleton, Z_Construct_UClass_AEnemyCharacter_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemyCharacter_Base.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AEnemyCharacter_Base>()
{
	return AEnemyCharacter_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyCharacter_Base);
AEnemyCharacter_Base::~AEnemyCharacter_Base() {}
// End Class AEnemyCharacter_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyCharacter_Base, AEnemyCharacter_Base::StaticClass, TEXT("AEnemyCharacter_Base"), &Z_Registration_Info_UClass_AEnemyCharacter_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyCharacter_Base), 347847266U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_4180470271(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
