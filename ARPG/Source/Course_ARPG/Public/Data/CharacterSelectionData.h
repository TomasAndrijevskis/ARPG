#pragma once

#include "CoreMinimal.h"
#include "CharacterSelectionData.generated.h"


class AMainCharacter_Base;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FCharacterSelectionData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AMainCharacter_Base> SelectedCharacterClass;

	UPROPERTY(EditDefaultsOnly)
	FText Name;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Image;
};