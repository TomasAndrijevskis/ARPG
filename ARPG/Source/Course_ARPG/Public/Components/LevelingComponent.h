
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/XPLevels.h"
#include "LevelingComponent.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnNewLevel);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnLevelUpdated, int);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnExperienceUpdated, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributePointsUpdate, int);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityPointsUpdate, int);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULevelingComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void AddExperience(const float Experience);
	
	UFUNCTION()
	float GetCurrentExperience() const;

	UFUNCTION()
	int GetCurrentLevel() const;
	
	int GetCurrentAttributePointsAmount() const;
	
	int GetCurrentAbilityPointsAmount() const;

	UFUNCTION()
	void SetExperience(const float NewExperience);

	UFUNCTION()
	void SetLevel(const int NewLevel);
	
	void SetAttributePoints(const int NewStatPointsAmount);
	
	void SetAbilityPoints(const int NewAbilityPointsAmount);

	UFUNCTION()
	float GetExperiencePercentage() const;

	void SetUsedAttributePoints(const int NewUsedStatPoints);

	int GetUsedAttributePoints() const;

	void IncreaseUsedStatPoints();

	int GetRequiredExperience() const;
	
	FOnLevelUpdated OnLevelUpdatedDelegate;
	
	FOnExperienceUpdated OnExperienceUpdatedDelegate;
	
	FOnAttributePointsUpdate OnAttributePointsUpdateDelegate;
	
	FOnAbilityPointsUpdate OnAbilityPointsUpdateDelegate;
	
	FOnNewLevel OnNewLevelDelegate;
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	void TryLevelUp();

	bool CanAddExperience() const;
	
	FXPLevels* GetNextLevelRow() const;
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* LevelDataTable;
	
	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 1;

	UPROPERTY(VisibleAnywhere)
	int CurrentExperience = 0.f;

	UPROPERTY(VisibleAnywhere)
	int AvailableAttributePoints = 0;

	UPROPERTY(VisibleAnywhere)
	int AvailableAbilityPoints = 0;

	UPROPERTY(EditDefaultsOnly)
	int AttributePointsAmountForLevel = 10;

	UPROPERTY(EditDefaultsOnly)
	int AbilityUpgradePointsAmountForLevel = 5;

	float RequiredExperience;

	int UsedAttributePoints = 0;
};
