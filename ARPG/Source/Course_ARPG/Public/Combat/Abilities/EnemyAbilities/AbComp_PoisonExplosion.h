
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Enemy.h"
#include "Components/ActorComponent.h"
#include "AbComp_PoisonExplosion.generated.h"


class UNiagaraSystem;
class APoisonExplosionArea;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbComp_PoisonExplosion : public UAbilityComponent_Enemy
{
	GENERATED_BODY()

public:

	virtual void StartAbility() override;
	
	virtual void FinishAbilityCast() override;
	
private:
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* ExplosionStartEffect;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* ExplosionEndEffect;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> PoisonAreaClass;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* PoisonEffect;
	
	UPROPERTY(EditAnywhere)
	float ExplosionDamage;

	UPROPERTY(EditAnywhere)
	float PoisonDamage;

	UPROPERTY(EditAnywhere)
	float PoisonRate;
	
	UPROPERTY()
	APoisonExplosionArea* PoisonAreaRef;
};
