#pragma once

#include "CoreMinimal.h"
#include "ItemsData.generated.h"


class APickableItem_Base;

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FItemsData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	int ID;
	
	UPROPERTY(EditDefaultsOnly)
	APickableItem_Base* ItemClass;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* Image;
};