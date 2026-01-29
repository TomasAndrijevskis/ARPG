
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/Data/EStats.h"
#include "StatsComponent.generated.h"


class UManaManager;
class UStaminaManager;
class UHealthManager;
class UDefaultStatsDataAsset;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnHealthPercentUpdateSignature, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnStaminaPercentUpdateSignature,float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnManaPercentUpdateSignature,float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnArmorUpdateSignature, float);
DECLARE_MULTICAST_DELEGATE(FOnStatUpdateSignature);
DECLARE_MULTICAST_DELEGATE(FOnZeroArmorSignature);
DECLARE_MULTICAST_DELEGATE(FOnZeroHealthSignature);
DECLARE_MULTICAST_DELEGATE(FOnRegenStaminaRequestSignature);
DECLARE_MULTICAST_DELEGATE(FOnRegenManaRequestSignature);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnReduceManaRequestSignature, const float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnReduceStaminaRequestSignature, const float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAddHealthRequestSignature, const float);
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnReduceHealthRequestSignature, const float, AActor*, AActor*);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	virtual void BeginPlay() override;
	
	UFUNCTION()
	float GetReducedDamage(const float Damage, AActor* Opponent);
	
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
	
	UPROPERTY()
	UHealthManager* HealthManager;

	UPROPERTY()
	UStaminaManager* StaminaManager;

	UPROPERTY()
	UManaManager* ManaManager;
	
	FOnStaminaPercentUpdateSignature OnStaminaPercentUpdateDelegate;
	
	FOnManaPercentUpdateSignature OnManaPercentUpdateDelegate;
	
	FOnZeroArmorSignature OnZeroArmorDelegate;
	
	FOnArmorUpdateSignature OnArmorUpdateDelegate;
	
	FOnStatUpdateSignature OnStatUpdateDelegate;

	FOnHealthPercentUpdateSignature OnHealthPercentUpdateDelegate;
	
	FOnZeroHealthSignature OnZeroHealthDelegate;

	FOnRegenStaminaRequestSignature OnRegenStaminaRequestDelegate;

	FOnRegenManaRequestSignature OnRegenManaRequestDelegate;

	FOnReduceManaRequestSignature OnReduceManaRequestDelegate;

	FOnReduceStaminaRequestSignature OnReduceStaminaRequestDelegate;
	
	FOnAddHealthRequestSignature OnAddHealthRequestDelegate;

	FOnReduceHealthRequestSignature OnReduceHealthRequestDelegate;
	
private:
	
	void BindDelegates();

	void SetStatHelpers();
	
	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EStats>, float> Stats;

	UPROPERTY(EditDefaultsOnly)
	double ManaRegenRate = 2.0;

	UPROPERTY(EditDefaultsOnly)
	float ManaDelayDuration = 2.0f;

	UPROPERTY(EditDefaultsOnly)
	double StaminaRegenRate = 8.0;

	UPROPERTY(EditDefaultsOnly)
	float StaminaDelayDuration = 2.0f;
};