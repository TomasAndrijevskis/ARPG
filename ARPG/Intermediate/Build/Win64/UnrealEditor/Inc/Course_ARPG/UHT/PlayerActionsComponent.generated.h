// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/PlayerActionsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_PlayerActionsComponent_generated_h
#error "PlayerActionsComponent.generated.h already included, missing '#pragma once' in PlayerActionsComponent.h"
#endif
#define COURSE_ARPG_PlayerActionsComponent_generated_h

#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_9_DELEGATE \
COURSE_ARPG_API void FOnSprintSignature_DelegateWrapper(const FMulticastScriptDelegate& OnSprintSignature, float SprintStaminaCost);


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_10_DELEGATE \
COURSE_ARPG_API void FOnRollSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRollSignature, float RollStaminaCost);


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishRollAnim); \
	DECLARE_FUNCTION(execRoll); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execSprint);


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerActionsComponent(); \
	friend struct Z_Construct_UClass_UPlayerActionsComponent_Statics; \
public: \
	DECLARE_CLASS(UPlayerActionsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UPlayerActionsComponent)


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerActionsComponent(UPlayerActionsComponent&&); \
	UPlayerActionsComponent(const UPlayerActionsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerActionsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerActionsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerActionsComponent) \
	NO_API virtual ~UPlayerActionsComponent();


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_12_PROLOG
#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UPlayerActionsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_PlayerActionsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
