// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/AbilityUpgradeScreen.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityComponent_Base;
class UDescriptionWidget;
class UHorizontalBox;
class UTexture2D;
#ifdef COURSE_ARPG_AbilityUpgradeScreen_generated_h
#error "AbilityUpgradeScreen.generated.h already included, missing '#pragma once' in AbilityUpgradeScreen.h"
#endif
#define COURSE_ARPG_AbilityUpgradeScreen_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTest); \
	DECLARE_FUNCTION(execSetButtonText); \
	DECLARE_FUNCTION(execUnlockAbility); \
	DECLARE_FUNCTION(execSetIconStyle); \
	DECLARE_FUNCTION(execSetAbilityIconEnable); \
	DECLARE_FUNCTION(execCreateAbilityDescriptionWidget); \
	DECLARE_FUNCTION(execCreateUpgradeDescriptionWidget); \
	DECLARE_FUNCTION(execRemoveDescriptionWidget); \
	DECLARE_FUNCTION(execCreateDescriptionWidget); \
	DECLARE_FUNCTION(execBindUpgradeButtonAction); \
	DECLARE_FUNCTION(execSetupButtonCallbacks); \
	DECLARE_FUNCTION(execInitializeAbility); \
	DECLARE_FUNCTION(execRemoveAbilityDescriptionWidget); \
	DECLARE_FUNCTION(execRemoveUpgradeDescriptionWidget);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityUpgradeScreen(); \
	friend struct Z_Construct_UClass_UAbilityUpgradeScreen_Statics; \
public: \
	DECLARE_CLASS(UAbilityUpgradeScreen, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAbilityUpgradeScreen)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityUpgradeScreen(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityUpgradeScreen(UAbilityUpgradeScreen&&); \
	UAbilityUpgradeScreen(const UAbilityUpgradeScreen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityUpgradeScreen); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityUpgradeScreen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityUpgradeScreen) \
	NO_API virtual ~UAbilityUpgradeScreen();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UAbilityUpgradeScreen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_AbilityUpgradeScreen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
