// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_AbilityComponent_Player_generated_h
#error "AbilityComponent_Player.generated.h already included, missing '#pragma once' in AbilityComponent_Player.h"
#endif
#define COURSE_ARPG_AbilityComponent_Player_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_8_DELEGATE \
COURSE_ARPG_API void FOnAbilityUnlockedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityUnlockedSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_9_DELEGATE \
COURSE_ARPG_API void FOnAbilityCooldownFinishedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownFinishedSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_10_DELEGATE \
COURSE_ARPG_API void FOnAbilityCooldownChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAbilityCooldownChangedSignature, float TimeLeft);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAbilityActive); \
	DECLARE_FUNCTION(execGetActionKey); \
	DECLARE_FUNCTION(execSetAbilityAvailability); \
	DECLARE_FUNCTION(execIsAbilityAvailable); \
	DECLARE_FUNCTION(execGetCurrentAbilityLevel); \
	DECLARE_FUNCTION(execUpgradeAbility);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityComponent_Player(); \
	friend struct Z_Construct_UClass_UAbilityComponent_Player_Statics; \
public: \
	DECLARE_CLASS(UAbilityComponent_Player, UAbilityComponent_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAbilityComponent_Player)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityComponent_Player(UAbilityComponent_Player&&); \
	UAbilityComponent_Player(const UAbilityComponent_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityComponent_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityComponent_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityComponent_Player) \
	NO_API virtual ~UAbilityComponent_Player();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UAbilityComponent_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_Base_AbilityComponent_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
