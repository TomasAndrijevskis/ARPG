// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/SaveGame/ARPG_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_GameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UARPG_GameInstance();
COURSE_ARPG_API UClass* Z_Construct_UClass_UARPG_GameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UARPG_GameInstance Function bCheckSlot
struct Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics
{
	struct ARPG_GameInstance_eventbCheckSlot_Parms
	{
		FString SlotNameToCheck;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotNameToCheck;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::NewProp_SlotNameToCheck = { "SlotNameToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_GameInstance_eventbCheckSlot_Parms, SlotNameToCheck), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ARPG_GameInstance_eventbCheckSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARPG_GameInstance_eventbCheckSlot_Parms), &Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::NewProp_SlotNameToCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "bCheckSlot", nullptr, nullptr, Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::ARPG_GameInstance_eventbCheckSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::ARPG_GameInstance_eventbCheckSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execbCheckSlot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotNameToCheck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->bCheckSlot(Z_Param_SlotNameToCheck);
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function bCheckSlot

// Begin Class UARPG_GameInstance Function GetSlotName
struct Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics
{
	struct ARPG_GameInstance_eventGetSlotName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_GameInstance_eventGetSlotName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "GetSlotName", nullptr, nullptr, Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::ARPG_GameInstance_eventGetSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::ARPG_GameInstance_eventGetSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UARPG_GameInstance_GetSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_GetSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execGetSlotName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSlotName();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function GetSlotName

// Begin Class UARPG_GameInstance Function InitializeGameInstance
struct Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "InitializeGameInstance", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execInitializeGameInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGameInstance();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function InitializeGameInstance

// Begin Class UARPG_GameInstance Function LoadAbilities
struct Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "LoadAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execLoadAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadAbilities();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function LoadAbilities

// Begin Class UARPG_GameInstance Function LoadPlayerClass
struct Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "LoadPlayerClass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execLoadPlayerClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadPlayerClass();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function LoadPlayerClass

// Begin Class UARPG_GameInstance Function LoadStats
struct Z_Construct_UFunction_UARPG_GameInstance_LoadStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_LoadStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "LoadStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_LoadStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_LoadStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_LoadStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_LoadStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execLoadStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadStats();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function LoadStats

// Begin Class UARPG_GameInstance Function SaveAbilities
struct Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "SaveAbilities", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execSaveAbilities)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAbilities();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function SaveAbilities

// Begin Class UARPG_GameInstance Function SaveAll
struct Z_Construct_UFunction_UARPG_GameInstance_SaveAll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_SaveAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "SaveAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SaveAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_SaveAll_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_SaveAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_SaveAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execSaveAll)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveAll();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function SaveAll

// Begin Class UARPG_GameInstance Function SavePlayerClass
struct Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "SavePlayerClass", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execSavePlayerClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SavePlayerClass();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function SavePlayerClass

// Begin Class UARPG_GameInstance Function SaveStats
struct Z_Construct_UFunction_UARPG_GameInstance_SaveStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_SaveStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "SaveStats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SaveStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_SaveStats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UARPG_GameInstance_SaveStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_SaveStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execSaveStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveStats();
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function SaveStats

// Begin Class UARPG_GameInstance Function SetPlayerClass
struct Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics
{
	struct ARPG_GameInstance_eventSetPlayerClass_Parms
	{
		TSubclassOf<AMainCharacter> PlayerClass;
		bool bFirstLoad;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
	static void NewProp_bFirstLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstLoad;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_GameInstance_eventSetPlayerClass_Parms, PlayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::NewProp_bFirstLoad_SetBit(void* Obj)
{
	((ARPG_GameInstance_eventSetPlayerClass_Parms*)Obj)->bFirstLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::NewProp_bFirstLoad = { "bFirstLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARPG_GameInstance_eventSetPlayerClass_Parms), &Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::NewProp_bFirstLoad_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::NewProp_PlayerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::NewProp_bFirstLoad,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "SetPlayerClass", nullptr, nullptr, Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::ARPG_GameInstance_eventSetPlayerClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::ARPG_GameInstance_eventSetPlayerClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execSetPlayerClass)
{
	P_GET_OBJECT(UClass,Z_Param_PlayerClass);
	P_GET_UBOOL(Z_Param_bFirstLoad);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerClass(Z_Param_PlayerClass,Z_Param_bFirstLoad);
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function SetPlayerClass

// Begin Class UARPG_GameInstance Function SetSlotName
struct Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics
{
	struct ARPG_GameInstance_eventSetSlotName_Parms
	{
		FString NewSlotName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NewSlotName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::NewProp_NewSlotName = { "NewSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPG_GameInstance_eventSetSlotName_Parms, NewSlotName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::NewProp_NewSlotName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARPG_GameInstance, nullptr, "SetSlotName", nullptr, nullptr, Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::ARPG_GameInstance_eventSetSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::ARPG_GameInstance_eventSetSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UARPG_GameInstance_SetSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARPG_GameInstance_SetSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UARPG_GameInstance::execSetSlotName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_NewSlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSlotName(Z_Param_NewSlotName);
	P_NATIVE_END;
}
// End Class UARPG_GameInstance Function SetSlotName

// Begin Class UARPG_GameInstance
void UARPG_GameInstance::StaticRegisterNativesUARPG_GameInstance()
{
	UClass* Class = UARPG_GameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "bCheckSlot", &UARPG_GameInstance::execbCheckSlot },
		{ "GetSlotName", &UARPG_GameInstance::execGetSlotName },
		{ "InitializeGameInstance", &UARPG_GameInstance::execInitializeGameInstance },
		{ "LoadAbilities", &UARPG_GameInstance::execLoadAbilities },
		{ "LoadPlayerClass", &UARPG_GameInstance::execLoadPlayerClass },
		{ "LoadStats", &UARPG_GameInstance::execLoadStats },
		{ "SaveAbilities", &UARPG_GameInstance::execSaveAbilities },
		{ "SaveAll", &UARPG_GameInstance::execSaveAll },
		{ "SavePlayerClass", &UARPG_GameInstance::execSavePlayerClass },
		{ "SaveStats", &UARPG_GameInstance::execSaveStats },
		{ "SetPlayerClass", &UARPG_GameInstance::execSetPlayerClass },
		{ "SetSlotName", &UARPG_GameInstance::execSetSlotName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPG_GameInstance);
UClass* Z_Construct_UClass_UARPG_GameInstance_NoRegister()
{
	return UARPG_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UARPG_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGame/ARPG_GameInstance.h" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacterClass_MetaData[] = {
		{ "Category", "ARPG_GameInstance" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerCharacterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UARPG_GameInstance_bCheckSlot, "bCheckSlot" }, // 1149728424
		{ &Z_Construct_UFunction_UARPG_GameInstance_GetSlotName, "GetSlotName" }, // 1502944115
		{ &Z_Construct_UFunction_UARPG_GameInstance_InitializeGameInstance, "InitializeGameInstance" }, // 3406541929
		{ &Z_Construct_UFunction_UARPG_GameInstance_LoadAbilities, "LoadAbilities" }, // 2298138032
		{ &Z_Construct_UFunction_UARPG_GameInstance_LoadPlayerClass, "LoadPlayerClass" }, // 2407429810
		{ &Z_Construct_UFunction_UARPG_GameInstance_LoadStats, "LoadStats" }, // 388496173
		{ &Z_Construct_UFunction_UARPG_GameInstance_SaveAbilities, "SaveAbilities" }, // 1098041752
		{ &Z_Construct_UFunction_UARPG_GameInstance_SaveAll, "SaveAll" }, // 2578912318
		{ &Z_Construct_UFunction_UARPG_GameInstance_SavePlayerClass, "SavePlayerClass" }, // 1935589068
		{ &Z_Construct_UFunction_UARPG_GameInstance_SaveStats, "SaveStats" }, // 2831133602
		{ &Z_Construct_UFunction_UARPG_GameInstance_SetPlayerClass, "SetPlayerClass" }, // 3100361608
		{ &Z_Construct_UFunction_UARPG_GameInstance_SetSlotName, "SetSlotName" }, // 1842137151
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPG_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UARPG_GameInstance_Statics::NewProp_PlayerCharacterClass = { "PlayerCharacterClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_GameInstance, PlayerCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacterClass_MetaData), NewProp_PlayerCharacterClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPG_GameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_GameInstance_Statics::NewProp_PlayerCharacterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_GameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UARPG_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPG_GameInstance_Statics::ClassParams = {
	&UARPG_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UARPG_GameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_GameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UARPG_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UARPG_GameInstance()
{
	if (!Z_Registration_Info_UClass_UARPG_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPG_GameInstance.OuterSingleton, Z_Construct_UClass_UARPG_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UARPG_GameInstance.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UARPG_GameInstance>()
{
	return UARPG_GameInstance::StaticClass();
}
UARPG_GameInstance::UARPG_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UARPG_GameInstance);
UARPG_GameInstance::~UARPG_GameInstance() {}
// End Class UARPG_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UARPG_GameInstance, UARPG_GameInstance::StaticClass, TEXT("UARPG_GameInstance"), &Z_Registration_Info_UClass_UARPG_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPG_GameInstance), 2972071659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_1053875501(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
