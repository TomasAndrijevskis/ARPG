
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "AbilityComponent_DamageIncrease.generated.h"


struct FDamageIncreasePropertiesData;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_DamageIncrease : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;
	
	float GetDamageMultiplier() const;

	void SetDamageMultiplier(float NewDamageMultiplier);
	
protected:

	virtual void BeginPlay() override;

	virtual void OnAbilityTimerFinished() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

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
