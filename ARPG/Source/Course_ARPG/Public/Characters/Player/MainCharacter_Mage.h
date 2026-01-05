
#pragma once

#include "CoreMinimal.h"
#include "MainCharacter_Base.h"
#include "MainCharacter_Mage.generated.h"


class UNiagaraComponent;
class UNiagaraSystem;
class UAbilityComponent_MagicShield;
class UAbilityComponent_FrostBlast;
class UAbilityComponent_FireStorm;
class UAbilityComponent_HealingAura;
UCLASS()
class COURSE_ARPG_API AMainCharacter_Mage : public AMainCharacter_Base
{
	GENERATED_BODY()

public:
	
	AMainCharacter_Mage();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityComponent_MagicShield* AbilityComp_MagicShield;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityComponent_FrostBlast* AbilityComp_FrostBlast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityComponent_FireStorm* AbilityComp_FireStorm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbilityComponent_HealingAura* AbilityComp_HealingAura;

	virtual bool CanTakeDamage(AActor* Opponent) const override;
	
protected:

	virtual void BeginPlay() override;

	virtual void HandleDeath() override;
	
private:

	UFUNCTION()
	void SpawnParticles();

	void RemoveParticle(UParticleSystemComponent*& Particle);
	
	UPROPERTY(EditAnywhere)
	FName RightHandSocketName;

	UPROPERTY(EditAnywhere)
	FName LeftHandSocketName;

	UPROPERTY()
	UParticleSystemComponent* ParticleComponentFire;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleFire;

	UPROPERTY()
	UParticleSystemComponent* ParticleComponentIce;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleIce;
};
