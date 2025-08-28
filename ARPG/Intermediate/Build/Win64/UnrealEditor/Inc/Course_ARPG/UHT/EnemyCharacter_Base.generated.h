// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/EnemyCharacter_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class APawn;
class UDamageType;
#ifdef COURSE_ARPG_EnemyCharacter_Base_generated_h
#error "EnemyCharacter_Base.generated.h already included, missing '#pragma once' in EnemyCharacter_Base.h"
#endif
#define COURSE_ARPG_EnemyCharacter_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishedDeathAnim); \
	DECLARE_FUNCTION(execHandlePlayerDeath); \
	DECLARE_FUNCTION(execSetupAI); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execCreateHealthWidget); \
	DECLARE_FUNCTION(execDetectPawn);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter_Base(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Base_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyCharacter_Base*>(this); }


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyCharacter_Base(AEnemyCharacter_Base&&); \
	AEnemyCharacter_Base(const AEnemyCharacter_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter_Base) \
	NO_API virtual ~AEnemyCharacter_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_19_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AEnemyCharacter_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_EnemyCharacter_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
