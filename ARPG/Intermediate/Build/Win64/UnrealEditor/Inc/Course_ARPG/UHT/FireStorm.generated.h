// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/Abilities/FireStorm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef COURSE_ARPG_FireStorm_generated_h
#error "FireStorm.generated.h already included, missing '#pragma once' in FireStorm.h"
#endif
#define COURSE_ARPG_FireStorm_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFireStorm(); \
	friend struct Z_Construct_UClass_AFireStorm_Statics; \
public: \
	DECLARE_CLASS(AFireStorm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AFireStorm)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFireStorm(AFireStorm&&); \
	AFireStorm(const AFireStorm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFireStorm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFireStorm); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFireStorm) \
	NO_API virtual ~AFireStorm();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_12_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AFireStorm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Abilities_FireStorm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
