
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

	void SetPoints(int32 AbilityPoints, int32 AttributePoints);
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Message;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_NewAbilityPoints;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_NewAttributePoints;
	
	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeIn;

	FText GetAsText(int32 Value);
	
	void RemoveWidget();
};
