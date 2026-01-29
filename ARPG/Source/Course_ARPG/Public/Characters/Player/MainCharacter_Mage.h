
#pragma once

#include "CoreMinimal.h"
#include "MainCharacter_Base.h"
#include "MainCharacter_Mage.generated.h"


class UNiagaraComponent;
class UNiagaraSystem;
class UAbComp_MagicShield;
class UAbComp_FrostBlast;
class UAbComp_FireStorm;
class UAbComp_HealingAura;

UCLASS()
class COURSE_ARPG_API AMainCharacter_Mage : public AMainCharacter_Base
{
	GENERATED_BODY()

public:
	
	AMainCharacter_Mage();

	virtual bool CanTakeDamage(AActor* Opponent) const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_MagicShield* AbilityComp_MagicShield;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_FrostBlast* AbilityComp_FrostBlast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_FireStorm* AbilityComp_FireStorm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_HealingAura* AbilityComp_HealingAura;
	
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
