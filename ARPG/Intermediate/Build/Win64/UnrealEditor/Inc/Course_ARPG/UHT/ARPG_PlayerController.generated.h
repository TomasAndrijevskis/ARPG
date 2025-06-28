// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/ARPG_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_ARPG_PlayerController_generated_h
#error "ARPG_PlayerController.generated.h already included, missing '#pragma once' in ARPG_PlayerController.h"
#endif
#define COURSE_ARPG_ARPG_PlayerController_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPlayerControllerSettings); \
	DECLARE_FUNCTION(execHandleGameLoad); \
	DECLARE_FUNCTION(execHandleGamePause);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPG_PlayerController(); \
	friend struct Z_Construct_UClass_AARPG_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AARPG_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AARPG_PlayerController)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AARPG_PlayerController(AARPG_PlayerController&&); \
	AARPG_PlayerController(const AARPG_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPG_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPG_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AARPG_PlayerController) \
	NO_API virtual ~AARPG_PlayerController();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_9_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AARPG_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_ARPG_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
