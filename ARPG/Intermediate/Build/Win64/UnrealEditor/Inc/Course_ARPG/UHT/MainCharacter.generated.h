// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COURSE_ARPG_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define COURSE_ARPG_MainCharacter_generated_h

#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPlayHurtAnimation); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execHasEnoughStamina);


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AMainCharacter*>(this); }


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&); \
	AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_12_PROLOG
#define FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Characters_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
