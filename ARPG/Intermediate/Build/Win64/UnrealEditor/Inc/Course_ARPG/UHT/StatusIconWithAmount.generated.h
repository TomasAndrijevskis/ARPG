// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/StatusIconWithAmount.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStatsComponent;
class UTexture2D;
#ifdef COURSE_ARPG_StatusIconWithAmount_generated_h
#error "StatusIconWithAmount.generated.h already included, missing '#pragma once' in StatusIconWithAmount.h"
#endif
#define COURSE_ARPG_StatusIconWithAmount_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveWidget); \
	DECLARE_FUNCTION(execSetStatusIcon); \
	DECLARE_FUNCTION(execSetAmount); \
	DECLARE_FUNCTION(execInitializeWidget);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusIconWithAmount(); \
	friend struct Z_Construct_UClass_UStatusIconWithAmount_Statics; \
public: \
	DECLARE_CLASS(UStatusIconWithAmount, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UStatusIconWithAmount)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusIconWithAmount(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatusIconWithAmount(UStatusIconWithAmount&&); \
	UStatusIconWithAmount(const UStatusIconWithAmount&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusIconWithAmount); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusIconWithAmount); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusIconWithAmount) \
	NO_API virtual ~UStatusIconWithAmount();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UStatusIconWithAmount>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_StatusIconWithAmount_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
