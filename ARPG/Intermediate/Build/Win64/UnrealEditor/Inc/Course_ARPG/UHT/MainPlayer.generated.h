// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/MainPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_MainPlayer_generated_h
#error "MainPlayer.generated.h already included, missing '#pragma once' in MainPlayer.h"
#endif
#define COURSE_ARPG_MainPlayer_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COURSE_ARPG_API UMainPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainPlayer(UMainPlayer&&); \
	UMainPlayer(const UMainPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COURSE_ARPG_API, UMainPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainPlayer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainPlayer) \
	COURSE_ARPG_API virtual ~UMainPlayer();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMainPlayer(); \
	friend struct Z_Construct_UClass_UMainPlayer_Statics; \
public: \
	DECLARE_CLASS(UMainPlayer, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Course_ARPG"), COURSE_ARPG_API) \
	DECLARE_SERIALIZER(UMainPlayer)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_GENERATED_UINTERFACE_BODY() \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMainPlayer() {} \
public: \
	typedef UMainPlayer UClassType; \
	typedef IMainPlayer ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_10_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class UMainPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Interfaces_MainPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
