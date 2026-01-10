
#pragma once

#include "CoreMinimal.h"
#include "EStats.h"
#include "Engine/DataAsset.h"
#include "DefaultStatsDataAsset.generated.h"


UCLASS(BlueprintType)
class COURSE_ARPG_API UDefaultStatsDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EStats>, float> DefaultStats;
};
