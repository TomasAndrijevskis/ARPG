// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gamemode/ARPG_GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_ARPG_GameMode_generated_h
#error "ARPG_GameMode.generated.h already included, missing '#pragma once' in ARPG_GameMode.h"
#endif
#define COURSE_ARPG_ARPG_GameMode_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARPG_GameMode(); \
	friend struct Z_Construct_UClass_AARPG_GameMode_Statics; \
public: \
	DECLARE_CLASS(AARPG_GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AARPG_GameMode)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARPG_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AARPG_GameMode(AARPG_GameMode&&); \
	AARPG_GameMode(const AARPG_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARPG_GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARPG_GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARPG_GameMode) \
	NO_API virtual ~AARPG_GameMode();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_10_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AARPG_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Gamemode_ARPG_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
