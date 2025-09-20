// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/QuickTravelButton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_QuickTravelButton_generated_h
#error "QuickTravelButton.generated.h already included, missing '#pragma once' in QuickTravelButton.h"
#endif
#define COURSE_ARPG_QuickTravelButton_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnablePlayerInput); \
	DECLARE_FUNCTION(execShowAnimBeforeTeleport); \
	DECLARE_FUNCTION(execTeleportPlayer);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuickTravelButton(); \
	friend struct Z_Construct_UClass_UQuickTravelButton_Statics; \
public: \
	DECLARE_CLASS(UQuickTravelButton, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UQuickTravelButton)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuickTravelButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UQuickTravelButton(UQuickTravelButton&&); \
	UQuickTravelButton(const UQuickTravelButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuickTravelButton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuickTravelButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuickTravelButton) \
	NO_API virtual ~UQuickTravelButton();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_16_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UQuickTravelButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_QuickTravelButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
