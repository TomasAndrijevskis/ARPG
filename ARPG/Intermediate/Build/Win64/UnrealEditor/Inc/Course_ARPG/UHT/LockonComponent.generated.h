// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat/LockonComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef COURSE_ARPG_LockonComponent_generated_h
#error "LockonComponent.generated.h already included, missing '#pragma once' in LockonComponent.h"
#endif
#define COURSE_ARPG_LockonComponent_generated_h

#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_9_DELEGATE \
COURSE_ARPG_API void FOnUpdatedTargetSignature_DelegateWrapper(const FMulticastScriptDelegate& OnUpdatedTargetSignature, AActor* NewTargetActorRef);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleLockon); \
	DECLARE_FUNCTION(execStartLockon);


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULockonComponent(); \
	friend struct Z_Construct_UClass_ULockonComponent_Statics; \
public: \
	DECLARE_CLASS(ULockonComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Course_ARPG"), NO_API) \
	DECLARE_SERIALIZER(ULockonComponent)


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULockonComponent(ULockonComponent&&); \
	ULockonComponent(const ULockonComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULockonComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULockonComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULockonComponent) \
	NO_API virtual ~ULockonComponent();


#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_11_PROLOG
#define FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COURSE_ARPG_API UClass* StaticClass<class ULockonComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_Combat_LockonComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
