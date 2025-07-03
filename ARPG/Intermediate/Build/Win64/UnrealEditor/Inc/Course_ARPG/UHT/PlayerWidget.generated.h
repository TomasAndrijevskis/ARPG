// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/PlayerWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityComponent_Base;
class UStatsComponent;
class UTexture2D;
#ifdef COURSE_ARPG_PlayerWidget_generated_h
#error "PlayerWidget.generated.h already included, missing '#pragma once' in PlayerWidget.h"
#endif
#define COURSE_ARPG_PlayerWidget_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateDeathWidget); \
	DECLARE_FUNCTION(execCreateStatusIconWithAmount); \
	DECLARE_FUNCTION(execCreateStatusIconWithTimer); \
	DECLARE_FUNCTION(execCreateUpgradeInfoHeader); \
	DECLARE_FUNCTION(execRemoveAbilityFooter); \
	DECLARE_FUNCTION(execCreateAbilityFooter); \
	DECLARE_FUNCTION(execRemoveAbilityUpgradeScreen); \
	DECLARE_FUNCTION(execCreateAbilityUpgradeScreen); \
	DECLARE_FUNCTION(execRemoveStatsScreen); \
	DECLARE_FUNCTION(execCreateStatsScreen); \
	DECLARE_FUNCTION(execSetXP); \
	DECLARE_FUNCTION(execSetLevel); \
	DECLARE_FUNCTION(execSetMana); \
	DECLARE_FUNCTION(execSetStamina); \
	DECLARE_FUNCTION(execSetHealth);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerWidget(UPlayerWidget&&); \
	UPlayerWidget(const UPlayerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget) \
	NO_API virtual ~UPlayerWidget();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_24_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UPlayerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_PlayerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
