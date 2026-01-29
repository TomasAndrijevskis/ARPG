#pragma once

#include "CoreMinimal.h"
#include "CharacterSelectionData.generated.h"


class AMainCharacter_Base;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FCharacterSelectionData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AMainCharacter_Base> SelectedCharacterClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* Image;
};
