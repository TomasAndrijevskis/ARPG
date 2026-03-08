
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

DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnAttackReflectRequest, AActor*, float, const UDamageType*);
UCLASS()
class COURSE_ARPG_API AMainCharacter_Mage : public AMainCharacter_Base
{
	GENERATED_BODY()

public:
	
	AMainCharacter_Mage();

	virtual bool CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const override;
	
	virtual TSubclassOf<UDamageType> GetDamageType() const override;

	virtual float GetMagicalDamage() const override;

	virtual void HandleEffectChange(EEffects NewEffect) override;

	virtual void SpawnProjectile() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_MagicShield* AbilityComp_MagicShield;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_FrostBlast* AbilityComp_FrostBlast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_FireStorm* AbilityComp_FireStorm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_HealingAura* AbilityComp_HealingAura;

	FOnAttackReflectRequest OnAttackReflectRequestDelegate;
	
protected:

	virtual void BeginPlay() override;

	virtual void HandleDeath() override;

	virtual void BindAbilityDelegates() override;
	
private:

	UFUNCTION()
	void SpawnParticles(UParticleSystem* ParticleEffect);

	void RemoveParticle();
	
	UPROPERTY(EditAnywhere)
	FName RightHandSocketName;

	UPROPERTY(EditAnywhere)
	FName LeftHandSocketName;

	UPROPERTY()
	TArray<UParticleSystemComponent*> ParticleComponents;

	UPROPERTY(EditAnywhere)
	UParticleSystem* BaseParticle;
};
