// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animations/BossAnimInstance_Grux.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_BossAnimInstance_Grux_generated_h
#error "BossAnimInstance_Grux.generated.h already included, missing '#pragma once' in BossAnimInstance_Grux.h"
#endif
#define COURSE_ARPG_BossAnimInstance_Grux_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleChargeStart); \
	DECLARE_FUNCTION(execHandleProjectileSpawn); \
	DECLARE_FUNCTION(execSetIsCharging);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBossAnimInstance_Grux(); \
	friend struct Z_Construct_UClass_UBossAnimInstance_Grux_Statics; \
public: \
	DECLARE_CLASS(UBossAnimInstance_Grux, UBossAnimInstance_Base, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UBossAnimInstance_Grux)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBossAnimInstance_Grux(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBossAnimInstance_Grux(UBossAnimInstance_Grux&&); \
	UBossAnimInstance_Grux(const UBossAnimInstance_Grux&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBossAnimInstance_Grux); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossAnimInstance_Grux); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossAnimInstance_Grux) \
	NO_API virtual ~UBossAnimInstance_Grux();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UBossAnimInstance_Grux>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Grux_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
