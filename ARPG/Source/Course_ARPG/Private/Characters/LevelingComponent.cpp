
#include "Characters/LevelingComponent.h"
#include "Characters/Data/XPLevels.h"


void ULevelingComponent::AddExperience(float XP)
{
	CurrentXP += XP;
	OnXpUpdateDelegate.Broadcast(CurrentXP);
	TryLevelUp();
}


float ULevelingComponent::GetCurrentExperience()
{
	return CurrentXP;
}


int ULevelingComponent::GetCurrentLevel()
{
	return  CurrentLevel;
}


int ULevelingComponent::GetCurrentPointsAmount()
{
	return CurrentPoints;
}


void ULevelingComponent::SetExperience(float NewXP)
{
	CurrentXP = NewXP;
}


void ULevelingComponent::SetLevel(int NewLevel)
{
	CurrentLevel = NewLevel;
}


void ULevelingComponent::SetPoints(int NewPointsAmount)
{
	CurrentPoints = NewPointsAmount;
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

		SetPoints(CurrentPoints+5);
		
		UE_LOG(LogTemp, Warning, TEXT("Level up"));
	}
}
