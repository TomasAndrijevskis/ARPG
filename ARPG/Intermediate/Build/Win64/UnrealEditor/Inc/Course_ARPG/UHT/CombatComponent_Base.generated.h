// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/CombatComponent_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_CombatComponent_Base_generated_h
#error "CombatComponent_Base.generated.h already included, missing '#pragma once' in CombatComponent_Base.h"
#endif
#define COURSE_ARPG_CombatComponent_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_8_DELEGATE \
COURSE_ARPG_API void FOnAttackPerformedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnAttackPerformedSignature, float AttackStaminaCost);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleResetAttack); \
	DECLARE_FUNCTION(execComboAttack);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCombatComponent_Base(); \
	friend struct Z_Construct_UClass_UCombatComponent_Base_Statics; \
public: \
	DECLARE_CLASS(UCombatComponent_Base, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UCombatComponent_Base)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCombatComponent_Base(UCombatComponent_Base&&); \
	UCombatComponent_Base(const UCombatComponent_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCombatComponent_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCombatComponent_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCombatComponent_Base) \
	NO_API virtual ~UCombatComponent_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_10_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UCombatComponent_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_CombatComponent_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
