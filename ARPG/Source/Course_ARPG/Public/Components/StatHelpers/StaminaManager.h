
#pragma once

#include "CoreMinimal.h"
#include "StaminaManager.generated.h"


class UStatsComponent;

UCLASS()
class COURSE_ARPG_API UStaminaManager : public UObject
{
	GENERATED_BODY()

public:

	void Init(UStatsComponent* StatsComponentRef, const double NewStaminaRegenRate, const float NewStaminaDelayDuration);

	UFUNCTION()
	void ReduceStamina(const float Stamina);

	UFUNCTION()
	void RegenStamina();
	
private:

	UFUNCTION() // must be to make FLatentActionInfo work properly
	void EnableStaminaRegen();
	
	UPROPERTY()
	UStatsComponent* StatsComponent;
	
	double StaminaRegenRate = 0.f;
	
	float StaminaDelayDuration = 0.f;

	bool bCanRegenStamina = true;
};
