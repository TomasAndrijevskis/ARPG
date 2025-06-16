// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/Abilities/AbilityComponent_RangeAttack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_AbilityComponent_RangeAttack_generated_h
#error "AbilityComponent_RangeAttack.generated.h already included, missing '#pragma once' in AbilityComponent_RangeAttack.h"
#endif
#define COURSE_ARPG_AbilityComponent_RangeAttack_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_10_DELEGATE \
COURSE_ARPG_API void FOnAttackPerformedignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttackPerformedignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartAbilityAttack); \
	DECLARE_FUNCTION(execSpawnProjectile);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityComponent_RangeAttack(); \
	friend struct Z_Construct_UClass_UAbilityComponent_RangeAttack_Statics; \
public: \
	DECLARE_CLASS(UAbilityComponent_RangeAttack, UAbilityComponent_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAbilityComponent_RangeAttack)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityComponent_RangeAttack(UAbilityComponent_RangeAttack&&); \
	UAbilityComponent_RangeAttack(const UAbilityComponent_RangeAttack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityComponent_RangeAttack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityComponent_RangeAttack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAbilityComponent_RangeAttack) \
	NO_API virtual ~UAbilityComponent_RangeAttack();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UAbilityComponent_RangeAttack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_AbilityComponent_RangeAttack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
