// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Objects/DeathTrigger.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathTrigger() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_ADeathTrigger();
COURSE_ARPG_API UClass* Z_Construct_UClass_ADeathTrigger_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class ADeathTrigger Function OnBeginOverlap
struct Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics
{
	struct DeathTrigger_eventOnBeginOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Objects/DeathTrigger.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTrigger_eventOnBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTrigger_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTrigger_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTrigger_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((DeathTrigger_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DeathTrigger_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeathTrigger_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeathTrigger, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::DeathTrigger_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::DeathTrigger_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeathTrigger::execOnBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ADeathTrigger Function OnBeginOverlap

// Begin Class ADeathTrigger
void ADeathTrigger::StaticRegisterNativesADeathTrigger()
{
	UClass* Class = ADeathTrigger::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginOverlap", &ADeathTrigger::execOnBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeathTrigger);
UClass* Z_Construct_UClass_ADeathTrigger_NoRegister()
{
	return ADeathTrigger::StaticClass();
}
struct Z_Construct_UClass_ADeathTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Objects/DeathTrigger.h" },
		{ "ModuleRelativePath", "Public/Objects/DeathTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "DeathTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Objects/DeathTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeathTrigger_OnBeginOverlap, "OnBeginOverlap" }, // 1531230445
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeathTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeathTrigger_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeathTrigger, Collision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeathTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeathTrigger_Statics::NewProp_Collision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADeathTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeathTrigger_Statics::ClassParams = {
	&ADeathTrigger::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADeathTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADeathTrigger_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeathTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeathTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeathTrigger()
{
	if (!Z_Registration_Info_UClass_ADeathTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeathTrigger.OuterSingleton, Z_Construct_UClass_ADeathTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeathTrigger.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<ADeathTrigger>()
{
	return ADeathTrigger::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeathTrigger);
ADeathTrigger::~ADeathTrigger() {}
// End Class ADeathTrigger

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeathTrigger, ADeathTrigger::StaticClass, TEXT("ADeathTrigger"), &Z_Registration_Info_UClass_ADeathTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeathTrigger), 1526035306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_3949616129(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
