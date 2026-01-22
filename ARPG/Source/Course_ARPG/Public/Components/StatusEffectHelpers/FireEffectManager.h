
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

	virtual void SetVisualData() override;
	
private:

	UFUNCTION()
	void Burn();

	float BurnDamage;
	
	float BurnDuration;

	float BurnRate;

	FTimerHandle BurnTimerHandle;
	
};
