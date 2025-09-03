
#pragma once

#include "CoreMinimal.h"
#include "Base/AbilityComponent_Player.h"
#include "AbilityComponent_FireStorm.generated.h"

class AFireStorm;

UCLASS()
class COURSE_ARPG_API UAbilityComponent_FireStorm : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;

	float GetBurnDamage();
	
	void SetBurnDamage(float NewDamage);

	float GetBurnDuration();
	
	void SetBurnDuration(float NewDuration);
	
protected:

	virtual void OnAbilityTimerFinished() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:
	
	UFUNCTION()
	void SpawnFireStorm();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AFireStorm> FireStormClass;

	UPROPERTY()
	AFireStorm* FireStormRef;

	UPROPERTY(EditAnywhere)
	float BurnDuration;
	
	UPROPERTY(EditAnywhere)
	float BurnDamage = 3;

	UPROPERTY(EditAnywhere)
	float BurnRate;
};
