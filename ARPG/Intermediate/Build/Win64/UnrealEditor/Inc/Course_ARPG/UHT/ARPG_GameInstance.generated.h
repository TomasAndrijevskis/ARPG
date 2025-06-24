// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveGame/ARPG_GameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_ARPG_GameInstance_generated_h
#error "ARPG_GameInstance.generated.h already included, missing '#pragma once' in ARPG_GameInstance.h"
#endif
#define COURSE_ARPG_ARPG_GameInstance_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execbCheckSlot); \
	DECLARE_FUNCTION(execInitializeGameInstance); \
	DECLARE_FUNCTION(execSaveAll); \
	DECLARE_FUNCTION(execLoadAbilities); \
	DECLARE_FUNCTION(execSaveAbilities); \
	DECLARE_FUNCTION(execLoadStats); \
	DECLARE_FUNCTION(execSaveStats); \
	DECLARE_FUNCTION(execGetSlotName); \
	DECLARE_FUNCTION(execSetSlotName);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUARPG_GameInstance(); \
	friend struct Z_Construct_UClass_UARPG_GameInstance_Statics; \
public: \
	DECLARE_CLASS(UARPG_GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UARPG_GameInstance)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UARPG_GameInstance(UARPG_GameInstance&&); \
	UARPG_GameInstance(const UARPG_GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UARPG_GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UARPG_GameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UARPG_GameInstance) \
	NO_API virtual ~UARPG_GameInstance();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_8_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UARPG_GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
