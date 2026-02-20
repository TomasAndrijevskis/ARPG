
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/EAnimTypes.h"
#include "TransitionAnim.generated.h"


class AMainCharacter_Base;
class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API UTransitionAnim : public UUserWidget
{
	GENERATED_BODY()

public:

	float GetAnimDuration(EAnimTypes AnimType) const;

	void PlayAnim(EAnimTypes AnimType);
	
protected:
	
	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation) override;
	
private:

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeIn;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeOut;

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FullFade;
};