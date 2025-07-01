// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/StatusIconWithTimer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityComponent_Base;
class UTexture2D;
#ifdef COURSE_ARPG_StatusIconWithTimer_generated_h
#error "StatusIconWithTimer.generated.h already included, missing '#pragma once' in StatusIconWithTimer.h"
#endif
#define COURSE_ARPG_StatusIconWithTimer_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execSetStatusIcon); \
	DECLARE_FUNCTION(execSetCountdownTime); \
	DECLARE_FUNCTION(execInitializeWidget);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusIconWithTimer(); \
	friend struct Z_Construct_UClass_UStatusIconWithTimer_Statics; \
public: \
	DECLARE_CLASS(UStatusIconWithTimer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UStatusIconWithTimer)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusIconWithTimer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatusIconWithTimer(UStatusIconWithTimer&&); \
	UStatusIconWithTimer(const UStatusIconWithTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusIconWithTimer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusIconWithTimer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusIconWithTimer) \
	NO_API virtual ~UStatusIconWithTimer();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UStatusIconWithTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
