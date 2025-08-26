// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animations/AnimInstance_Fey.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_AnimInstance_Fey_generated_h
#error "AnimInstance_Fey.generated.h already included, missing '#pragma once' in AnimInstance_Fey.h"
#endif
#define COURSE_ARPG_AnimInstance_Fey_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleSummonMinions); \
	DECLARE_FUNCTION(execExplodePoisonArea); \
	DECLARE_FUNCTION(execSpawnPoisonArea); \
	DECLARE_FUNCTION(execHandleProjectileSpawn);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimInstance_Fey(); \
	friend struct Z_Construct_UClass_UAnimInstance_Fey_Statics; \
public: \
	DECLARE_CLASS(UAnimInstance_Fey, UAnimInstance_Base, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UAnimInstance_Fey)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimInstance_Fey(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimInstance_Fey(UAnimInstance_Fey&&); \
	UAnimInstance_Fey(const UAnimInstance_Fey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimInstance_Fey); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimInstance_Fey); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimInstance_Fey) \
	NO_API virtual ~UAnimInstance_Fey();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_9_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UAnimInstance_Fey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_AnimInstance_Fey_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
