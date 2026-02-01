
#include "Components/LevelingComponent.h"
#include "Data/XPLevels.h"
#include "Characters/Player/MainCharacter_Base.h"


void ULevelingComponent::BeginPlay()
{
	Super::BeginPlay();
	RequiredExperience = GetRequiredExperience();
}


void ULevelingComponent::AddExperience(const float Experience)
{
	if (!CanAddExperience())
	{
		CurrentExperience = 0;
		OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());
		return;
	}
	CurrentExperience += Experience;
	TryLevelUp();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(GetOwner());
	if (!PlayerRef) return;
	PlayerRef->SaveData();
}


void ULevelingComponent::TryLevelUp()
{
	RequiredExperience = GetRequiredExperience();
	OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());
	if (CurrentExperience >= RequiredExperience && RequiredExperience != -1)
	{
		CurrentLevel++;
		CurrentExperience -= RequiredExperience;
		OnNewLevelDelegate.Broadcast();
		OnLevelUpdatedDelegate.Broadcast(CurrentLevel);
		OnExperienceUpdatedDelegate.Broadcast(GetExperiencePercentage());

		SetAttributePoints(AvailableAttributePoints + AttributePointsAmountForLevel);
		SetAbilityPoints(AvailableAbilityPoints + AbilityUpgradePointsAmountForLevel);
	}
}


float ULevelingComponent::GetRequiredExperience() const
{
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


float ULevelingComponent::GetCurrentExperience() const
{
	return CurrentExperience;
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


void ULevelingComponent::SetExperience(const float NewExperience)
{
	CurrentExperience = NewExperience;
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


float ULevelingComponent::GetExperiencePercentage() const
{
	return CurrentExperience / RequiredExperience;
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