
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "AbilityComponent_HealingAura.generated.h"


UCLASS()
class COURSE_ARPG_API UAbilityComponent_HealingAura : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& SavedData) override;

	float GetHealthRegenAmount();
	
	void SetHealthRegenAmount(float NewAmount);
	
protected:

	virtual void BeginPlay() override;

	virtual void StartAbilityTimer() override;

	virtual void OnAbilityTimerFinished() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:

	UPROPERTY(EditAnywhere)
	float HealthRegenAmount;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY()
	UParticleSystemComponent* ParticleComp;

	UPROPERTY(EditAnywhere)
	FName SocketName; //ik_foot_root
};
