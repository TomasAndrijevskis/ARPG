// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/InfoHeader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_InfoHeader_generated_h
#error "InfoHeader.generated.h already included, missing '#pragma once' in InfoHeader.h"
#endif
#define COURSE_ARPG_InfoHeader_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAbilityPoints); \
	DECLARE_FUNCTION(execUpdateStatValue); \
	DECLARE_FUNCTION(execSetPointsAmount); \
	DECLARE_FUNCTION(execInitializeInfoHeader);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfoHeader(); \
	friend struct Z_Construct_UClass_UInfoHeader_Statics; \
public: \
	DECLARE_CLASS(UInfoHeader, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UInfoHeader)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfoHeader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInfoHeader(UInfoHeader&&); \
	UInfoHeader(const UInfoHeader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfoHeader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfoHeader); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfoHeader) \
	NO_API virtual ~UInfoHeader();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UInfoHeader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_UI_InfoHeader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
