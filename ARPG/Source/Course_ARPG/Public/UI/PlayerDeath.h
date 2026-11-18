
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "PlayerDeath.generated.h"


UCLASS()
class COURSE_ARPG_API UPlayerDeath : public UUserWidget_Base
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;

	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation) override;
	
private:

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeIn;
};
