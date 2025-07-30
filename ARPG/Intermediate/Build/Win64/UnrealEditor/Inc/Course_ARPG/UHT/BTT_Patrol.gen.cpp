// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_Patrol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_Patrol() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_Patrol();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_Patrol_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_Patrol Function DelayPatrol
struct Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics
{
	struct BTT_Patrol_eventDelayPatrol_Parms
	{
		FVector TargetLocation;
		bool bDirectionForward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static void NewProp_bDirectionForward_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirectionForward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTT_Patrol_eventDelayPatrol_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::NewProp_bDirectionForward_SetBit(void* Obj)
{
	((BTT_Patrol_eventDelayPatrol_Parms*)Obj)->bDirectionForward = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::NewProp_bDirectionForward = { "bDirectionForward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BTT_Patrol_eventDelayPatrol_Parms), &Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::NewProp_bDirectionForward_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::NewProp_bDirectionForward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_Patrol, nullptr, "DelayPatrol", nullptr, nullptr, Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::BTT_Patrol_eventDelayPatrol_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00840401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::BTT_Patrol_eventDelayPatrol_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTT_Patrol_DelayPatrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_Patrol_DelayPatrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_Patrol::execDelayPatrol)
{
	P_GET_STRUCT(FVector,Z_Param_TargetLocation);
	P_GET_UBOOL(Z_Param_bDirectionForward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DelayPatrol(Z_Param_TargetLocation,Z_Param_bDirectionForward);
	P_NATIVE_END;
}
// End Class UBTT_Patrol Function DelayPatrol

// Begin Class UBTT_Patrol Function PatrolBackward
struct Z_Construct_UFunction_UBTT_Patrol_PatrolBackward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_Patrol_PatrolBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_Patrol, nullptr, "PatrolBackward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_PatrolBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_Patrol_PatrolBackward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_Patrol_PatrolBackward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_Patrol_PatrolBackward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_Patrol::execPatrolBackward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PatrolBackward();
	P_NATIVE_END;
}
// End Class UBTT_Patrol Function PatrolBackward

// Begin Class UBTT_Patrol Function PatrolForward
struct Z_Construct_UFunction_UBTT_Patrol_PatrolForward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_Patrol_PatrolForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_Patrol, nullptr, "PatrolForward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_PatrolForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_Patrol_PatrolForward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_Patrol_PatrolForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_Patrol_PatrolForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_Patrol::execPatrolForward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PatrolForward();
	P_NATIVE_END;
}
// End Class UBTT_Patrol Function PatrolForward

// Begin Class UBTT_Patrol
void UBTT_Patrol::StaticRegisterNativesUBTT_Patrol()
{
	UClass* Class = UBTT_Patrol::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DelayPatrol", &UBTT_Patrol::execDelayPatrol },
		{ "PatrolBackward", &UBTT_Patrol::execPatrolBackward },
		{ "PatrolForward", &UBTT_Patrol::execPatrolForward },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_Patrol);
UClass* Z_Construct_UClass_UBTT_Patrol_NoRegister()
{
	return UBTT_Patrol::StaticClass();
}
struct Z_Construct_UClass_UBTT_Patrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_Patrol.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinWaitDuration_MetaData[] = {
		{ "Category", "BTT_Patrol" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWaitDuration_MetaData[] = {
		{ "Category", "BTT_Patrol" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPatrolDistance_MetaData[] = {
		{ "Category", "BTT_Patrol" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPatrolDistance_MetaData[] = {
		{ "Category", "BTT_Patrol" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinWaitDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWaitDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPatrolDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPatrolDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTT_Patrol_DelayPatrol, "DelayPatrol" }, // 438684688
		{ &Z_Construct_UFunction_UBTT_Patrol_PatrolBackward, "PatrolBackward" }, // 751785462
		{ &Z_Construct_UFunction_UBTT_Patrol_PatrolForward, "PatrolForward" }, // 922641037
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_Patrol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MinWaitDuration = { "MinWaitDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_Patrol, MinWaitDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinWaitDuration_MetaData), NewProp_MinWaitDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MaxWaitDuration = { "MaxWaitDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_Patrol, MaxWaitDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWaitDuration_MetaData), NewProp_MaxWaitDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MinPatrolDistance = { "MinPatrolDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_Patrol, MinPatrolDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPatrolDistance_MetaData), NewProp_MinPatrolDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MaxPatrolDistance = { "MaxPatrolDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_Patrol, MaxPatrolDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPatrolDistance_MetaData), NewProp_MaxPatrolDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_Patrol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MinWaitDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MaxWaitDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MinPatrolDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_Patrol_Statics::NewProp_MaxPatrolDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Patrol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_Patrol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Patrol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_Patrol_Statics::ClassParams = {
	&UBTT_Patrol::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTT_Patrol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Patrol_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_Patrol_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_Patrol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_Patrol()
{
	if (!Z_Registration_Info_UClass_UBTT_Patrol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_Patrol.OuterSingleton, Z_Construct_UClass_UBTT_Patrol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_Patrol.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_Patrol>()
{
	return UBTT_Patrol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_Patrol);
UBTT_Patrol::~UBTT_Patrol() {}
// End Class UBTT_Patrol

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_Patrol, UBTT_Patrol::StaticClass, TEXT("UBTT_Patrol"), &Z_Registration_Info_UClass_UBTT_Patrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_Patrol), 744900336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_3238534569(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
