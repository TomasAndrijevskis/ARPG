// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/AI/BTT_MoveToStartLocation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAIRequestID;
#ifdef COURSE_ARPG_BTT_MoveToStartLocation_generated_h
#error "BTT_MoveToStartLocation.generated.h already included, missing '#pragma once' in BTT_MoveToStartLocation.h"
#endif
#define COURSE_ARPG_BTT_MoveToStartLocation_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMoveCompleted);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTT_MoveToStartLocation(); \
	friend struct Z_Construct_UClass_UBTT_MoveToStartLocation_Statics; \
public: \
	DECLARE_CLASS(UBTT_MoveToStartLocation, UBTTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UBTT_MoveToStartLocation)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBTT_MoveToStartLocation(UBTT_MoveToStartLocation&&); \
	UBTT_MoveToStartLocation(const UBTT_MoveToStartLocation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTT_MoveToStartLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTT_MoveToStartLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBTT_MoveToStartLocation) \
	NO_API virtual ~UBTT_MoveToStartLocation();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UBTT_MoveToStartLocation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_AI_BTT_MoveToStartLocation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
