// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/Bonfire.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef COURSE_ARPG_Bonfire_generated_h
#error "Bonfire.generated.h already included, missing '#pragma once' in Bonfire.h"
#endif
#define COURSE_ARPG_Bonfire_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execChangeWidgetVisibility); \
	DECLARE_FUNCTION(execSetupWidget); \
	DECLARE_FUNCTION(execOnSphereEndOverlap); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonfire(); \
	friend struct Z_Construct_UClass_ABonfire_Statics; \
public: \
	DECLARE_CLASS(ABonfire, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ABonfire)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABonfire(ABonfire&&); \
	ABonfire(const ABonfire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonfire); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonfire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonfire) \
	NO_API virtual ~ABonfire();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_14_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ABonfire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_Bonfire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
