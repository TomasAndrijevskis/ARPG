

#pragma once

#include "CoreMinimal.h"
#include "Data/Characters/CharacterConfiguration.h"
#include "PlayerCharacterConfiguration.generated.h"


class UStatusEffectsVisualData;

UCLASS()
class COURSE_ARPG_API UPlayerCharacterConfiguration : public UCharacterConfiguration
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UStatusEffectsVisualData> StatusEffectsData;

	UPROPERTY(EditDefaultsOnly)
	TSoftObjectPtr<UAnimMontage> HurtAnim;

};
