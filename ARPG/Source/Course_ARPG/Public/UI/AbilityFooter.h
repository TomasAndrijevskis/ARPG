
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "AbilityFooter.generated.h"


class UAbilityComponent_Player;

UCLASS()
class COURSE_ARPG_API UAbilityFooter : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void SetAbility(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityComp);
	
protected:

	UPROPERTY(EditAnywhere)
	UAbilityComponent_Player* AbilityComp_REF;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_CooldownValue;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_ActionKey;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_AbilityIcon;

	UPROPERTY(VisibleAnywhere)
	UTexture2D* AbilityImage;
	
	void SetImageStyle();

	UFUNCTION()
	void SetImageAvailability();

	UFUNCTION()
	void SetCooldownText(const float TimeLeft);

	UFUNCTION()
	void RemoveCooldownText();
};
