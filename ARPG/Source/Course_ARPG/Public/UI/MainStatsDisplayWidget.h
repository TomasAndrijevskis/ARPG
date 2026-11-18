
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "MainStatsDisplayWidget.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UMainStatsDisplayWidget : public UUserWidget_Base
{
	GENERATED_BODY()

public:

	void UpdateText();

private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Health;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Stamina;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Mana;
	
	FText GetAsText(float Value, float MaxValue);
};