
#pragma once

#include "CoreMinimal.h"
#include "StatusEffectData.h"
#include "Data/EEffects.h"
#include "Engine/DataAsset.h"
#include "StatusEffectsVisualData.generated.h"


UCLASS()
class COURSE_ARPG_API UStatusEffectsVisualData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TMap<EEffects, FStatusEffectData> StatusEffects;
};
