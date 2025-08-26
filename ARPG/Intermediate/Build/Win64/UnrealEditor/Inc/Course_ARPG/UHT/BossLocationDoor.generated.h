// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Obstacles/BossLocationDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef COURSE_ARPG_BossLocationDoor_generated_h
#error "BossLocationDoor.generated.h already included, missing '#pragma once' in BossLocationDoor.h"
#endif
#define COURSE_ARPG_BossLocationDoor_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABossLocationDoor(); \
	friend struct Z_Construct_UClass_ABossLocationDoor_Statics; \
public: \
	DECLARE_CLASS(ABossLocationDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ABossLocationDoor)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABossLocationDoor(ABossLocationDoor&&); \
	ABossLocationDoor(const ABossLocationDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABossLocationDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABossLocationDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABossLocationDoor) \
	NO_API virtual ~ABossLocationDoor();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ABossLocationDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Obstacles_BossLocationDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
