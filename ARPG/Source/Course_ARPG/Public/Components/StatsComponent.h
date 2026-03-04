
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/EStats.h"
#include "StatsComponent.generated.h"


class UManaManager;
class UStaminaManager;
class UHealthManager;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthPercentUpdate, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnStaminaPercentUpdate,float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnManaPercentUpdate,float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnArmorUpdate, float);
DECLARE_MULTICAST_DELEGATE(FOnStatUpdate);
DECLARE_MULTICAST_DELEGATE(FOnZeroArmor);
DECLARE_MULTICAST_DELEGATE(FOnZeroHealth);
DECLARE_MULTICAST_DELEGATE(FOnRegenStaminaRequest);
DECLARE_MULTICAST_DELEGATE(FOnRegenManaRequest);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnReduceManaRequest, const float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnReduceStaminaRequest, const float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAddHealthRequest, const float);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnReduceHealthRequest, const float, AActor*, AActor*);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	virtual void BeginPlay() override;
	
	float CalculateFinalReceivedDamage(const float Damage, const float ReductionPercent);

	float GetReducedDamage(const float Damage, const float ReductionPercent);
	
	UFUNCTION()
	float GetStatPercentage(const EStats Current, const EStats Max) const;

	UFUNCTION()
	float GetStatValue(const EStats Stat) const;

	UFUNCTION()
	FString GetStatName(const EStats Stat) const;

	UFUNCTION()
	void SetStatValue(const EStats Stat, const float NewValue);

	UFUNCTION()
	void OnStatsUpdated();

	UFUNCTION()
	void RestoreStats();

	UFUNCTION(BlueprintCallable)//testing
	void ReduceHealth(const float Damage);

	void UpgradeStat(const TEnumAsByte<EStats> Stat, const float Value);

	float GetStatIncreasePreview(const EStats Stat, const float Delta);

	FString GetStatUpgradePreview(EStats Stat, float Delta);

	FString GetStatUpgradeDescription(EStats Stat);
	
	UPROPERTY()
	UHealthManager* HealthManager;

	UPROPERTY()
	UStaminaManager* StaminaManager;

	UPROPERTY()
	UManaManager* ManaManager;
	
	FOnStaminaPercentUpdate OnStaminaPercentUpdateDelegate;
	
	FOnManaPercentUpdate OnManaPercentUpdateDelegate;
	
	FOnZeroArmor OnZeroArmorDelegate;
	
	FOnArmorUpdate OnArmorUpdateDelegate;
	
	FOnStatUpdate OnStatUpdateDelegate;

	FOnHealthPercentUpdate OnHealthPercentUpdateDelegate;
	
	FOnZeroHealth OnZeroHealthDelegate;

	FOnRegenStaminaRequest OnRegenStaminaRequestDelegate;

	FOnRegenManaRequest OnRegenManaRequestDelegate;

	FOnReduceManaRequest OnReduceManaRequestDelegate;

	FOnReduceStaminaRequest OnReduceStaminaRequestDelegate;
	
	FOnAddHealthRequest OnAddHealthRequestDelegate;

	FOnReduceHealthRequest OnReduceHealthRequestDelegate;
	
private:
	
	void BindDelegates();

	void SetStatHelpers();
	
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EStats>, float> Stats;

	UPROPERTY(EditDefaultsOnly)
	TArray<TEnumAsByte<EStats>> PercentageStats;
	
	UPROPERTY(EditDefaultsOnly)
	double ManaRegenRate = 2.0;

	UPROPERTY(EditDefaultsOnly)
	float ManaDelayDuration = 2.0f;

	UPROPERTY(EditDefaultsOnly)
	double StaminaRegenRate = 8.0;

	UPROPERTY(EditDefaultsOnly)
	float StaminaDelayDuration = 2.0f;

	UPROPERTY(EditDefaultsOnly)
	float PercentStatCap = 1;
};