
#pragma once

#include "CoreMinimal.h"
#include "StatusEffectData.h"
#include "Engine/DataAsset.h"
#include "StatusEffectsVisualData.generated.h"


UCLASS()
class COURSE_ARPG_API UStatusEffectsVisualData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	FStatusEffectData IceEffectData;

	UPROPERTY(EditDefaultsOnly)
	FStatusEffectData FireEffectData;

	UPROPERTY(EditDefaultsOnly)
	FStatusEffectData PoisonEffectData;
};
