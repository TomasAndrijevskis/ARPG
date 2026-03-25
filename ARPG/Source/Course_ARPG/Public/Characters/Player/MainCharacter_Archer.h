
#pragma once

#include "CoreMinimal.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_AllElementsArrow.h"
#include "MainCharacter_Archer.generated.h"


class UAbComp_ExplosiveArrow;
class UAbComp_ArrowBarrage;
class UAbComp_HealArrow;
class UAbComp_AllElementsArrow;

UCLASS()
class COURSE_ARPG_API AMainCharacter_Archer : public AMainCharacter_Base
{
	GENERATED_BODY()

public:

	AMainCharacter_Archer();
	
	virtual void HandleEffectChange(EEffects NewEffect) override;

	virtual float GetPhysicalDamage() override;

	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser) override;

	virtual void SpawnProjectile() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_HealArrow* AbilityComp_HealArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_ArrowBarrage* AbilityComp_ArrowBarrage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_AllElementsArrow* AbilityComp_AllElementsArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAbComp_ExplosiveArrow* AbilityComp_ExplosiveArrow;
	
protected:

	virtual void BeginPlay() override;

	virtual void BindAbilityDelegates() override;

	void SpawnParticle(UParticleSystem* ParticleEffect);

	void RemoveParticle();
	
	UPROPERTY(EditDefaultsOnly)
	FName EffectSocketName;

	UPROPERTY()
	UParticleSystemComponent* ParticleRef;
};
