
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "IceEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UIceEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()
	
public:	
	
	void SlowDownEnemy(const float SlowDuration);

protected:

	virtual void BeginPlay() override;
	
	virtual void StopEffect() override;
	
	virtual void SetVisualData() override;
	
private:
	
	UFUNCTION()
	void StopFreeze();

	float OriginalSpeed;

	FTimerHandle FreezeTimerHandle;
	
	float SavedSpeed;
};
