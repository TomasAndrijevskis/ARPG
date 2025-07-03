// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/MainCharacter_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UAbilityComponent_Base;
class UARPG_GameInstance;
class UDamageType;
class UPlayerWidget;
#ifdef COURSE_ARPG_MainCharacter_Base_generated_h
#error "MainCharacter_Base.generated.h already included, missing '#pragma once' in MainCharacter_Base.h"
#endif
#define COURSE_ARPG_MainCharacter_Base_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateUI); \
	DECLARE_FUNCTION(execPlayHurtAnimation); \
	DECLARE_FUNCTION(execHandleDeath); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execCreateAbilitiesFooter); \
	DECLARE_FUNCTION(execGetGameInstanceRef); \
	DECLARE_FUNCTION(execGetAbilitiesArray); \
	DECLARE_FUNCTION(execGetPlayerWidget); \
	DECLARE_FUNCTION(execHasEnoughMana); \
	DECLARE_FUNCTION(execHasEnoughStamina);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter_Base(); \
	friend struct Z_Construct_UClass_AMainCharacter_Base_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AMainCharacter_Base*>(this); }


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCharacter_Base(AMainCharacter_Base&&); \
	AMainCharacter_Base(const AMainCharacter_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter_Base) \
	NO_API virtual ~AMainCharacter_Base();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_16_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class AMainCharacter_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Characters_MainCharacter_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
