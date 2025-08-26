// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AI/BTT_PoisonExplosion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_BTT_PoisonExplosion_generated_h
#error "BTT_PoisonExplosion.generated.h already included, missing '#pragma once' in BTT_PoisonExplosion.h"
#endif
#define COURSE_ARPG_BTT_PoisonExplosion_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckDistance); \
	DECLARE_FUNCTION(execFinishMove); \
	DECLARE_FUNCTION(execMoveToPlayer); \
	DECLARE_FUNCTION(execFinishTask); \
	DECLARE_FUNCTION(execExplodePoison);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTT_PoisonExplosion(); \
	friend struct Z_Construct_UClass_UBTT_PoisonExplosion_Statics; \
public: \
	DECLARE_CLASS(UBTT_PoisonExplosion, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UBTT_PoisonExplosion)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTT_PoisonExplosion(UBTT_PoisonExplosion&&); \
	UBTT_PoisonExplosion(const UBTT_PoisonExplosion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_PoisonExplosion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_PoisonExplosion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTT_PoisonExplosion) \
	NO_API virtual ~UBTT_PoisonExplosion();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_10_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UBTT_PoisonExplosion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_PoisonExplosion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
