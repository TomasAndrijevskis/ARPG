
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

	virtual void BeginPlay() override;
	
	virtual void SetVisualData(EEffects StatusEffect) override;

	virtual void SetDamageResistance(float NewResistance) override;

	UFUNCTION()
	virtual void ApplyDamage(float Damage) override;

	UFUNCTION()
	virtual void ApplyProlongedDamage() override;
	
private:

	UPROPERTY(EditAnywhere)
	float PoisonDamageResistance;
	
	float PoisonDuration;

	float PoisonDamage;

	float PoisonRate;
};