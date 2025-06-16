// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Combat/BlockComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockComponent() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_UBlockComponent();
COURSE_ARPG_API UClass* Z_Construct_UClass_UBlockComponent_NoRegister();
COURSE_ARPG_API UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Delegate FOnBlockSignature
struct Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics
{
	struct _Script_Course_ARPG_eventOnBlockSignature_Parms
	{
		float Cost;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Course_ARPG_eventOnBlockSignature_Parms, Cost), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::NewProp_Cost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Course_ARPG, nullptr, "OnBlockSignature__DelegateSignature", "BlockComponent", "OnBlockDelegate", Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnBlockSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::_Script_Course_ARPG_eventOnBlockSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBlockSignature_DelegateWrapper(const FMulticastScriptDelegate& OnBlockSignature, float Cost)
{
	struct _Script_Course_ARPG_eventOnBlockSignature_Parms
	{
		float Cost;
	};
	_Script_Course_ARPG_eventOnBlockSignature_Parms Parms;
	Parms.Cost=Cost;
	OnBlockSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBlockSignature

// Begin Class UBlockComponent
void UBlockComponent::StaticRegisterNativesUBlockComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockComponent);
UClass* Z_Construct_UClass_UBlockComponent_NoRegister()
{
	return UBlockComponent::StaticClass();
}
struct Z_Construct_UClass_UBlockComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Combat/BlockComponent.h" },
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlockDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCost_MetaData[] = {
		{ "Category", "BlockComponent" },
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockAnimMontage_MetaData[] = {
		{ "Category", "BlockComponent" },
		{ "ModuleRelativePath", "Public/Combat/BlockComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlockDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAnimMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBlockComponent_Statics::NewProp_OnBlockDelegate = { "OnBlockDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockComponent, OnBlockDelegate), Z_Construct_USparseDelegateFunction_Course_ARPG_OnBlockSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlockDelegate_MetaData), NewProp_OnBlockDelegate_MetaData) }; // 4029107865
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockComponent_Statics::NewProp_StaminaCost = { "StaminaCost", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockComponent, StaminaCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCost_MetaData), NewProp_StaminaCost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlockComponent_Statics::NewProp_BlockAnimMontage = { "BlockAnimMontage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockComponent, BlockAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockAnimMontage_MetaData), NewProp_BlockAnimMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockComponent_Statics::NewProp_OnBlockDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockComponent_Statics::NewProp_StaminaCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockComponent_Statics::NewProp_BlockAnimMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlockComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockComponent_Statics::ClassParams = {
	&UBlockComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBlockComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlockComponent()
{
	if (!Z_Registration_Info_UClass_UBlockComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockComponent.OuterSingleton, Z_Construct_UClass_UBlockComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlockComponent.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UBlockComponent>()
{
	return UBlockComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockComponent);
UBlockComponent::~UBlockComponent() {}
// End Class UBlockComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_BlockComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlockComponent, UBlockComponent::StaticClass, TEXT("UBlockComponent"), &Z_Registration_Info_UClass_UBlockComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockComponent), 2568915698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_BlockComponent_h_1641786496(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_BlockComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Combat_BlockComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
