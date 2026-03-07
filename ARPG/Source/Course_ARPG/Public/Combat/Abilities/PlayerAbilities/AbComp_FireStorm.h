
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/FireStormPropertiesData.h"
#include "AbComp_FireStorm.generated.h"


class AFireStorm;

UCLASS()
class COURSE_ARPG_API UAbComp_FireStorm : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	float GetDefaultBurnDamage() const;
	
	float GetEnhancedBurnDamage() const;
	
	void SetBurnDamage(float NewDamage);

	float GetBurnDuration() const;
	
	void SetBurnDuration(float NewDuration);

	virtual void StartAbility() override;
	
	void SpawnFireStorm();
	
protected:
	
	virtual void OnAbilityTimerFinished() override;

	FFireStormPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AFireStorm> FireStormClass;

	UPROPERTY()
	AFireStorm* FireStormRef;

	UPROPERTY(VisibleAnywhere)
	float BurnDuration = 0.f;
	
	UPROPERTY(VisibleAnywhere)
	float BurnDamage = 0.f;

	UPROPERTY(EditAnywhere)
	float BurnRate = .2f;
};
