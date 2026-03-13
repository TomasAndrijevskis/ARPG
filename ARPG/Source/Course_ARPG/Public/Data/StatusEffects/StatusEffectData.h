
#pragma once

#include "CoreMinimal.h"
#include "Combat/DamageTypes.h"
#include "StatusEffectData.generated.h"


class UNiagaraSystem;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FStatusEffectData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTypeBase> DamageType;
	
	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* VisualEffect;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Icon;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* WeaponEffect_N;

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* WeaponEffect_P;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> Projectile;
};