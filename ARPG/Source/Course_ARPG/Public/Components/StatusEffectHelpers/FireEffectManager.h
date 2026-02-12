
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "FireEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UFireEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()

public:

	void HandleBurn(const float NewBurnDuration, const float NewBurnDamage, const bool bNewIsOverlapping, const float NewBurnRate);

protected:

	virtual void BeginPlay() override;
	
	virtual void SetVisualData(EEffects StatusEffect) override;

	virtual float GetFinalDamage(const float Damage) override;

	virtual void SetDamageResistance(float NewResistance) override;
	
private:

	UFUNCTION()
	void ApplyBurn();

	UPROPERTY(EditAnywhere)
	float BurnDamageResistance;
	
	float BurnDamage;
	
	float BurnDuration;

	float BurnRate;

	FTimerHandle BurnTimerHandle;
};