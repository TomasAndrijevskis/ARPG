
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "AbComp_FireStorm.generated.h"


class AFireStorm;

UCLASS()
class COURSE_ARPG_API UAbComp_FireStorm : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	float GetDefaultBurnDamage() const {return BurnDamage;}
	
	float GetEnhancedBurnDamage() const;
	
	void SetBurnDamage(float NewDamage) {BurnDamage = NewDamage;}

	float GetBurnDuration() const {return BurnDuration;}
	
	void SetBurnDuration(float NewDuration) {BurnDuration = NewDuration;}

	virtual void StartAbility() override;
	
	void SpawnFireStorm();

	virtual void FinishAbilityCast() override;
	
protected:
	
	virtual void OnAbilityTimerFinished() override;

	virtual void SetAbilityData(const int32 Level) override;
	
private:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AFireStorm> FireStormClass;

	UPROPERTY()
	TObjectPtr<AFireStorm> FireStormRef;

	UPROPERTY(VisibleAnywhere)
	float BurnDuration = 0.f;
	
	UPROPERTY(VisibleAnywhere)
	float BurnDamage = 0.f;

	UPROPERTY(EditAnywhere)
	float BurnRate;
};
