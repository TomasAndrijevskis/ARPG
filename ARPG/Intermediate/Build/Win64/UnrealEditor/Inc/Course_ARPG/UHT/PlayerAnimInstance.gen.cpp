// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Animations/PlayerAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnimInstance() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
COURSE_ARPG_API UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UPlayerAnimInstance Function HandleUpdatedTarget
struct Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics
{
	struct PlayerAnimInstance_eventHandleUpdatedTarget_Parms
	{
		AActor* NewTargetActorRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTargetActorRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::NewProp_NewTargetActorRef = { "NewTargetActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerAnimInstance_eventHandleUpdatedTarget_Parms, NewTargetActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::NewProp_NewTargetActorRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "HandleUpdatedTarget", nullptr, nullptr, Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PlayerAnimInstance_eventHandleUpdatedTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::PlayerAnimInstance_eventHandleUpdatedTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execHandleUpdatedTarget)
{
	P_GET_OBJECT(AActor,Z_Param_NewTargetActorRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleUpdatedTarget(Z_Param_NewTargetActorRef);
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function HandleUpdatedTarget

// Begin Class UPlayerAnimInstance Function UpdateDirection
struct Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "UpdateDirection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execUpdateDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDirection();
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function UpdateDirection

// Begin Class UPlayerAnimInstance Function UpdateSpeed
struct Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerAnimInstance, nullptr, "UpdateSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerAnimInstance::execUpdateSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateSpeed();
	P_NATIVE_END;
}
// End Class UPlayerAnimInstance Function UpdateSpeed

// Begin Class UPlayerAnimInstance
void UPlayerAnimInstance::StaticRegisterNativesUPlayerAnimInstance()
{
	UClass* Class = UPlayerAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleUpdatedTarget", &UPlayerAnimInstance::execHandleUpdatedTarget },
		{ "UpdateDirection", &UPlayerAnimInstance::execUpdateDirection },
		{ "UpdateSpeed", &UPlayerAnimInstance::execUpdateSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnimInstance);
UClass* Z_Construct_UClass_UPlayerAnimInstance_NoRegister()
{
	return UPlayerAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPlayerAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animations/PlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocking_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInCombat_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDirection_MetaData[] = {
		{ "Category", "PlayerAnimInstance" },
		{ "ModuleRelativePath", "Public/Animations/PlayerAnimInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsBlocking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static void NewProp_bIsInCombat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInCombat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerAnimInstance_HandleUpdatedTarget, "HandleUpdatedTarget" }, // 790084901
		{ &Z_Construct_UFunction_UPlayerAnimInstance_UpdateDirection, "UpdateDirection" }, // 3774094654
		{ &Z_Construct_UFunction_UPlayerAnimInstance_UpdateSpeed, "UpdateSpeed" }, // 3690748666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->bIsBlocking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsBlocking = { "bIsBlocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocking_MetaData), NewProp_bIsBlocking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeed_MetaData), NewProp_CurrentSpeed_MetaData) };
void Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_SetBit(void* Obj)
{
	((UPlayerAnimInstance*)Obj)->bIsInCombat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat = { "bIsInCombat", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnimInstance), &Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInCombat_MetaData), NewProp_bIsInCombat_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection = { "CurrentDirection", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnimInstance, CurrentDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDirection_MetaData), NewProp_CurrentDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsBlocking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_bIsInCombat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnimInstance_Statics::NewProp_CurrentDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams = {
	&UPlayerAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton, Z_Construct_UClass_UPlayerAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerAnimInstance.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UPlayerAnimInstance>()
{
	return UPlayerAnimInstance::StaticClass();
}
UPlayerAnimInstance::UPlayerAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnimInstance);
UPlayerAnimInstance::~UPlayerAnimInstance() {}
// End Class UPlayerAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_PlayerAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnimInstance, UPlayerAnimInstance::StaticClass, TEXT("UPlayerAnimInstance"), &Z_Registration_Info_UClass_UPlayerAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnimInstance), 1417433626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_PlayerAnimInstance_h_4073950781(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_PlayerAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_PlayerAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
