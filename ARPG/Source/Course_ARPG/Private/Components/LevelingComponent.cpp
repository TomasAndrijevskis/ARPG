
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
	PlayerRef->SaveAllExceptPosition();
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


void ULevelingComponent::SetExperience(const float NewExperience){CurrentExperience = NewExperience;}

void ULevelingComponent::SetLevel(const int NewLevel){CurrentLevel = NewLevel;}

void ULevelingComponent::SetAttributePoints(const int NewStatPointsAmount){AvailableAttributePoints = NewStatPointsAmount;}

void ULevelingComponent::SetAbilityPoints(const int NewAbilityPointsAmount){AvailableAbilityPoints = NewAbilityPointsAmount;}

void ULevelingComponent::SetUsedAttributePoints(const int NewUsedStatPoints){UsedAttributePoints = NewUsedStatPoints;}

void ULevelingComponent::IncreaseUsedStatPoints(){UsedAttributePoints++;}

int ULevelingComponent::GetAttributePointsForLevel() const{return GetNextLevelRow()->AttributePointsPerLevel;}

int ULevelingComponent::GetAbilityPointsForLevel() const{return GetNextLevelRow()->AbilityPointsPerLevel;}

int ULevelingComponent::GetUsedAttributePoints() const{return UsedAttributePoints;}

int ULevelingComponent::GetCurrentLevel() const{return  CurrentLevel;}

int ULevelingComponent::GetCurrentAttributePointsAmount() const{return AvailableAttributePoints;}

int ULevelingComponent::GetCurrentAbilityPointsAmount() const{return AvailableAbilityPoints;}

float ULevelingComponent::GetExperiencePercentage() const{return CurrentExperience / RequiredExperience;}

float ULevelingComponent::GetCurrentExperience() const{return CurrentExperience;}