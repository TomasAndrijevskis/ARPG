
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BonfireInteractionWidget.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UBonfireInteractionWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_InteractionText;
	
};
