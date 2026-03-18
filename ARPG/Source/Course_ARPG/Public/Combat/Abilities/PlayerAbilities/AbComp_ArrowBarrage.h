
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "AbComp_ArrowBarrage.generated.h"


struct FArrowBarragePropertiesData;
class AArrowBarrage;

UCLASS()
class COURSE_ARPG_API UAbComp_ArrowBarrage : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	virtual void StartAbility() override;

	void SpawnArrowBarrage();

	void SetDamage(float NewDamage);

	float GetDefaultDamage() const;

	float GetEnhancedDamage() const;
	
protected:

	virtual void OnAbilityTimerFinished() override;

	FArrowBarragePropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;

private:
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowBarrageClass;

	UPROPERTY()
	AArrowBarrage* ArrowBarrageRef;

	UPROPERTY(VisibleAnywhere)
	float Damage = 0;

	UPROPERTY(EditDefaultsOnly)
	float DamageRate = .2f;
};
