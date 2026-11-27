
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/XPLevels.h"
#include "Data/PersistentData/PlayerLevelData.h"
#include "LevelingComponent.generated.h"


DECLARE_MULTICAST_DELEGATE_TwoParams(FOnNewLevel, int32, int32);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnLevelUpdated, int32);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnExperienceUpdated, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributePointsUpdate, int32);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityPointsUpdate, int32);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULevelingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void AddExperience(const int32 Experience);
	
	UFUNCTION()
	float GetCurrentExperience() const {return CurrentExperience;}

	UFUNCTION()
	int32 GetCurrentLevel() const {return  CurrentLevel;}
	
	int32 GetCurrentAttributePointsAmount() const {return AvailableAttributePoints;}
	
	int32 GetCurrentAbilityPointsAmount() const {return AvailableAbilityPoints;}

	UFUNCTION()
	void SetExperience(const int32 NewExperience) {CurrentExperience = NewExperience;}

	UFUNCTION()
	void SetLevel(const int32 NewLevel) {CurrentLevel = NewLevel;}

	bool IsLevelMaxed() const {return bIsLevelMaxed;}
	
	void SetAttributePoints(const int32 NewStatPointsAmount) {AvailableAttributePoints = NewStatPointsAmount;}
	
	void SetAbilityPoints(const int32 NewAbilityPointsAmount) {AvailableAbilityPoints = NewAbilityPointsAmount;}

	UFUNCTION()
	float GetExperiencePercentage() const;

	void SetUsedAttributePoints(const int32 NewUsedStatPoints) {UsedAttributePoints = NewUsedStatPoints;}

	int32 GetUsedAttributePoints() const {return UsedAttributePoints;}

	void IncreaseUsedStatPoints() {UsedAttributePoints++;}

	int32 GetRequiredExperience() const;

	void LoadLevelData(FPlayerLevelData Data);

	FPlayerLevelData SaveLevelData() const;
	
	FOnLevelUpdated OnLevelUpdatedDelegate;
	
	FOnExperienceUpdated OnExperienceUpdatedDelegate;
	
	FOnAttributePointsUpdate OnAttributePointsUpdateDelegate;
	
	FOnAbilityPointsUpdate OnAbilityPointsUpdateDelegate;
	
	FOnNewLevel OnNewLevelDelegate;
	
private:
	
	void TryLevelUp();

	bool CanAddExperience() const;
	
	FXPLevels* GetNextLevelRow() const;
	
	int32 GetAttributePointsForLevel() const {return GetNextLevelRow()->AttributePointsPerLevel;}
	
	int32 GetAbilityPointsForLevel() const {return GetNextLevelRow()->AbilityPointsPerLevel;}
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* LevelDataTable;
	
	UPROPERTY(VisibleAnywhere)
	int32 CurrentLevel = 1;

	UPROPERTY(VisibleAnywhere)
	int32 CurrentExperience = 0.f;

	UPROPERTY(VisibleAnywhere)
	int32 AvailableAttributePoints = 0;

	UPROPERTY(VisibleAnywhere)
	int32 AvailableAbilityPoints = 0;

	int32 UsedAttributePoints = 0;

	bool bIsLevelMaxed = false;
};