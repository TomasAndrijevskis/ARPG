// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/StatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COURSE_ARPG_StatsComponent_generated_h
#error "StatsComponent.generated.h already included, missing '#pragma once' in StatsComponent.h"
#endif
#define COURSE_ARPG_StatsComponent_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_10_DELEGATE \
COURSE_ARPG_API void FOnHealthPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthPercentUpdateSignature, float Percentage);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_11_DELEGATE \
COURSE_ARPG_API void FOnStaminaPercentUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStaminaPercentUpdateSignature, float Percentage);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_12_DELEGATE \
COURSE_ARPG_API void FOnArmorUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnArmorUpdateSignature, float Amount);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_13_DELEGATE \
COURSE_ARPG_API void FOnZeroHealthSignature_DelegateWrapper(const FMulticastScriptDelegate& OnZeroHealthSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_14_DELEGATE \
COURSE_ARPG_API void FOnZeroArmorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnZeroArmorSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_15_DELEGATE \
COURSE_ARPG_API void FOnStatUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnStatUpdateSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddHealth); \
	DECLARE_FUNCTION(execSetStatValue); \
	DECLARE_FUNCTION(execGetStatName); \
	DECLARE_FUNCTION(execGetStatValue); \
	DECLARE_FUNCTION(execGetStatPercentage); \
	DECLARE_FUNCTION(execEnableRegeneration); \
	DECLARE_FUNCTION(execRegenStamina); \
	DECLARE_FUNCTION(execReduceStamina); \
	DECLARE_FUNCTION(execReduceArmor); \
	DECLARE_FUNCTION(execReduceHealth);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsComponent(); \
	friend struct Z_Construct_UClass_UStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UStatsComponent)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatsComponent(UStatsComponent&&); \
	UStatsComponent(const UStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatsComponent) \
	NO_API virtual ~UStatsComponent();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_17_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_StatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
