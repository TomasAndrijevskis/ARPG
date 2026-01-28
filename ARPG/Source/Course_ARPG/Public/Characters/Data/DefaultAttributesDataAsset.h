
#pragma once

#include "CoreMinimal.h"
#include "EAttributes.h"
#include "Engine/DataAsset.h"
#include "DefaultAttributesDataAsset.generated.h"


UCLASS(BlueprintType)
class COURSE_ARPG_API UDefaultAttributesDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, float> DefaultAttributes;
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, float> DefaultAttributeCoefficients;
};
