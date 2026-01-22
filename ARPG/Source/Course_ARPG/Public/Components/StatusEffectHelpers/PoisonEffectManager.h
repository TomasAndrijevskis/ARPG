
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "PoisonEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UPoisonEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()

public:

	void HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef);

protected:

	virtual void SetVisualData() override;
	
private:

	UFUNCTION()
	void Poison();

	float PoisonDuration;

	float PoisonDamage;

	float PoisonRate;
};
