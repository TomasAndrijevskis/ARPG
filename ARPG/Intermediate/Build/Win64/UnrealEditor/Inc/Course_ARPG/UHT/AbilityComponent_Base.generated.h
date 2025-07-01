// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/Abilities/AbilityComponent_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_AbilityComponent_Base_generated_h
#error "AbilityComponent_Base.generated.h already included, missing '#pragma once' in AbilityComponent_Base.h"
#endif
#define COURSE_ARPG_AbilityComponent_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_11_DELEGATE \
COURSE_ARPG_API void FOnAbilityTimerChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityTimerChangedSignature, float TimeLeft);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_12_DELEGATE \
COURSE_ARPG_API void FOnAbilityStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityStartedSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_13_DELEGATE \
COURSE_ARPG_API void FOnAbilityFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityFinishedSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_14_DELEGATE \
COURSE_ARPG_API void FOnAbilityUnlockedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityUnlockedSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_16_DELEGATE \
COURSE_ARPG_API void FOnAbilityCooldownFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownFinishedSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_17_DELEGATE \
COURSE_ARPG_API void FOnAbilityCooldownChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownChangedSignature, float TimeLeft);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAbilityActive); \
	DECLARE_FUNCTION(execGetActionKey); \
	DECLARE_FUNCTION(execGetAbilityDuration); \
	DECLARE_FUNCTION(execSetAbilityAvailability); \
	DECLARE_FUNCTION(execIsAbilityAvailable); \
	DECLARE_FUNCTION(execGetCurrentAbilityLevel); \
	DECLARE_FUNCTION(execUpgradeAbility);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityComponent_Base(); \
	friend struct Z_Construct_UClass_UAbilityComponent_Base_Statics; \
public: \
	DECLARE_CLASS(UAbilityComponent_Base, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAbilityComponent_Base)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityComponent_Base(UAbilityComponent_Base&&); \
	UAbilityComponent_Base(const UAbilityComponent_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityComponent_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityComponent_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityComponent_Base) \
	NO_API virtual ~UAbilityComponent_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_19_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UAbilityComponent_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
