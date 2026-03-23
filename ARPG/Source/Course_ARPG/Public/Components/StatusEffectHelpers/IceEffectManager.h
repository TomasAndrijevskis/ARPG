
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "IceEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UIceEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()
	
public:	

	virtual void HandleEffect(float NewDuration, float NewDamage, float NewDamageRate, bool NewIsTakingDamage) override;
	
protected:

	virtual void BeginPlay() override;
	
	virtual void StopEffect() override;

	virtual void SetEffectType() override;
	
private:
	
	float OriginalSpeed;
};
