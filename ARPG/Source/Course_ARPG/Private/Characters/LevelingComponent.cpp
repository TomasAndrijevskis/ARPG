
#include "Characters/LevelingComponent.h"

#include "Characters/MainCharacter_Base.h"
#include "Characters/Data/XPLevels.h"
#include "SaveGame/ARPG_GameInstance.h"


void ULevelingComponent::AddExperience(float XP)
{
	CurrentXP += XP;
	OnXpUpdateDelegate.Broadcast(CurrentXP);
	TryLevelUp();
	Cast<AMainCharacter_Base>(GetOwner())->GetGameInstanceRef()->SaveStats();
}


void ULevelingComponent::TryLevelUp()
{
	if (!LevelDataTable)
	{
		UE_LOG(LogTemp, Error, TEXT("Cant load levels data table"));
		return;
	}

	FName RowName = FName(*FString::FromInt(CurrentLevel + 1));
    
	FXPLevels* LevelRow = LevelDataTable->FindRow<FXPLevels>(RowName, TEXT("Level to look for"));
	if (!LevelRow)
	{
		UE_LOG(LogTemp, Warning, TEXT("No level row found for %s"), *RowName.ToString());
		return;
	}

	float XPRequired = LevelRow->Experience;
	
	if (CurrentXP >= XPRequired)
	{
		CurrentLevel++;
		CurrentXP -= XPRequired;
		OnNewLevelDelegate.Broadcast(CurrentLevel);
		OnXpUpdateDelegate.Broadcast(CurrentXP);

		SetStatPoints(AvailableStatPoints + StatPointsAmountForLevel);
		SetAbilityPoints(AvailableAbilityPoints + AbilityUpgradePointsAmountForLevel);
		UE_LOG(LogTemp, Warning, TEXT("Level up"));
	}
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


void ULevelingComponent::SetExperience(float NewXP)
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


