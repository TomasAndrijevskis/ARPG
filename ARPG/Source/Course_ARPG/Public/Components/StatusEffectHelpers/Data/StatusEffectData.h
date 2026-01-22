
#pragma once

#include "CoreMinimal.h"
#include "StatusEffectData.generated.h"


class UNiagaraSystem;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FStatusEffectData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* Effect;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Icon;
};