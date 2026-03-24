
#pragma once

#include "CoreMinimal.h"
#include "ArcherEnchantmentData.generated.h"


class UNiagaraSystem;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FArcherEnchantmentData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* WeaponEffect;
};