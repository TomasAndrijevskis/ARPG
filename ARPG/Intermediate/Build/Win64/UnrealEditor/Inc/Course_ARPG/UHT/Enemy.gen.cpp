// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/Interfaces/Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemy();
COURSE_ARPG_API UClass* Z_Construct_UClass_UEnemy_NoRegister();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Interface UEnemy Function OnDeselect
void IEnemy::OnDeselect()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDeselect instead.");
}
static FName NAME_UEnemy_OnDeselect = FName(TEXT("OnDeselect"));
void IEnemy::Execute_OnDeselect(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEnemy::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEnemy_OnDeselect);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UEnemy_OnDeselect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_OnDeselect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "OnDeselect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnDeselect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_OnDeselect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnemy_OnDeselect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_OnDeselect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UEnemy Function OnDeselect

// Begin Interface UEnemy Function OnSelect
void IEnemy::OnSelect()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelect instead.");
}
static FName NAME_UEnemy_OnSelect = FName(TEXT("OnSelect"));
void IEnemy::Execute_OnSelect(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UEnemy::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UEnemy_OnSelect);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UEnemy_OnSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemy_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemy, nullptr, "OnSelect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemy_OnSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemy_OnSelect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UEnemy_OnSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemy_OnSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UEnemy Function OnSelect

// Begin Interface UEnemy
void UEnemy::StaticRegisterNativesUEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemy);
UClass* Z_Construct_UClass_UEnemy_NoRegister()
{
	return UEnemy::StaticClass();
}
struct Z_Construct_UClass_UEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Enemy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemy_OnDeselect, "OnDeselect" }, // 3175341073
		{ &Z_Construct_UFunction_UEnemy_OnSelect, "OnSelect" }, // 1834397257
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemy_Statics::ClassParams = {
	&UEnemy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemy()
{
	if (!Z_Registration_Info_UClass_UEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemy.OuterSingleton, Z_Construct_UClass_UEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemy.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UEnemy>()
{
	return UEnemy::StaticClass();
}
UEnemy::UEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemy);
UEnemy::~UEnemy() {}
// End Interface UEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemy, UEnemy::StaticClass, TEXT("UEnemy"), &Z_Registration_Info_UClass_UEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemy), 766191187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_2899423597(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_Course_ARPG_5_4___Copy_Source_Course_ARPG_Public_Interfaces_Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
