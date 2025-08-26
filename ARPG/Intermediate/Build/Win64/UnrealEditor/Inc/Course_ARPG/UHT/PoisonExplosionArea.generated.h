// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/PoisonExplosionArea.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_PoisonExplosionArea_generated_h
#error "PoisonExplosionArea.generated.h already included, missing '#pragma once' in PoisonExplosionArea.h"
#endif
#define COURSE_ARPG_PoisonExplosionArea_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_11_DELEGATE \
COURSE_ARPG_API void FOnExplosionTriggeredSignature_DelegateWrapper(const FMulticastScriptDelegate& OnExplosionTriggeredSignature);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckPlayerInRange);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPoisonExplosionArea(); \
	friend struct Z_Construct_UClass_APoisonExplosionArea_Statics; \
public: \
	DECLARE_CLASS(APoisonExplosionArea, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(APoisonExplosionArea)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APoisonExplosionArea(APoisonExplosionArea&&); \
	APoisonExplosionArea(const APoisonExplosionArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APoisonExplosionArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APoisonExplosionArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APoisonExplosionArea) \
	NO_API virtual ~APoisonExplosionArea();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class APoisonExplosionArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_PoisonExplosionArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
