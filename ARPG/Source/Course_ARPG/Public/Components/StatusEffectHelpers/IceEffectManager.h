
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "IceEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UIceEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()
	
public:	
	
	void HandleFreeze(const float SlowDuration, const float NewDamage);

protected:

	virtual void BeginPlay() override;
	
	virtual void StopEffect() override;
	
	virtual void SetVisualData(EEffects StatusEffect) override;

	virtual void SetDamageResistance(float NewResistance) override;

	UFUNCTION()
	virtual void ApplyDamage(float Damage) override;

	UFUNCTION()
	virtual void ApplyProlongedDamage() override;
	
private:

	UPROPERTY(EditAnywhere)
	float IceDamageResistance;
	
	float OriginalSpeed;

	FTimerHandle IceTimerHandle;

	float IceDamage;
};
