
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

	void SetParams(const float NewExplosionDamage, const float NewPoisonDamage, const float NewPoisonRate, const float NewPoisonDuration, UNiagaraSystem* NewPoisonEffect, UAbilityComponent_Base* NewAbilityCompRef, UTexture2D* NewIcon);

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

	UPROPERTY()
	UTexture2D* Icon;

	UPROPERTY()
	UNiagaraSystem* PoisonEffect;
	
	float ExplosionDamage;

	float PoisonDamage;

	float PoisonRate;

	float PoisonDuration;
};
