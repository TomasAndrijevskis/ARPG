
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/Data/XPLevels.h"
#include "LevelingComponent.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnNewLevelSignature);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnLevelUpdatedSignature, int);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnXpUpdatedSignature, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributePointsUpdateSignature, int);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityPointsUpdateSignature, int);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULevelingComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void AddXP(const float XP);
	
	UFUNCTION()
	float GetCurrentXP() const;

	UFUNCTION()
	int GetCurrentLevel() const;
	
	int GetCurrentAttributePointsAmount() const;
	
	int GetCurrentAbilityPointsAmount() const;

	UFUNCTION()
	void SetXP(const float NewXP);

	UFUNCTION()
	void SetLevel(const int NewLevel);
	
	void SetAttributePoints(const int NewStatPointsAmount);
	
	void SetAbilityPoints(const int NewAbilityPointsAmount);

	UFUNCTION()
	float GetXPPercentage() const;

	void SetUsedAttributePoints(const int NewUsedStatPoints);

	int GetUsedAttributePoints() const;

	void IncreaseUsedStatPoints();
	
	FOnLevelUpdatedSignature OnLevelUpdatedDelegate;
	
	FOnXpUpdatedSignature OnXpUpdatedDelegate;
	
	FOnAttributePointsUpdateSignature OnAttributePointsUpdateDelegate;
	
	FOnAbilityPointsUpdateSignature OnAbilityPointsUpdateDelegate;
	
	FOnNewLevelSignature OnNewLevelDelegate;
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	void TryLevelUp();

	float GetRequiredXP() const;

	bool CanAddXP() const;
	
	FXPLevels* GetNextLevelRow() const;
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* LevelDataTable;
	
	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 1;

	UPROPERTY(VisibleAnywhere)
	float CurrentXP = 0.f;

	UPROPERTY(VisibleAnywhere)
	int AvailableAttributePoints = 0;

	UPROPERTY(VisibleAnywhere)
	int AvailableAbilityPoints = 0;

	UPROPERTY(EditDefaultsOnly)
	int AttributePointsAmountForLevel = 10;

	UPROPERTY(EditDefaultsOnly)
	int AbilityUpgradePointsAmountForLevel = 5;

	float RequiredXP;

	int UsedAttributePoints = 0;
};
