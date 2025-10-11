

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelingComponent.generated.h"

struct FXPLevels;
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnNewLevelSignature, ULevelingComponent, OnNewLevelDelegate, int,Level);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnXpUpdateSignature, ULevelingComponent, OnXpUpdateDelegate, float, XP);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnStatPointsUpdateSignature, ULevelingComponent, OnStatPointsUpdateDelegate,int, Points);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnAbilityPointsUpdateSignature, ULevelingComponent, OnAbilityPointsUpdateDelegate,int, Points);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULevelingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	void AddXP(const float XP);
	
	UFUNCTION()
	float GetCurrentXP() const;

	UFUNCTION()
	int GetCurrentLevel() const;
	
	int GetCurrentStatPointsAmount() const;
	
	int GetCurrentAbilityPointsAmount() const;

	UFUNCTION()
	void SetXP(const float NewXP);

	UFUNCTION()
	void SetLevel(const int NewLevel);
	
	void SetStatPoints(const int NewStatPointsAmount);
	
	void SetAbilityPoints(const int NewAbilityPointsAmount);

	UFUNCTION()
	float GetXPPercentage() const;

	UPROPERTY()
	FOnNewLevelSignature OnNewLevelDelegate;

	UPROPERTY()
	FOnXpUpdateSignature OnXpUpdateDelegate;

	UPROPERTY()
	FOnStatPointsUpdateSignature OnStatPointsUpdateDelegate;

	UPROPERTY()
	FOnAbilityPointsUpdateSignature OnAbilityPointsUpdateDelegate;

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
	int AvailableStatPoints = 0;

	UPROPERTY(VisibleAnywhere)
	int AvailableAbilityPoints = 0;

	UPROPERTY(EditAnywhere)
	int StatPointsAmountForLevel = 10;

	UPROPERTY(EditAnywhere)
	int AbilityUpgradePointsAmountForLevel = 5;

	float RequiredXP;
};
