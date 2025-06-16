

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LevelingComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnNewLevelSignature, ULevelingComponent, OnNewLevelDelegate,int, Level);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnXpUpdateSignature, ULevelingComponent, OnXpUpdateDelegate,float, XP);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnPointsUpdateSignature, ULevelingComponent, OnPointsUpdateDelegate,int, Points);
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
	FOnPointsUpdateSignature OnPointsUpdateDelegate;
	
	UFUNCTION(BlueprintPure)
	float GetCurrentExperience();

	UFUNCTION(BlueprintPure)
	int GetCurrentLevel();

	UFUNCTION(BlueprintPure)
	int GetCurrentPointsAmount();

	UFUNCTION()
	void SetExperience(float NewXP);

	UFUNCTION()
	void SetLevel(int NewLevel);

	UFUNCTION(BlueprintCallable)
	void SetPoints(int NewPointsAmount);
	
protected:
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataTable* LevelDataTable;

private:
	
	void TryLevelUp();
	
	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 1;

	UPROPERTY(VisibleAnywhere)
	float CurrentXP = 0.f;

	UPROPERTY(VisibleAnywhere)
	int CurrentPoints = 0;
	
};
