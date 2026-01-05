
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/Data/EStats.h"
#include "StatsComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnHealthPercentUpdateSignature, UStatsComponent, OnHealthPercentUpdateDelegate,float, Percentage);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnStaminaPercentUpdateSignature, UStatsComponent, OnStaminaPercentUpdateDelegate,float, Percentage);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnManaPercentUpdateSignature, UStatsComponent, OnManaPercentUpdateDelegate,float, Percentage);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnArmorUpdateSignature, UStatsComponent, OnArmorUpdateDelegate,float, Amount);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStatUpdateSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnZeroArmorSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnZeroHealthSignature);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UFUNCTION()
	void ReduceHealth(const float Damage, AActor* Opponent);
	
	UFUNCTION()
	float GetReducedDamage(const float Damage, AActor* Opponent);

	UFUNCTION()
	void ReduceStamina(const float Stamina);

	UFUNCTION()
	void ReduceMana(const float Mana);

	UFUNCTION()
	void RegenStamina();

	UFUNCTION()
	void RegenMana();
	
	UFUNCTION()
	float GetStatPercentage(const EStats Current, const EStats Max) const;

	UFUNCTION()
	float GetStatValue(const EStats Stat) const;

	UFUNCTION()
	FString GetStatName(const EStats Stat) const;

	UFUNCTION()
	void SetStatValue(const EStats Stat, const float NewValue);

	UFUNCTION()
	void AddHealth(const float HealthToAdd);

	UFUNCTION()
	void OnStatsUpdated();

	UFUNCTION()
	void RestoreStats();
	
	UPROPERTY()
	FOnHealthPercentUpdateSignature OnHealthPercentUpdateDelegate;

	UPROPERTY()
	FOnStaminaPercentUpdateSignature OnStaminaPercentUpdateDelegate;

	UPROPERTY()
	FOnManaPercentUpdateSignature OnManaPercentUpdateDelegate;

	UPROPERTY()
	FOnZeroHealthSignature OnZeroHealthDelegate;

	UPROPERTY()
	FOnZeroArmorSignature OnZeroArmorDelegate;

	UPROPERTY()
	FOnArmorUpdateSignature OnArmorUpdateDelegate;

	UPROPERTY()
	FOnStatUpdateSignature OnStatUpdateDelegate;

protected:
	
	UFUNCTION()
	void EnableManaRegen();

	UFUNCTION()
	void EnableStaminaRegen();
	
private:

	UPROPERTY(EditAnywhere)
	double StaminaRegenRate = 8.0;

	UPROPERTY(EditAnywhere)
	double ManaRegenRate = 2.0;
	
	UPROPERTY(VisibleAnywhere)
	bool bCanRegenMana = true;

	UPROPERTY(VisibleAnywhere)
	bool bCanRegenStamina = true;

	UPROPERTY(EditAnywhere)
	float StaminaDelayDuration = 2.0f;

	UPROPERTY(EditAnywhere)
	float ManaDelayDuration = 2.0f;

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EStats>, float> Stats;
};
