
#include "Components/LevelingComponent.h"
#include "Data/XPLevels.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


void ULevelingComponent::LoadLevelData(FPlayerLevelData Data)
{
	SetLevel(Data.CurrentLevel);
	SetExperience(Data.CurrentExperience);
	SetAbilityPoints(Data.CurrentAbilityPoints);
	SetAttributePoints(Data.CurrentAttributePoints);
}


FPlayerLevelData ULevelingComponent::SaveLevelData() const
{
	FPlayerLevelData Data;
	Data.CurrentLevel = CurrentLevel;
	Data.CurrentExperience = CurrentExperience;
	Data.CurrentAttributePoints = AvailableAttributePoints;
	Data.CurrentAbilityPoints = AvailableAbilityPoints;
	Data.RequiredExperience = 0;
	return Data;
}


void ULevelingComponent::AddExperience(const int Experience)
{
	if (!CanAddExperience())
	{
		CurrentExperience = 0;
		OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());
		return;
	}
	CurrentExperience += Experience;
	TryLevelUp();
	if (UARPG_GameInstance* GI = Cast<UARPG_GameInstance>(UGameplayStatics::GetGameInstance(GetWorld())))
	{
		GI->SaveAll();
	}
}


void ULevelingComponent::TryLevelUp()
{
	const int32 RequiredXP = GetRequiredExperience();
	OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());
	if (CurrentExperience >= RequiredXP && RequiredXP != -1)
	{
		int32 AttributePointsAmountForLevel = GetAttributePointsForLevel();
		int32 AbilityUpgradePointsAmountForLevel = GetAbilityPointsForLevel();
		CurrentLevel++;
		CurrentExperience -= RequiredXP;
		OnNewLevelDelegate.Broadcast(AbilityUpgradePointsAmountForLevel, AttributePointsAmountForLevel);
		OnLevelUpdatedDelegate.Broadcast(CurrentLevel);
		OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());

		SetAttributePoints(AvailableAttributePoints + AttributePointsAmountForLevel);
		SetAbilityPoints(AvailableAbilityPoints + AbilityUpgradePointsAmountForLevel);
	}
}


int ULevelingComponent::GetRequiredExperience() const
{
	UE_LOG(LogTemp, Warning, TEXT("current %i"), CurrentExperience)
	UE_LOG(LogTemp, Warning, TEXT("Level %i"), CurrentLevel);
	if (!LevelDataTable) return -1;
	if (GetNextLevelRow()) return GetNextLevelRow()->Experience;
	return  -1;
}


bool ULevelingComponent::CanAddExperience() const
{
	if (!LevelDataTable) return false;
	FXPLevels* LevelRow = GetNextLevelRow();
	if (!LevelRow) return false;
	return true;
}


FXPLevels* ULevelingComponent::GetNextLevelRow() const
{
	const FName RowName = FName(*FString::FromInt(CurrentLevel + 1));
	FXPLevels* LevelRow = LevelDataTable->FindRow<FXPLevels>(RowName, TEXT("Find Next Level Row"));
	if (!LevelRow) return nullptr;
	return LevelRow;
}


float ULevelingComponent::GetExperiencePercentage() const
{
	const int32 RequiredXP = GetRequiredExperience();
	if (RequiredXP <= 0) return 0.f;
	return FMath::Clamp(static_cast<float>(CurrentExperience) / RequiredXP, 0.f, 1.f);
}
