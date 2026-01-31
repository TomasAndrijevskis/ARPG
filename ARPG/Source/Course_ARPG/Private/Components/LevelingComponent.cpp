
#include "Components/LevelingComponent.h"
#include "Data/XPLevels.h"
#include "Characters/Player/MainCharacter_Base.h"


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
		OnXpUpdatedDelegate.Broadcast(GetXPPercentage());
		return;
	}
	CurrentXP += XP;
	TryLevelUp();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(GetOwner());
	if (!PlayerRef) return;
	PlayerRef->SaveData();
}


void ULevelingComponent::TryLevelUp()
{
	RequiredXP = GetRequiredXP();
	OnXpUpdatedDelegate.Broadcast(GetXPPercentage());
	if (CurrentXP >= RequiredXP && RequiredXP != -1)
	{
		CurrentLevel++;
		CurrentXP -= RequiredXP;
		OnNewLevelDelegate.Broadcast();
		OnLevelUpdatedDelegate.Broadcast(CurrentLevel);
		OnXpUpdatedDelegate.Broadcast(GetXPPercentage());

		SetAttributePoints(AvailableAttributePoints + AttributePointsAmountForLevel);
		SetAbilityPoints(AvailableAbilityPoints + AbilityUpgradePointsAmountForLevel);
	}
}


float ULevelingComponent::GetRequiredXP() const
{
	if (!LevelDataTable) return -1;
	if (GetNextLevelRow()) return GetNextLevelRow()->Experience;
	return  -1;
}


FString ULevelingComponent::GetXPDisplayData() const
{
	return FString::FromInt(GetCurrentXP()) + " / " + FString::FromInt(GetRequiredXP());
}


bool ULevelingComponent::CanAddXP() const
{
	if (!LevelDataTable) return false;
	FXPLevels* LevelRow = GetNextLevelRow();
	if (!LevelRow) return false;
	return true;
}


FXPLevels* ULevelingComponent::GetNextLevelRow() const
{
	FName RowName = FName(*FString::FromInt(CurrentLevel + 1));
	FXPLevels* LevelRow = LevelDataTable->FindRow<FXPLevels>(RowName, TEXT("Find Next Level Row"));
	if (!LevelRow) return nullptr;
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


int ULevelingComponent::GetCurrentAttributePointsAmount() const
{
	return AvailableAttributePoints;
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


void ULevelingComponent::SetAttributePoints(const int NewStatPointsAmount)
{
	AvailableAttributePoints = NewStatPointsAmount;
}


void ULevelingComponent::SetAbilityPoints(const int NewAbilityPointsAmount)
{
	AvailableAbilityPoints = NewAbilityPointsAmount;
}


float ULevelingComponent::GetXPPercentage() const
{
	return CurrentXP / RequiredXP;
}


void ULevelingComponent::SetUsedAttributePoints(const int NewUsedStatPoints)
{
	UsedAttributePoints = NewUsedStatPoints;
}


int ULevelingComponent::GetUsedAttributePoints() const
{
	return UsedAttributePoints;
}


void ULevelingComponent::IncreaseUsedStatPoints()
{
	UsedAttributePoints++;
}