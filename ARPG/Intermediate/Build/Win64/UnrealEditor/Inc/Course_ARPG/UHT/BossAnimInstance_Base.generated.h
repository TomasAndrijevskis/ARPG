// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animations/BossAnimInstance_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_BossAnimInstance_Base_generated_h
#error "BossAnimInstance_Base.generated.h already included, missing '#pragma once' in BossAnimInstance_Base.h"
#endif
#define COURSE_ARPG_BossAnimInstance_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateSpeed); \
	DECLARE_FUNCTION(execHandleResetAttack);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBossAnimInstance_Base(); \
	friend struct Z_Construct_UClass_UBossAnimInstance_Base_Statics; \
public: \
	DECLARE_CLASS(UBossAnimInstance_Base, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(UBossAnimInstance_Base)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBossAnimInstance_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBossAnimInstance_Base(UBossAnimInstance_Base&&); \
	UBossAnimInstance_Base(const UBossAnimInstance_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBossAnimInstance_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBossAnimInstance_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBossAnimInstance_Base) \
	NO_API virtual ~UBossAnimInstance_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UBossAnimInstance_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Animations_BossAnimInstance_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
