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
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_Patrol();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBTT_Patrol_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UBTT_Patrol Function HandlePatrolCompleted
struct Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_Patrol, nullptr, "HandlePatrolCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_Patrol::execHandlePatrolCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePatrolCompleted();
	P_NATIVE_END;
}
// End Class UBTT_Patrol Function HandlePatrolCompleted

// Begin Class UBTT_Patrol Function Patrol
struct Z_Construct_UFunction_UBTT_Patrol_Patrol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/AI/BTT_Patrol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTT_Patrol_Patrol_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTT_Patrol, nullptr, "Patrol", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTT_Patrol_Patrol_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTT_Patrol_Patrol_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTT_Patrol_Patrol()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTT_Patrol_Patrol_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTT_Patrol::execPatrol)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Patrol();
	P_NATIVE_END;
}
// End Class UBTT_Patrol Function Patrol

// Begin Class UBTT_Patrol
void UBTT_Patrol::StaticRegisterNativesUBTT_Patrol()
{
	UClass* Class = UBTT_Patrol::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandlePatrolCompleted", &UBTT_Patrol::execHandlePatrolCompleted },
		{ "Patrol", &UBTT_Patrol::execPatrol },
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTT_Patrol_HandlePatrolCompleted, "HandlePatrolCompleted" }, // 3432136699
		{ &Z_Construct_UFunction_UBTT_Patrol_Patrol, "Patrol" }, // 204837530
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTT_Patrol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
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
		{ Z_Construct_UClass_UBTT_Patrol, UBTT_Patrol::StaticClass, TEXT("UBTT_Patrol"), &Z_Registration_Info_UClass_UBTT_Patrol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTT_Patrol), 2764012292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_2796518370(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
