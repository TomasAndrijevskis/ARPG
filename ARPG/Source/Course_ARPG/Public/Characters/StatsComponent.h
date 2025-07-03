
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/EStats.h"
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
	
	UStatsComponent(){};

	//Debug
	UFUNCTION(BlueprintCallable)
	void ReduceHealth(float Damage, AActor* Opponent);

	//Debug
	UFUNCTION(BlueprintCallable)
	float GetReducedDamage(float Damage, AActor* Opponent);

	UFUNCTION()
	void ReduceStamina(float Stamina);

	UFUNCTION()
	void ReduceMana(float Mana);

	UFUNCTION()
	void RegenStamina();

	UFUNCTION()
	void RegenMana();

	//Debug
	UFUNCTION(BlueprintPure)
	float GetStatPercentage(EStats Current, EStats Max);

	UFUNCTION()
	float GetStatValue(EStats Stat);

	UFUNCTION()
	FString GetStatName(EStats Stat);

	UFUNCTION()
	void SetStatValue(EStats Stat, float NewValue);

	UFUNCTION()
	void AddHealth(float HealthToAdd);

	UFUNCTION()
	void OnStatsUpdated();

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnHealthPercentUpdateSignature OnHealthPercentUpdateDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnStaminaPercentUpdateSignature OnStaminaPercentUpdateDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnManaPercentUpdateSignature OnManaPercentUpdateDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnZeroHealthSignature OnZeroHealthDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnZeroArmorSignature OnZeroArmorDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnArmorUpdateSignature OnArmorUpdateDelegate;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
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
