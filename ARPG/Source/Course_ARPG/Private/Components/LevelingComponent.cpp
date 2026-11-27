
#include "Components/LevelingComponent.h"
#include "Data/XPLevels.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


void ULevelingComponent::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Error, TEXT("ULevelingComponent::BeginPlay"));
	if (!LevelDataTable) return;
	RequiredExperience = GetRequiredExperience();
}


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
	RequiredExperience = GetRequiredExperience();
	OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());
	if (CurrentExperience >= RequiredExperience && RequiredExperience != -1)
	{
		int32 AttributePointsAmountForLevel = GetAttributePointsForLevel();
		int32 AbilityUpgradePointsAmountForLevel = GetAbilityPointsForLevel();
		CurrentLevel++;
		CurrentExperience -= RequiredExperience;
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
	UE_LOG(LogTemp, Display, TEXT("current %i"), CurrentExperience)
	UE_LOG(LogTemp, Display, TEXT("Required %i"), RequiredExperience)
	return static_cast<float>(CurrentExperience) / RequiredExperience;;
}
