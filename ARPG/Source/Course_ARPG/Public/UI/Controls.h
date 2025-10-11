#pragma once

#include "CoreMinimal.h"
#include "Controls.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FControls : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UTexture2D* Image;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FText Description;

};
