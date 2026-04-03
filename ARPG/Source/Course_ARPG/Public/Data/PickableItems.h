
#pragma once

#include "CoreMinimal.h"
#include "PickableItems.generated.h"


class APickableItem_Base;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FPickableItems: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	int32 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APickableItem_Base> ItemClass;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Image;

	UPROPERTY(EditDefaultsOnly)
	bool IsStackable;
};