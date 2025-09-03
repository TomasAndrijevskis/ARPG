
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

	//UFUNCTION()
	void InitializeWidget(float Duration, UTexture2D* Image, UAbilityComponent_Base* NewAbilityCompRef, FVector2d ImageSize);
	
	UFUNCTION(BlueprintCallable)
	void SetCountdownTime(float TimeLeft);

	//UFUNCTION(BlueprintCallable)
	void SetStatusIcon(UTexture2D* Icon, FVector2d ImageSize);

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
