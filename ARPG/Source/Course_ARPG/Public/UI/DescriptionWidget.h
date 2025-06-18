
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "DescriptionWidget.generated.h"


UCLASS()
class COURSE_ARPG_API UDescriptionWidget : public UUserWidget
{
	GENERATED_BODY()


public:
	
	void SetDescription(FString Description);
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Description;
};
