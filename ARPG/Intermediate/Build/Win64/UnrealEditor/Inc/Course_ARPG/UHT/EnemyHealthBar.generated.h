// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/EnemyHealthBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_EnemyHealthBar_generated_h
#error "EnemyHealthBar.generated.h already included, missing '#pragma once' in EnemyHealthBar.h"
#endif
#define COURSE_ARPG_EnemyHealthBar_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHealth);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyHealthBar(); \
	friend struct Z_Construct_UClass_UEnemyHealthBar_Statics; \
public: \
	DECLARE_CLASS(UEnemyHealthBar, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UEnemyHealthBar)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyHealthBar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyHealthBar(UEnemyHealthBar&&); \
	UEnemyHealthBar(const UEnemyHealthBar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyHealthBar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyHealthBar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyHealthBar) \
	NO_API virtual ~UEnemyHealthBar();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UEnemyHealthBar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_EnemyHealthBar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
