
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LevelUpNotification.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API ULevelUpNotification : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation) override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Message;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeIn;

	void RemoveWidget();
};
