
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/Data/XPLevels.h"
#include "SaveGame/ARPG_GameInstance.h"


void ULevelingComponent::BeginPlay()
{
	Super::BeginPlay();
	RequiredXP = GetRequiredXP();
}


void ULevelingComponent::AddXP(const float XP)
{
	if (!CanAddXP())
	{
		CurrentXP = 0;
		OnXpUpdateDelegate.Broadcast(GetXPPercentage());
		return;
	}
	CurrentXP += XP;
	TryLevelUp();
	Cast<AMainCharacter_Base>(GetOwner())->GetGameInstanceRef()->SaveStats();
}


void ULevelingComponent::TryLevelUp()
{
	RequiredXP = GetRequiredXP();
	OnXpUpdateDelegate.Broadcast(GetXPPercentage());
	if (CurrentXP >= RequiredXP && RequiredXP != -1)
	{
		CurrentLevel++;
		CurrentXP -= RequiredXP;
		OnNewLevelDelegate.Broadcast(CurrentLevel);
		OnXpUpdateDelegate.Broadcast(GetXPPercentage());

		SetStatPoints(AvailableStatPoints + StatPointsAmountForLevel);
		SetAbilityPoints(AvailableAbilityPoints + AbilityUpgradePointsAmountForLevel);
		UE_LOG(LogTemp, Warning, TEXT("Level up"));
	}
}



float ULevelingComponent::GetRequiredXP() const
{
	if (!LevelDataTable)
	{
		return -1;
	}
	if (GetNextLevelRow())
	{
		return GetNextLevelRow()->Experience;
	}
	else
	{
		return  -1;
	}
}


bool ULevelingComponent::CanAddXP() const
{
	if (!LevelDataTable)
	{
		return false;
	}
    
	FXPLevels* LevelRow = GetNextLevelRow();
	if (!LevelRow)
	{
		return false;
	}
	return true;
}


FXPLevels* ULevelingComponent::GetNextLevelRow() const
{
	FName RowName = FName(*FString::FromInt(CurrentLevel + 1));
	FXPLevels* LevelRow = LevelDataTable->FindRow<FXPLevels>(RowName, TEXT("Find Next Level Row"));

	if (!LevelRow)
	{
		return nullptr;
	}
	return LevelRow;
}


float ULevelingComponent::GetCurrentXP() const
{
	return CurrentXP;
}


int ULevelingComponent::GetCurrentLevel() const
{
	return  CurrentLevel;
}


int ULevelingComponent::GetCurrentStatPointsAmount() const
{
	return AvailableStatPoints;
}


int ULevelingComponent::GetCurrentAbilityPointsAmount() const
{
	return AvailableAbilityPoints;
}


void ULevelingComponent::SetXP(const float NewXP)
{
	CurrentXP = NewXP;
}


void ULevelingComponent::SetLevel(const int NewLevel)
{
	CurrentLevel = NewLevel;
}


void ULevelingComponent::SetStatPoints(const int NewStatPointsAmount)
{
	AvailableStatPoints = NewStatPointsAmount;
}


void ULevelingComponent::SetAbilityPoints(const int NewAbilityPointsAmount)
{
	AvailableAbilityPoints = NewAbilityPointsAmount;
}


float ULevelingComponent::GetXPPercentage() const
{
	return CurrentXP / RequiredXP;
}

