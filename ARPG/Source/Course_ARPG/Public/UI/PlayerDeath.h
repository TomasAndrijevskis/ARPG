
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerDeath.generated.h"


UCLASS()
class COURSE_ARPG_API UPlayerDeath : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;

	virtual void OnAnimationFinished_Implementation( const UWidgetAnimation* Animation);
	
private:

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeIn;
};
