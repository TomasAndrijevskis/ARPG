
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoisonExplosionArea.generated.h"

class UNiagaraSystem;
class USphereComponent;
class UAbilityComponent_Base;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExplosionTriggeredSignature);
UCLASS()
class COURSE_ARPG_API APoisonExplosionArea : public AActor
{
	GENERATED_BODY()
	
public:	

	APoisonExplosionArea();

	void SetParams(float NewExplosionDamage, float NewPoisonDamage, float NewPoisonRate, float NewPoisonDuration, UNiagaraSystem* NewPoisonEffect, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* NewIcon);

	FOnExplosionTriggeredSignature OnExplosionTriggeredDelegate;

private:

	UFUNCTION()
	void CheckPlayerInRange();
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* SpawnEffect;

	UPROPERTY(EditDefaultsOnly)
	USphereComponent* PoisonArea;

	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;

	UTexture2D* Icon;
	
	float ExplosionDamage;

	float PoisonDamage;

	float PoisonRate;

	float PoisonDuration;

	UNiagaraSystem* PoisonEffect;
	
};
