// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/LevelingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_LevelingComponent_generated_h
#error "LevelingComponent.generated.h already included, missing '#pragma once' in LevelingComponent.h"
#endif
#define COURSE_ARPG_LevelingComponent_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_9_DELEGATE \
COURSE_ARPG_API void FOnNewLevelSignature_DelegateWrapper(const FMulticastScriptDelegate& OnNewLevelSignature, int32 Level);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_10_DELEGATE \
COURSE_ARPG_API void FOnXpUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnXpUpdateSignature, float XP);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_11_DELEGATE \
COURSE_ARPG_API void FOnPointsUpdateSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPointsUpdateSignature, int32 Points);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPoints); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execSetExperience); \
	DECLARE_FUNCTION(execGetCurrentPointsAmount); \
	DECLARE_FUNCTION(execGetCurrentLevel); \
	DECLARE_FUNCTION(execGetCurrentExperience); \
	DECLARE_FUNCTION(execAddExperience);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelingComponent(); \
	friend struct Z_Construct_UClass_ULevelingComponent_Statics; \
public: \
	DECLARE_CLASS(ULevelingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ULevelingComponent)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelingComponent(ULevelingComponent&&); \
	ULevelingComponent(const ULevelingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelingComponent) \
	NO_API virtual ~ULevelingComponent();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ULevelingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_LevelingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
