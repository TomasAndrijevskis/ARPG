
#pragma once

#include "CoreMinimal.h"
#include "WarriorEnchantmentData.generated.h"


class UNiagaraSystem;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FWarriorEnchantmentData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* WeaponEffect;
};