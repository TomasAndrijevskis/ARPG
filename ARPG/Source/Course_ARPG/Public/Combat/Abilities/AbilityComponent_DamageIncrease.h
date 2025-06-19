

#pragma once

#include "CoreMinimal.h"
//#include "Components/ActorComponent.h"
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

	bool bIsDamageIncreased = false;

	float GetDamageMultiplier();

	void SetDamageMultiplier(float NewDamageMultiplier);
	
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
