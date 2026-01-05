
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_DamageIncrease.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_DamageIncrease : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;

	float GetDamageMultiplier() const;

	void SetDamageMultiplier(float NewDamageMultiplier);
	
protected:

	virtual void BeginPlay() override;

	virtual void OnAbilityTimerFinished() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:

	UPROPERTY(EditAnywhere)
	FName ParticleSpawnSocketName; //FX_Sword_Bottom

	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY(EditAnywhere)
	float DamageMultiplier = 1.5f;

	UPROPERTY()
	UParticleSystemComponent* ParticleComp;
};
