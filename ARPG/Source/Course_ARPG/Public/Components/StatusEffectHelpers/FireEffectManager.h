
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "FireEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UFireEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()

public:

	void HandleBurn(const float NewFireDuration, const float NewFireDamage, const bool bNewIsOverlapping, const float NewFireRate);

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
	float FireDamageResistance;
	
	float FireDamage;
	
	float FireDuration;

	float FireRate;

	FTimerHandle FireTimerHandle;
};