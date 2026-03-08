
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Data/Abilities/DamageIncreasePropertiesData.h"
#include "AbComp_DamageIncrease.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_DamageIncrease : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	float GetDefaultDamageMultiplier() const;

	float GetEnhancedDamageMultiplier() const;
	
	void SetDamageMultiplier(float NewDamageMultiplier);

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

	void SpawnParticle();
	
protected:

	virtual void BeginPlay() override;

	virtual void OnAbilityTimerFinished() override;

	FDamageIncreasePropertiesData* GetAbilityData(const int32 Level);

	virtual void SetAbilityData(const int32 Level) override;
	
private:
	
	UPROPERTY(EditAnywhere)
	FName ParticleSpawnSocketName; //FX_Sword_Bottom

	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY(VisibleAnywhere)
	float DamageMultiplier = 0.f;

	UPROPERTY()
	UParticleSystemComponent* ParticleComp;
};
