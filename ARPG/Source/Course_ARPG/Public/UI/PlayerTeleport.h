
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerTeleport.generated.h"


class AMainCharacter_Base;
class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API UPlayerTeleport : public UUserWidget
{
	GENERATED_BODY()

public:

	float GetAnimDuration();
	
protected:

	virtual void NativeConstruct() override;

	virtual void OnAnimationFinished_Implementation( const UWidgetAnimation* Animation);
	
private:

	UPROPERTY(Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* FadeIn;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
};
