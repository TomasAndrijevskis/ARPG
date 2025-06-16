// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Fighter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_Fighter_generated_h
#error "Fighter.generated.h already included, missing '#pragma once' in Fighter.h"
#endif
#define COURSE_ARPG_Fighter_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COURSE_ARPG_API UFighter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFighter(UFighter&&); \
	UFighter(const UFighter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COURSE_ARPG_API, UFighter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFighter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFighter) \
	COURSE_ARPG_API virtual ~UFighter();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFighter(); \
	friend struct Z_Construct_UClass_UFighter_Statics; \
public: \
	DECLARE_CLASS(UFighter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Course_ARPG"), COURSE_ARPG_API) \
	DECLARE_SERIALIZER(UFighter)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_GENERATED_UINTERFACE_BODY() \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFighter() {} \
public: \
	typedef UFighter UClassType; \
	typedef IFighter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_10_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UFighter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_Fighter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
