// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AI/BTT_Patrol.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_BTT_Patrol_generated_h
#error "BTT_Patrol.generated.h already included, missing '#pragma once' in BTT_Patrol.h"
#endif
#define COURSE_ARPG_BTT_Patrol_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePatrolCompleted); \
	DECLARE_FUNCTION(execPatrol);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTT_Patrol(); \
	friend struct Z_Construct_UClass_UBTT_Patrol_Statics; \
public: \
	DECLARE_CLASS(UBTT_Patrol, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UBTT_Patrol)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTT_Patrol(UBTT_Patrol&&); \
	UBTT_Patrol(const UBTT_Patrol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_Patrol); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_Patrol); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTT_Patrol) \
	NO_API virtual ~UBTT_Patrol();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_9_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UBTT_Patrol>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_Patrol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
