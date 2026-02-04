
#pragma once

#include "CoreMinimal.h"
#include "StatScaling.h"
#include "Data/EAttributes.h"
#include "Engine/DataAsset.h"
#include "AttributesData.generated.h"


UCLASS(BlueprintType)
class COURSE_ARPG_API UAttributesData: public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, FStatScaling> Attribute;
	
};