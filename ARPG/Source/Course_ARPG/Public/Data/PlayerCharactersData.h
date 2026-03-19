
#pragma once

#include "CoreMinimal.h"
#include "CharacterSelectionData.h"
#include "Engine/DataAsset.h"
#include "PlayerCharactersData.generated.h"


UCLASS(BlueprintType)
class COURSE_ARPG_API UPlayerCharactersData : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly)
	TArray<FCharacterSelectionData> CharactersData;
};
