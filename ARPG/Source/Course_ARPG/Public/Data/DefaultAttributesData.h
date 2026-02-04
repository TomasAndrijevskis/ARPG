
#pragma once

#include "CoreMinimal.h"
#include "EAttributes.h"
#include "Engine/DataAsset.h"
#include "DefaultAttributesData.generated.h"


UCLASS(BlueprintType)
class COURSE_ARPG_API UDefaultAttributesData : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, float> DefaultAttributes;
};
