

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelingComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnNewLevelSignature, ULevelingComponent, OnNewLevelDelegate, int, Level);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnXpUpdateSignature, ULevelingComponent, OnXpUpdateDelegate,float, XP);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnStatPointsUpdateSignature, ULevelingComponent, OnStatPointsUpdateDelegate,int, Points);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnAbilityPointsUpdateSignature, ULevelingComponent, OnAbilityPointsUpdateDelegate,int, Points);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULevelingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	ULevelingComponent(){};

	UFUNCTION(BlueprintCallable)
	void AddExperience(float XP);
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnNewLevelSignature OnNewLevelDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnXpUpdateSignature OnXpUpdateDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnStatPointsUpdateSignature OnStatPointsUpdateDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnAbilityPointsUpdateSignature OnAbilityPointsUpdateDelegate;
	
	UFUNCTION()
	float GetCurrentXP();

	UFUNCTION()
	int GetCurrentLevel();

	//В конце убрать BlueprintPure - нужно только для Debug
	UFUNCTION(BlueprintPure)
	int GetCurrentStatPointsAmount();
	
	UFUNCTION(BlueprintPure)
	int GetCurrentAbilityPointsAmount();

	UFUNCTION()
	void SetExperience(float NewXP);

	UFUNCTION()
	void SetLevel(int NewLevel);

	//В конце убрать BlueprintCallable - нужно только для Debug
	UFUNCTION(BlueprintCallable)
	void SetStatPoints(int NewStatPointsAmount);

	UFUNCTION(BlueprintCallable)
	void SetAbilityPoints(int NewAbilityPointsAmount);


private:
	
	void TryLevelUp();

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

	int StatPointsAmountForLevel = 10;

	int AbilityUpgradePointsAmountForLevel = 5;
	
};
