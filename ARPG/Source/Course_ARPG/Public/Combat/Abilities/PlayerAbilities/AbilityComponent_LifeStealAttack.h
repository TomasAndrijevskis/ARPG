
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/ActorComponent.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_LifeStealAttack.generated.h"


class IFighter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_LifeStealAttack : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:	

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;

	UFUNCTION()
	float GetStolenHealthAmount() const;

	float GetStolenHealthPercent() const;

	void SetStolenHealthPercent(const float NewStolenHealthPercent);
	
protected:

	virtual void BeginPlay() override;

	virtual void OnAbilityTimerFinished() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
private:

	UFUNCTION()
	void HandleLifeStealOnHit();
	
	UPROPERTY(EditAnywhere)
	float StolenHealthPercent = 0.2f;

	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY(EditAnywhere)
	FName ParticleSpawnSocketName;
	
	UPROPERTY()
	UParticleSystemComponent* ParticleComp;
	
	IFighter* FighterRef;
};
