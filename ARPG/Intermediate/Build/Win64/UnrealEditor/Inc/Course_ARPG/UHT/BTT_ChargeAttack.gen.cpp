// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_ChargeAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_ChargeAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_ChargeAttack();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_ChargeAttack Function FinishAttackTask
struct Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_ChargeAttack, nullptr, "FinishAttackTask", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_ChargeAttack::execFinishAttackTask)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishAttackTask();
	P_NATIVE_END;
}
// End Class UBTT_ChargeAttack Function FinishAttackTask

// Begin Class UBTT_ChargeAttack Function HandleMoveCompleted
struct Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_ChargeAttack, nullptr, "HandleMoveCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_ChargeAttack::execHandleMoveCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleMoveCompleted();
	P_NATIVE_END;
}
// End Class UBTT_ChargeAttack Function HandleMoveCompleted

// Begin Class UBTT_ChargeAttack
void UBTT_ChargeAttack::StaticRegisterNativesUBTT_ChargeAttack()
{
	UClass* Class = UBTT_ChargeAttack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishAttackTask", &UBTT_ChargeAttack::execFinishAttackTask },
		{ "HandleMoveCompleted", &UBTT_ChargeAttack::execHandleMoveCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_ChargeAttack);
UClass* Z_Construct_UClass_UBTT_ChargeAttack_NoRegister()
{
	return UBTT_ChargeAttack::StaticClass();
}
struct Z_Construct_UClass_UBTT_ChargeAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_ChargeAttack.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTT_ChargeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChargeWalkSpeed_MetaData[] = {
		{ "Category", "BTT_ChargeAttack" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_ChargeAttack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChargeWalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTT_ChargeAttack_FinishAttackTask, "FinishAttackTask" }, // 1545905860
		{ &Z_Construct_UFunction_UBTT_ChargeAttack_HandleMoveCompleted, "HandleMoveCompleted" }, // 3875184097
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_ChargeAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_ChargeAttack, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_ChargeWalkSpeed = { "ChargeWalkSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_ChargeAttack, ChargeWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChargeWalkSpeed_MetaData), NewProp_ChargeWalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_AcceptableRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_ChargeAttack_Statics::NewProp_ChargeWalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams = {
	&UBTT_ChargeAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_ChargeAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_ChargeAttack()
{
	if (!Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton, Z_Construct_UClass_UBTT_ChargeAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_ChargeAttack.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_ChargeAttack>()
{
	return UBTT_ChargeAttack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_ChargeAttack);
UBTT_ChargeAttack::~UBTT_ChargeAttack() {}
// End Class UBTT_ChargeAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTT_ChargeAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_ChargeAttack, UBTT_ChargeAttack::StaticClass, TEXT("UBTT_ChargeAttack"), &Z_Registration_Info_UClass_UBTT_ChargeAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_ChargeAttack), 1171438978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTT_ChargeAttack_h_937023952(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_AI_BTT_ChargeAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
