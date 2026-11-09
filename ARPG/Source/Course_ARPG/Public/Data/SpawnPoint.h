#pragma once

#include "CoreMinimal.h"
#include "SpawnPoint.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FSpawnPoint : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditInstanceOnly)
	FName MapName = "";
	
	UPROPERTY(EditInstanceOnly)
	FString LocationTag = "";

	bool operator==(const FSpawnPoint& Other) const
	{
		return MapName == Other.MapName && LocationTag == Other.LocationTag;
	}
};
