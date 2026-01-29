#pragma once

#include "CoreMinimal.h"
#include "ControlsData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FControlsData : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* Image;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText Description;
};
