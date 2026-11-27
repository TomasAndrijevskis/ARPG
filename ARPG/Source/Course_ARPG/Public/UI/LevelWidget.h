
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LevelWidget.generated.h"

class UTextBlock;

UCLASS()
class COURSE_ARPG_API ULevelWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void UpdateText();
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Level;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Experience;
	
	FText GetAsText(float Value, float MaxValue);

	FText GetAsText(float Value);
};