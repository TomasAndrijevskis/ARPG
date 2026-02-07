
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
	
	virtual void SetVisualData() override;

	virtual float GetFinalDamage(const float Damage) override;

	virtual void SetDamageResistance(float NewResistance) override;
	
private:
	
	UFUNCTION()
	void StopFreeze();

	UPROPERTY(EditAnywhere)
	float FreezeDamageResistance;
	
	float OriginalSpeed;

	FTimerHandle FreezeTimerHandle;

	float FreezeDamage;
};
