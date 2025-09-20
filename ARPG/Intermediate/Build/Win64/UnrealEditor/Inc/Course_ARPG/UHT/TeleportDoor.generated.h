// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Objects/TeleportDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef COURSE_ARPG_TeleportDoor_generated_h
#error "TeleportDoor.generated.h already included, missing '#pragma once' in TeleportDoor.h"
#endif
#define COURSE_ARPG_TeleportDoor_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetupWidget); \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleportDoor(); \
	friend struct Z_Construct_UClass_ATeleportDoor_Statics; \
public: \
	DECLARE_CLASS(ATeleportDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ATeleportDoor)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATeleportDoor(ATeleportDoor&&); \
	ATeleportDoor(const ATeleportDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleportDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleportDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeleportDoor) \
	NO_API virtual ~ATeleportDoor();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_13_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ATeleportDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Objects_TeleportDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
