
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatusIcon.generated.h"


class UImage;
class UTextBlock;

UCLASS()
class COURSE_ARPG_API UStatusIcon : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION()
	void SetValue(const float TimeLeft);
	
	void SetStatusIcon(UTexture2D* Icon, const FVector2d& ImageSize);

	UFUNCTION()
	virtual void RemoveWidget();

		
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Value;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_Icon;
};
