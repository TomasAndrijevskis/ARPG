
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/Data/XPLevels.h"
#include "SaveGame/ARPG_GameInstance.h"


void ULevelingComponent::BeginPlay()
{
	Super::BeginPlay();
	RequiredXP = GetRequiredXP();
}


void ULevelingComponent::AddXP(float XP)
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


float ULevelingComponent::GetRequiredXP()
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


bool ULevelingComponent::CanAddXP()
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


float ULevelingComponent::GetCurrentXP()
{
	return CurrentXP;
}


int ULevelingComponent::GetCurrentLevel()
{
	return  CurrentLevel;
}


int ULevelingComponent::GetCurrentStatPointsAmount()
{
	return AvailableStatPoints;
}


int ULevelingComponent::GetCurrentAbilityPointsAmount()
{
	return AvailableAbilityPoints;
}


void ULevelingComponent::SetXP(float NewXP)
{
	CurrentXP = NewXP;
}


void ULevelingComponent::SetLevel(int NewLevel)
{
	CurrentLevel = NewLevel;
}


void ULevelingComponent::SetStatPoints(int NewStatPointsAmount)
{
	AvailableStatPoints = NewStatPointsAmount;
}


void ULevelingComponent::SetAbilityPoints(int NewAbilityPointsAmount)
{
	AvailableAbilityPoints = NewAbilityPointsAmount;
}


float ULevelingComponent::GetXPPercentage()
{
	return CurrentXP / RequiredXP;
}

