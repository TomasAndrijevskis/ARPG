// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/MainCharacter_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter_Base() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UAbilityComponent_Base_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UARPG_GameInstance_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBlockComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UFighter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_ULevelingComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_ULockonComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UMainPlayer_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerActionsComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerWidget_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UTraceComponent_NoRegister();
COURSE_ARPG_API UEnum* Z_Construct_UEnum_Course_ARPG_EStats();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AMainCharacter_Base Function CreateAbilitiesFooter
struct Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter_Base, nullptr, "CreateAbilitiesFooter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter_Base::execCreateAbilitiesFooter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateAbilitiesFooter();
	P_NATIVE_END;
}
// End Class AMainCharacter_Base Function CreateAbilitiesFooter

// Begin Class AMainCharacter_Base Function HandleDeath
struct Z_Construct_UFunction_AMainCharacter_Base_HandleDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Base_HandleDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter_Base, nullptr, "HandleDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HandleDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Base_HandleDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_Base_HandleDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Base_HandleDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter_Base::execHandleDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDeath();
	P_NATIVE_END;
}
// End Class AMainCharacter_Base Function HandleDeath

// Begin Class AMainCharacter_Base Function HasEnoughMana
struct Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics
{
	struct MainCharacter_Base_eventHasEnoughMana_Parms
	{
		float Mana;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mana;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::NewProp_Mana = { "Mana", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_Base_eventHasEnoughMana_Parms, Mana), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MainCharacter_Base_eventHasEnoughMana_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainCharacter_Base_eventHasEnoughMana_Parms), &Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::NewProp_Mana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter_Base, nullptr, "HasEnoughMana", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::MainCharacter_Base_eventHasEnoughMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::MainCharacter_Base_eventHasEnoughMana_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter_Base::execHasEnoughMana)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Mana);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughMana(Z_Param_Mana);
	P_NATIVE_END;
}
// End Class AMainCharacter_Base Function HasEnoughMana

// Begin Class AMainCharacter_Base Function HasEnoughStamina
struct Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics
{
	struct MainCharacter_Base_eventHasEnoughStamina_Parms
	{
		float Stamina;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacter_Base_eventHasEnoughStamina_Parms, Stamina), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MainCharacter_Base_eventHasEnoughStamina_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainCharacter_Base_eventHasEnoughStamina_Parms), &Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::NewProp_Stamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter_Base, nullptr, "HasEnoughStamina", nullptr, nullptr, Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::MainCharacter_Base_eventHasEnoughStamina_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::MainCharacter_Base_eventHasEnoughStamina_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter_Base::execHasEnoughStamina)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasEnoughStamina(Z_Param_Stamina);
	P_NATIVE_END;
}
// End Class AMainCharacter_Base Function HasEnoughStamina

// Begin Class AMainCharacter_Base Function PlayHurtAnimation
struct Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacter_Base, nullptr, "PlayHurtAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacter_Base::execPlayHurtAnimation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayHurtAnimation();
	P_NATIVE_END;
}
// End Class AMainCharacter_Base Function PlayHurtAnimation

// Begin Class AMainCharacter_Base
void AMainCharacter_Base::StaticRegisterNativesAMainCharacter_Base()
{
	UClass* Class = AMainCharacter_Base::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateAbilitiesFooter", &AMainCharacter_Base::execCreateAbilitiesFooter },
		{ "HandleDeath", &AMainCharacter_Base::execHandleDeath },
		{ "HasEnoughMana", &AMainCharacter_Base::execHasEnoughMana },
		{ "HasEnoughStamina", &AMainCharacter_Base::execHasEnoughStamina },
		{ "PlayHurtAnimation", &AMainCharacter_Base::execPlayHurtAnimation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter_Base);
UClass* Z_Construct_UClass_AMainCharacter_Base_NoRegister()
{
	return AMainCharacter_Base::StaticClass();
}
struct Z_Construct_UClass_AMainCharacter_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/MainCharacter_Base.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockonComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActionsComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelComp_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrAbilities_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrStats_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWidgetRef_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnim_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeathAnimMontage_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HurtAnimMontage_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWidget_MetaData[] = {
		{ "Category", "MainCharacter_Base" },
		{ "ModuleRelativePath", "Public/Characters/MainCharacter_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LockonComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActionsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrAbilities;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArrStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrStats;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerWidgetRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerAnim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathAnimMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HurtAnimMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacter_Base_CreateAbilitiesFooter, "CreateAbilitiesFooter" }, // 1037217709
		{ &Z_Construct_UFunction_AMainCharacter_Base_HandleDeath, "HandleDeath" }, // 1621684350
		{ &Z_Construct_UFunction_AMainCharacter_Base_HasEnoughMana, "HasEnoughMana" }, // 149876525
		{ &Z_Construct_UFunction_AMainCharacter_Base_HasEnoughStamina, "HasEnoughStamina" }, // 2079301730
		{ &Z_Construct_UFunction_AMainCharacter_Base_PlayHurtAnimation, "PlayHurtAnimation" }, // 3487764165
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_StatsComp = { "StatsComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, StatsComp), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComp_MetaData), NewProp_StatsComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_LockonComp = { "LockonComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, LockonComp), Z_Construct_UClass_ULockonComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockonComp_MetaData), NewProp_LockonComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_BlockComp = { "BlockComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, BlockComp), Z_Construct_UClass_UBlockComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockComp_MetaData), NewProp_BlockComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerActionsComp = { "PlayerActionsComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, PlayerActionsComp), Z_Construct_UClass_UPlayerActionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerActionsComp_MetaData), NewProp_PlayerActionsComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_TraceComp = { "TraceComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, TraceComp), Z_Construct_UClass_UTraceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceComp_MetaData), NewProp_TraceComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_CombatComp = { "CombatComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, CombatComp), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComp_MetaData), NewProp_CombatComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_LevelComp = { "LevelComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, LevelComp), Z_Construct_UClass_ULevelingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelComp_MetaData), NewProp_LevelComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrAbilities_Inner = { "ArrAbilities", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAbilityComponent_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrAbilities = { "ArrAbilities", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, ArrAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrAbilities_MetaData), NewProp_ArrAbilities_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrStats_Inner = { "ArrStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Course_ARPG_EStats, METADATA_PARAMS(0, nullptr) }; // 1779151500
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrStats = { "ArrStats", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, ArrStats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrStats_MetaData), NewProp_ArrStats_MetaData) }; // 1779151500
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerWidgetRef = { "PlayerWidgetRef", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, PlayerWidgetRef), Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWidgetRef_MetaData), NewProp_PlayerWidgetRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, GameInstance), Z_Construct_UClass_UARPG_GameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerAnim = { "PlayerAnim", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, PlayerAnim), Z_Construct_UClass_UPlayerAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnim_MetaData), NewProp_PlayerAnim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_DeathAnimMontage = { "DeathAnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, DeathAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeathAnimMontage_MetaData), NewProp_DeathAnimMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_HurtAnimMontage = { "HurtAnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, HurtAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HurtAnimMontage_MetaData), NewProp_HurtAnimMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerWidget = { "PlayerWidget", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacter_Base, PlayerWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWidget_MetaData), NewProp_PlayerWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_StatsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_LockonComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_BlockComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerActionsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_TraceComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_CombatComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_LevelComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_ArrStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_GameInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerAnim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_DeathAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_HurtAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Base_Statics::NewProp_PlayerWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacter_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMainCharacter_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMainPlayer_NoRegister, (int32)VTABLE_OFFSET(AMainCharacter_Base, IMainPlayer), false },  // 3755050142
	{ Z_Construct_UClass_UFighter_NoRegister, (int32)VTABLE_OFFSET(AMainCharacter_Base, IFighter), false },  // 2323567720
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Base_Statics::ClassParams = {
	&AMainCharacter_Base::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacter_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacter_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacter_Base()
{
	if (!Z_Registration_Info_UClass_AMainCharacter_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter_Base.OuterSingleton, Z_Construct_UClass_AMainCharacter_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacter_Base.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AMainCharacter_Base>()
{
	return AMainCharacter_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter_Base);
AMainCharacter_Base::~AMainCharacter_Base() {}
// End Class AMainCharacter_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter_Base, AMainCharacter_Base::StaticClass, TEXT("AMainCharacter_Base"), &Z_Registration_Info_UClass_AMainCharacter_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter_Base), 404233446U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_267286998(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
