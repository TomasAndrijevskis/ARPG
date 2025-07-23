// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/SaveGame/Bonfire.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBonfire() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABonfire();
COURSE_ARPG_API UClass* Z_Construct_UClass_ABonfire_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBonfireInteractionWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ABonfire Function ChangeWidgetVisibility
struct Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics
{
	struct Bonfire_eventChangeWidgetVisibility_Parms
	{
		bool bIsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((Bonfire_eventChangeWidgetVisibility_Parms*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bonfire_eventChangeWidgetVisibility_Parms), &Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonfire, nullptr, "ChangeWidgetVisibility", nullptr, nullptr, Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::Bonfire_eventChangeWidgetVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::Bonfire_eventChangeWidgetVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABonfire::execChangeWidgetVisibility)
{
	P_GET_UBOOL(Z_Param_bIsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeWidgetVisibility(Z_Param_bIsVisible);
	P_NATIVE_END;
}
// End Class ABonfire Function ChangeWidgetVisibility

// Begin Class ABonfire Function OnSphereBeginOverlap
struct Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics
{
	struct Bonfire_eventOnSphereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Bonfire_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Bonfire_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonfire, nullptr, "OnSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::Bonfire_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::Bonfire_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABonfire::execOnSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ABonfire Function OnSphereBeginOverlap

// Begin Class ABonfire Function OnSphereEndOverlap
struct Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics
{
	struct Bonfire_eventOnSphereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Bonfire_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABonfire, nullptr, "OnSphereEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::Bonfire_eventOnSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::Bonfire_eventOnSphereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABonfire_OnSphereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABonfire_OnSphereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABonfire::execOnSphereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ABonfire Function OnSphereEndOverlap

// Begin Class ABonfire
void ABonfire::StaticRegisterNativesABonfire()
{
	UClass* Class = ABonfire::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChangeWidgetVisibility", &ABonfire::execChangeWidgetVisibility },
		{ "OnSphereBeginOverlap", &ABonfire::execOnSphereBeginOverlap },
		{ "OnSphereEndOverlap", &ABonfire::execOnSphereEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABonfire);
UClass* Z_Construct_UClass_ABonfire_NoRegister()
{
	return ABonfire::StaticClass();
}
struct Z_Construct_UClass_ABonfire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGame/Bonfire.h" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetComponent_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonfireMesh_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonfireCollision_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRangeCollision_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonfireName_MetaData[] = {
		{ "Category", "Bonfire" },
		{ "ModuleRelativePath", "Public/SaveGame/Bonfire.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidgetComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BonfireMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BonfireCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionRangeCollision;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionWidgetRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BonfireName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABonfire_ChangeWidgetVisibility, "ChangeWidgetVisibility" }, // 66153228
		{ &Z_Construct_UFunction_ABonfire_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 549721993
		{ &Z_Construct_UFunction_ABonfire_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 2745755305
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABonfire>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionWidgetComponent = { "InteractionWidgetComponent", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, InteractionWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidgetComponent_MetaData), NewProp_InteractionWidgetComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireMesh = { "BonfireMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, BonfireMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonfireMesh_MetaData), NewProp_BonfireMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireCollision = { "BonfireCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, BonfireCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonfireCollision_MetaData), NewProp_BonfireCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionRangeCollision = { "InteractionRangeCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, InteractionRangeCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionRangeCollision_MetaData), NewProp_InteractionRangeCollision_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionWidgetClass = { "InteractionWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, InteractionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBonfireInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidgetClass_MetaData), NewProp_InteractionWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionWidgetRef = { "InteractionWidgetRef", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, InteractionWidgetRef), Z_Construct_UClass_UBonfireInteractionWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionWidgetRef_MetaData), NewProp_InteractionWidgetRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, PlayerController), Z_Construct_UClass_AARPG_PlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireName = { "BonfireName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABonfire, BonfireName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonfireName_MetaData), NewProp_BonfireName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABonfire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionWidgetComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionRangeCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_InteractionWidgetRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABonfire_Statics::NewProp_BonfireName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABonfire_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABonfire_Statics::ClassParams = {
	&ABonfire::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABonfire_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABonfire_Statics::Class_MetaDataParams), Z_Construct_UClass_ABonfire_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABonfire()
{
	if (!Z_Registration_Info_UClass_ABonfire.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABonfire.OuterSingleton, Z_Construct_UClass_ABonfire_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABonfire.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ABonfire>()
{
	return ABonfire::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABonfire);
ABonfire::~ABonfire() {}
// End Class ABonfire

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABonfire, ABonfire::StaticClass, TEXT("ABonfire"), &Z_Registration_Info_UClass_ABonfire, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABonfire), 362410667U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_2362545609(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_Bonfire_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
