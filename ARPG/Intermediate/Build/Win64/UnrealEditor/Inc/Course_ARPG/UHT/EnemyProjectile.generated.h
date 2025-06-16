// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/EnemyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_EnemyProjectile_generated_h
#error "EnemyProjectile.generated.h already included, missing '#pragma once' in EnemyProjectile.h"
#endif
#define COURSE_ARPG_EnemyProjectile_generated_h

#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyProjectile(); \
	friend struct Z_Construct_UClass_AEnemyProjectile_Statics; \
public: \
	DECLARE_CLASS(AEnemyProjectile, AProjectile_Base, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AEnemyProjectile)


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemyProjectile(AEnemyProjectile&&); \
	AEnemyProjectile(const AEnemyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyProjectile) \
	NO_API virtual ~AEnemyProjectile();


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h_10_PROLOG
#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h_13_INCLASS_NO_PURE_DECLS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AEnemyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_EnemyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
