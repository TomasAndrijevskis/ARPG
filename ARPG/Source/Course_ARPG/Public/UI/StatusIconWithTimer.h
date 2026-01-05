
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatusIconWithTimer.generated.h"


class UAbilityComponent_Base;
class UVerticalBox;
class UImage;
class UTextBlock;

UCLASS()
class COURSE_ARPG_API UStatusIconWithTimer : public UUserWidget
{
	GENERATED_BODY()

public:
	
	void InitializeWidget(const float Duration, UTexture2D* Image, UAbilityComponent_Base* NewAbilityCompRef, const FVector2d& ImageSize);
	
	UFUNCTION()
	void SetCountdownTime(const float TimeLeft);
	
	void SetStatusIcon(UTexture2D* Icon, const FVector2d& ImageSize);

	UFUNCTION()
	void RemoveWidget();
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Countdown;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_StatusIcon;
	
	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;
};
