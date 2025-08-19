// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AI/BTT_MeleeAttack_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_BTT_MeleeAttack_Base_generated_h
#error "BTT_MeleeAttack_Base.generated.h already included, missing '#pragma once' in BTT_MeleeAttack_Base.h"
#endif
#define COURSE_ARPG_BTT_MeleeAttack_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishMove); \
	DECLARE_FUNCTION(execFinishAttack);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTT_MeleeAttack_Base(); \
	friend struct Z_Construct_UClass_UBTT_MeleeAttack_Base_Statics; \
public: \
	DECLARE_CLASS(UBTT_MeleeAttack_Base, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UBTT_MeleeAttack_Base)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTT_MeleeAttack_Base(UBTT_MeleeAttack_Base&&); \
	UBTT_MeleeAttack_Base(const UBTT_MeleeAttack_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_MeleeAttack_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_MeleeAttack_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTT_MeleeAttack_Base) \
	NO_API virtual ~UBTT_MeleeAttack_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UBTT_MeleeAttack_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MeleeAttack_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
