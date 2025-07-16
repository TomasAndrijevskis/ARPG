// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/StatusEffectsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_StatusEffectsComponent_generated_h
#error "StatusEffectsComponent.generated.h already included, missing '#pragma once' in StatusEffectsComponent.h"
#endif
#define COURSE_ARPG_StatusEffectsComponent_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBurn); \
	DECLARE_FUNCTION(execStopBurning); \
	DECLARE_FUNCTION(execReturnSpeed);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatusEffectsComponent(); \
	friend struct Z_Construct_UClass_UStatusEffectsComponent_Statics; \
public: \
	DECLARE_CLASS(UStatusEffectsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UStatusEffectsComponent)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatusEffectsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStatusEffectsComponent(UStatusEffectsComponent&&); \
	UStatusEffectsComponent(const UStatusEffectsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatusEffectsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatusEffectsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatusEffectsComponent) \
	NO_API virtual ~UStatusEffectsComponent();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UStatusEffectsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_StatusEffectsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
