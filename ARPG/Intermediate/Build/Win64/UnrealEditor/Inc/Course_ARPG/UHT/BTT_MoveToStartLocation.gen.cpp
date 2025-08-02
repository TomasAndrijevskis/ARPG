// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/AI/BTT_MoveToStartLocation.h"
#include "Runtime/AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTT_MoveToStartLocation() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MoveToStartLocation();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_MoveToStartLocation_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_MoveToStartLocation Function OnMoveCompleted
struct Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics
{
	struct BTT_MoveToStartLocation_eventOnMoveCompleted_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MoveToStartLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTT_MoveToStartLocation_eventOnMoveCompleted_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(0, nullptr) }; // 2000238872
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTT_MoveToStartLocation_eventOnMoveCompleted_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_MoveToStartLocation, nullptr, "OnMoveCompleted", nullptr, nullptr, Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::BTT_MoveToStartLocation_eventOnMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::BTT_MoveToStartLocation_eventOnMoveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_MoveToStartLocation::execOnMoveCompleted)
{
	P_GET_STRUCT(FAIRequestID,Z_Param_RequestID);
	P_GET_PROPERTY(FByteProperty,Z_Param_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMoveCompleted(Z_Param_RequestID,EPathFollowingResult::Type(Z_Param_Result));
	P_NATIVE_END;
}
// End Class UBTT_MoveToStartLocation Function OnMoveCompleted

// Begin Class UBTT_MoveToStartLocation
void UBTT_MoveToStartLocation::StaticRegisterNativesUBTT_MoveToStartLocation()
{
	UClass* Class = UBTT_MoveToStartLocation::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMoveCompleted", &UBTT_MoveToStartLocation::execOnMoveCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTT_MoveToStartLocation);
UClass* Z_Construct_UClass_UBTT_MoveToStartLocation_NoRegister()
{
	return UBTT_MoveToStartLocation::StaticClass();
}
struct Z_Construct_UClass_UBTT_MoveToStartLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Characters/AI/BTT_MoveToStartLocation.h" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MoveToStartLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRadius_MetaData[] = {
		{ "Category", "BTT_MoveToStartLocation" },
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_MoveToStartLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTT_MoveToStartLocation_OnMoveCompleted, "OnMoveCompleted" }, // 4050020547
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_MoveToStartLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::NewProp_AcceptableRadius = { "AcceptableRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTT_MoveToStartLocation, AcceptableRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableRadius_MetaData), NewProp_AcceptableRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::NewProp_AcceptableRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::ClassParams = {
	&UBTT_MoveToStartLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTT_MoveToStartLocation()
{
	if (!Z_Registration_Info_UClass_UBTT_MoveToStartLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTT_MoveToStartLocation.OuterSingleton, Z_Construct_UClass_UBTT_MoveToStartLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTT_MoveToStartLocation.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBTT_MoveToStartLocation>()
{
	return UBTT_MoveToStartLocation::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTT_MoveToStartLocation);
UBTT_MoveToStartLocation::~UBTT_MoveToStartLocation() {}
// End Class UBTT_MoveToStartLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTT_MoveToStartLocation, UBTT_MoveToStartLocation::StaticClass, TEXT("UBTT_MoveToStartLocation"), &Z_Registration_Info_UClass_UBTT_MoveToStartLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_MoveToStartLocation), 1080333379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_2592015242(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
