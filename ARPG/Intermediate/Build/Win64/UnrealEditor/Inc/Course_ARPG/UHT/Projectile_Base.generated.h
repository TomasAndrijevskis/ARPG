// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/Projectile_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COURSE_ARPG_Projectile_Base_generated_h
#error "Projectile_Base.generated.h already included, missing '#pragma once' in Projectile_Base.h"
#endif
#define COURSE_ARPG_Projectile_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyProjectile); \
	DECLARE_FUNCTION(execHandleBeginOverlap);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile_Base(); \
	friend struct Z_Construct_UClass_AProjectile_Base_Statics; \
public: \
	DECLARE_CLASS(AProjectile_Base, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_Base)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectile_Base(AProjectile_Base&&); \
	AProjectile_Base(const AProjectile_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile_Base) \
	NO_API virtual ~AProjectile_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_8_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AProjectile_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_Projectile_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
