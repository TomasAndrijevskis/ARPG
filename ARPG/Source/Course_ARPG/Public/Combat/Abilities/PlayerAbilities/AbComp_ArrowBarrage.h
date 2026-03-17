
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "AbComp_ArrowBarrage.generated.h"


class AArrowBarrage;

UCLASS()
class COURSE_ARPG_API UAbComp_ArrowBarrage : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:

	virtual void StartAbility() override;

	void SpawnArrowBarrage();

	virtual void FinishAbilityCast() override;

protected:

	virtual void OnAbilityTimerFinished() override;
	
	//FHealArrowPropertiesData* GetAbilityData(const int32 Level);

	//virtual void SetAbilityData(const int32 Level) override;

	virtual void StartAbilityTimer() override;

private:
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowBarrageClass;

	UPROPERTY()
	AArrowBarrage* ArrowBarrageRef;

	UPROPERTY(VisibleAnywhere)
	float Damage = 5;

	UPROPERTY(VisibleAnywhere)
	float Duration = 30;

	UPROPERTY(VisibleAnywhere)
	float DamageRate = .2f;
};
