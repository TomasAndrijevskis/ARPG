// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Course_ARPG/Public/SaveGame/ARPG_SaveGame.h"
#include "Course_ARPG/Public/SaveGame/AbilityData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_SaveGame() {}

// Begin Cross Module References
COURSE_ARPG_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
COURSE_ARPG_API UClass* Z_Construct_UClass_UARPG_SaveGame();
COURSE_ARPG_API UClass* Z_Construct_UClass_UARPG_SaveGame_NoRegister();
COURSE_ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FAbilityData();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_Course_ARPG();
// End Cross Module References

// Begin Class UARPG_SaveGame
void UARPG_SaveGame::StaticRegisterNativesUARPG_SaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARPG_SaveGame);
UClass* Z_Construct_UClass_UARPG_SaveGame_NoRegister()
{
	return UARPG_SaveGame::StaticClass();
}
struct Z_Construct_UClass_UARPG_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGame/ARPG_SaveGame.h" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMana_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentXP_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLevel_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStatPoints_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAbilityPoints_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedAbilities_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "Category", "ARPG_SaveGame" },
		{ "ModuleRelativePath", "Public/SaveGame/ARPG_SaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMana;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentXP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStatPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAbilityPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnlockedAbilities_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnlockedAbilities_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UnlockedAbilities;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARPG_SaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentMana = { "CurrentMana", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, CurrentMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMana_MetaData), NewProp_CurrentMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_MaxMana = { "MaxMana", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, MaxMana), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMana_MetaData), NewProp_MaxMana_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, Strength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentXP = { "CurrentXP", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, CurrentXP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentXP_MetaData), NewProp_CurrentXP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentLevel = { "CurrentLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, CurrentLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLevel_MetaData), NewProp_CurrentLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentStatPoints = { "CurrentStatPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, CurrentStatPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStatPoints_MetaData), NewProp_CurrentStatPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentAbilityPoints = { "CurrentAbilityPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, CurrentAbilityPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAbilityPoints_MetaData), NewProp_CurrentAbilityPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_UnlockedAbilities_ValueProp = { "UnlockedAbilities", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAbilityData, METADATA_PARAMS(0, nullptr) }; // 2470938448
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_UnlockedAbilities_Key_KeyProp = { "UnlockedAbilities_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_UnlockedAbilities = { "UnlockedAbilities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, UnlockedAbilities), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedAbilities_MetaData), NewProp_UnlockedAbilities_MetaData) }; // 2470938448
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UARPG_SaveGame, PlayerCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARPG_SaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_MaxMana,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentXP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentStatPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_CurrentAbilityPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_UnlockedAbilities_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_UnlockedAbilities_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_UnlockedAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARPG_SaveGame_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_SaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UARPG_SaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Course_ARPG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_SaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UARPG_SaveGame_Statics::ClassParams = {
	&UARPG_SaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UARPG_SaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_SaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UARPG_SaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UARPG_SaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UARPG_SaveGame()
{
	if (!Z_Registration_Info_UClass_UARPG_SaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARPG_SaveGame.OuterSingleton, Z_Construct_UClass_UARPG_SaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UARPG_SaveGame.OuterSingleton;
}
template<> COURSE_ARPG_API UClass* StaticClass<UARPG_SaveGame>()
{
	return UARPG_SaveGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UARPG_SaveGame);
UARPG_SaveGame::~UARPG_SaveGame() {}
// End Class UARPG_SaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_SaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UARPG_SaveGame, UARPG_SaveGame::StaticClass, TEXT("UARPG_SaveGame"), &Z_Registration_Info_UClass_UARPG_SaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARPG_SaveGame), 4158516713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_SaveGame_h_68819822(TEXT("/Script/Course_ARPG"),
	Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_SaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_projects_GIT_HUB_ARPG_ARPG_Source_Course_ARPG_Public_SaveGame_ARPG_SaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
