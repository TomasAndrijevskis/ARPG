
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

	void NativeConstruct() override;
	
	void InitializeText(FString InteractionObject, FString InteractionObjectName,  FString InteractiontKey);
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_InteractionText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_InteractionText_1;
};
