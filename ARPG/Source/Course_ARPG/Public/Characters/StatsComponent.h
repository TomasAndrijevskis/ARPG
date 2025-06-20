
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Characters/EStats.h"
#include "StatsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnHealthPercentUpdateSignature, UStatsComponent, OnHealthPercentUpdateDelegate,float, Percentage);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnStaminaPercentUpdateSignature, UStatsComponent, OnStaminaPercentUpdateDelegate,float, Percentage);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnManaPercentUpdateSignature, UStatsComponent, OnManaPercentUpdateDelegate,float, Percentage);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnArmorUpdateSignature, UStatsComponent, OnArmorUpdateDelegate,float, Amount);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnZeroHealthSignature, UStatsComponent, OnZeroHealthDelegate);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnZeroArmorSignature, UStatsComponent, OnZeroArmorDelegate);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE(FOnStatUpdateSignature, UStatsComponent, OnStatUpdateDelegate);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UStatsComponent();
	
	UFUNCTION(BlueprintCallable)
	void ReduceHealth(float Damage, AActor* Opponent);

	UFUNCTION(BlueprintCallable)
	float GetReducedDamage(float Damage, AActor* Opponent);

	UFUNCTION(BlueprintCallable)
	void ReduceStamina(float Stamina);

	UFUNCTION(BlueprintCallable)
	void ReduceMana(float Mana);

	UFUNCTION(BlueprintCallable)
	void RegenStamina();

	UFUNCTION(BlueprintCallable)
	void RegenMana();

	UFUNCTION(BlueprintPure)
	float GetStatPercentage(EStats Current, EStats Max);

	UFUNCTION(BlueprintPure)
	float GetStatValue(EStats Stat);

	UFUNCTION(BlueprintPure)
	FString GetStatName(EStats Stat);

	UFUNCTION(BlueprintCallable)
	void SetStatValue(EStats Stat, float NewValue);

	UFUNCTION(BlueprintCallable)
	void AddHealth(float HealthToAdd);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<TEnumAsByte<EStats>, float> Stats;

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
		
};
