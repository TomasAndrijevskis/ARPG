
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/AllElementsArrowPropertiesData.h"
#include "AbComp_AllElementsArrow.generated.h"

UCLASS()
class COURSE_ARPG_API UAbComp_AllElementsArrow : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	virtual void StartAbility() override;

	void SpawnArrow();

	void SetEffectDamage(float NewEffectDamage);

	float GetDefaultEffectDamage() const;

	float GetEnhancedEffectDamage() const;
	
protected:
	
	FAllElementsArrowPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;

	virtual void FinishAbilityCast() override;
	
private:

	void FinishAnimation();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowClass;

	UPROPERTY(EditDefaultsOnly)
	FName ComponentName;

	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* ShootMontage;
	
	UPROPERTY(VisibleAnywhere)
	float EffectDamage = 1;

	UPROPERTY(VisibleAnywhere)
	float DamageRate = .5;
	
	UPROPERTY(EditDefaultsOnly)
	float AliveTime;
};
