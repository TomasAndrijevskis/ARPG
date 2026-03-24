
#pragma once

#include "CoreMinimal.h"
#include "ArcherEnchantmentData.h"
#include "MageEnchantmentData.h"
#include "WarriorEnchantmentData.h"
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
	FWarriorEnchantmentData WarriorEnchantmentData;

	UPROPERTY(EditDefaultsOnly)
	FMageEnchantmentData MageEnchantmentData;

	UPROPERTY(EditDefaultsOnly)
	FArcherEnchantmentData ArcherEnchantmentData;
};