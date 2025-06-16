// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Characters/ARPG_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_PlayerController() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController();
COURSE_ARPG_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class AARPG_PlayerController Function HandleGameLoad
struct Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ARPG_PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPG_PlayerController, nullptr, "HandleGameLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AARPG_PlayerController::execHandleGameLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGameLoad();
	P_NATIVE_END;
}
// End Class AARPG_PlayerController Function HandleGameLoad

// Begin Class AARPG_PlayerController Function HandleGamePause
struct Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics
{
	struct ARPG_PlayerController_eventHandleGamePause_Parms
	{
		bool bIsGamePaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/ARPG_PlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsGamePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::NewProp_bIsGamePaused_SetBit(void* Obj)
{
	((ARPG_PlayerController_eventHandleGamePause_Parms*)Obj)->bIsGamePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::NewProp_bIsGamePaused = { "bIsGamePaused", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ARPG_PlayerController_eventHandleGamePause_Parms), &Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::NewProp_bIsGamePaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::NewProp_bIsGamePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPG_PlayerController, nullptr, "HandleGamePause", nullptr, nullptr, Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::PropPointers), sizeof(Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::ARPG_PlayerController_eventHandleGamePause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::Function_MetaDataParams), Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::ARPG_PlayerController_eventHandleGamePause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AARPG_PlayerController::execHandleGamePause)
{
	P_GET_UBOOL(Z_Param_bIsGamePaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGamePause(Z_Param_bIsGamePaused);
	P_NATIVE_END;
}
// End Class AARPG_PlayerController Function HandleGamePause

// Begin Class AARPG_PlayerController
void AARPG_PlayerController::StaticRegisterNativesAARPG_PlayerController()
{
	UClass* Class = AARPG_PlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleGameLoad", &AARPG_PlayerController::execHandleGameLoad },
		{ "HandleGamePause", &AARPG_PlayerController::execHandleGamePause },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARPG_PlayerController);
UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister()
{
	return AARPG_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AARPG_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Characters/ARPG_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Characters/ARPG_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AARPG_PlayerController_HandleGameLoad, "HandleGameLoad" }, // 1609483863
		{ &Z_Construct_UFunction_AARPG_PlayerController_HandleGamePause, "HandleGamePause" }, // 1363827133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AARPG_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AARPG_PlayerController_Statics::ClassParams = {
	&AARPG_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AARPG_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AARPG_PlayerController()
{
	if (!Z_Registration_Info_UClass_AARPG_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARPG_PlayerController.OuterSingleton, Z_Construct_UClass_AARPG_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AARPG_PlayerController.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<AARPG_PlayerController>()
{
	return AARPG_PlayerController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AARPG_PlayerController);
AARPG_PlayerController::~AARPG_PlayerController() {}
// End Class AARPG_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AARPG_PlayerController, AARPG_PlayerController::StaticClass, TEXT("AARPG_PlayerController"), &Z_Registration_Info_UClass_AARPG_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARPG_PlayerController), 1971592363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_573286779(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
