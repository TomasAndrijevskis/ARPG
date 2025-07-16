
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "AbilityComponent_FireStorm.generated.h"

class AFireStorm;

UCLASS()
class COURSE_ARPG_API UAbilityComponent_FireStorm : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void StartAbility();
	
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
};
