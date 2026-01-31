
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

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Level;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Experience;

	void SetText();

	FString Level;
	
	FString XP;
};