
#pragma once

#include "CoreMinimal.h"
#include "AbilityComponent_Base.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_LifeStealAttack.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_LifeStealAttack : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:	

	UAbilityComponent_LifeStealAttack(){};
	
	UFUNCTION(BlueprintCallable)
	float GetStolenHealthAmount();

	UFUNCTION(BlueprintCallable)
	void OnAbilityActivated();

	float GetStolenHealthPercent();

	void SetStolenHealthPercent(float NewStolenHealthPercent);

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;
	
protected:

	virtual void BeginPlay() override;

	virtual void OnAbilityTimerFinished() override;
	
private:

	UFUNCTION()
	void HandleLifeStealOnHit();
	
	UPROPERTY(EditAnywhere)
	float StolenHealthPercent = 0.2f;

	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY(EditAnywhere)
	FName ParticleSpawnSocketName;
	
	class IFighter* FighterRef;
	
	UParticleSystemComponent* ParticleComp;
	
	
};
