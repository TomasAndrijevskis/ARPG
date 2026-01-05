
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectInteractionText.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UObjectInteractionText : public UUserWidget
{
	GENERATED_BODY()

public:
	
	void InitializeText(const FString& InteractionObject, const FString& InteractionObjectName,  const FString& InteractionKey);
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_InteractionText_Upper;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_InteractionText_Lower;
};
