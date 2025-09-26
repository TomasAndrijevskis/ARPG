// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/DeathTrigger.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef COURSE_ARPG_DeathTrigger_generated_h
#error "DeathTrigger.generated.h already included, missing '#pragma once' in DeathTrigger.h"
#endif
#define COURSE_ARPG_DeathTrigger_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathTrigger(); \
	friend struct Z_Construct_UClass_ADeathTrigger_Statics; \
public: \
	DECLARE_CLASS(ADeathTrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ADeathTrigger)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeathTrigger(ADeathTrigger&&); \
	ADeathTrigger(const ADeathTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathTrigger) \
	NO_API virtual ~ADeathTrigger();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ADeathTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_DeathTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
