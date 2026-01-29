
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/HealingAuraPropertiesData.h"
#include "AbComp_HealingAura.generated.h"


UCLASS()
class COURSE_ARPG_API UAbComp_HealingAura : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	float GetHealthRegenAmount() const;
	
	void SetHealthRegenAmount(const float NewAmount);

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

protected:

	virtual void BeginPlay() override;

	virtual void StartAbilityTimer() override;

	virtual void OnAbilityTimerFinished() override;
	
	FHealingAuraPropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:

	UPROPERTY(VisibleAnywhere)
	float HealthRegenAmount = 0.f;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY()
	UParticleSystemComponent* ParticleComp;

	UPROPERTY(EditAnywhere)
	FName SocketName; //ik_foot_root
};
