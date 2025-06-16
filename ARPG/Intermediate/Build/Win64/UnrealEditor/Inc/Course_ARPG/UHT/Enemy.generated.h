// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define COURSE_ARPG_Enemy_generated_h

#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_CALLBACK_WRAPPERS
#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COURSE_ARPG_API UEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemy(UEnemy&&); \
	UEnemy(const UEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COURSE_ARPG_API, UEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemy); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemy) \
	COURSE_ARPG_API virtual ~UEnemy();


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemy(); \
	friend struct Z_Construct_UClass_UEnemy_Statics; \
public: \
	DECLARE_CLASS(UEnemy, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Course_ARPG"), COURSE_ARPG_API) \
	DECLARE_SERIALIZER(UEnemy)


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_GENERATED_UINTERFACE_BODY() \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemy() {} \
public: \
	typedef UEnemy UClassType; \
	typedef IEnemy ThisClass; \
	static void Execute_OnDeselect(UObject* O); \
	static void Execute_OnSelect(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_10_PROLOG
#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_CALLBACK_WRAPPERS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
