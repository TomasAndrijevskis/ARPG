#pragma once

#include "CoreMinimal.h"
#include "CharacterSelectionStruct.generated.h"

class AMainCharacter;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FCharacterSelectionStruct : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AMainCharacter> SelectedCharacterClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* Image;
};
