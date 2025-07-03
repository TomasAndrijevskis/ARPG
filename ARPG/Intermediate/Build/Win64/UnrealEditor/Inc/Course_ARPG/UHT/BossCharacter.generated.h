// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/BossCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;
class UBossHealthBar;
class UDamageType;
#ifdef COURSE_ARPG_BossCharacter_generated_h
#error "BossCharacter.generated.h already included, missing '#pragma once' in BossCharacter.h"
#endif
#define COURSE_ARPG_BossCharacter_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execFinishedDeathAnim); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execHandlePlayerDeath); \
	DECLARE_FUNCTION(execCreateBossWidget); \
	DECLARE_FUNCTION(execDetectPawn); \
	DECLARE_FUNCTION(execGetBossHealthBarWidget);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossCharacter(); \
	friend struct Z_Construct_UClass_ABossCharacter_Statics; \
public: \
	DECLARE_CLASS(ABossCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ABossCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABossCharacter*>(this); }


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABossCharacter(ABossCharacter&&); \
	ABossCharacter(const ABossCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossCharacter) \
	NO_API virtual ~ABossCharacter();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_14_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ABossCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_BossCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
