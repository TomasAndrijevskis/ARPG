

#pragma once

#include "CoreMinimal.h"
#include "AbilityComponent_Base.h"
#include "AbilityComponent_DamageIncrease.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_DamageIncrease : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:	

	UAbilityComponent_DamageIncrease(){};
	
	UFUNCTION(BlueprintCallable)
	void IncreaseDamage();

	float GetDamageMultiplier();

	void SetDamageMultiplier(float NewDamageMultiplier);

	virtual void UpdateAbilityDescription() override;

	virtual void UpdateUpgradeDescription() override;

	virtual void UpdateAbilityProperties() override;

	virtual void SaveCustomProperties(FAbilityData& Data) override;

	virtual void LoadCustomProperties(FAbilityData& Data) override;
	
protected:

	virtual void BeginPlay() override;
	
	virtual void StartAbilityTimer() override;

	virtual void OnAbilityTimerFinished() override;

	
private:

	UPROPERTY(EditAnywhere)
	FName ParticleSpawnSocketName; //FX_Sword_Bottom

	UPROPERTY(EditAnywhere)
	UParticleSystem* Particle;

	UPROPERTY(EditAnywhere)
	float DamageMultiplier = 1.5f;
	
	UParticleSystemComponent* ParticleComp;
	
	
};
