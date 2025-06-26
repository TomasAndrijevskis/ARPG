
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "AbilityFooter.generated.h"


class UAbilityComponent_Base;

UCLASS()
class COURSE_ARPG_API UAbilityFooter : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetAbility(UTexture2D* Image, FString ActionKey, UAbilityComponent_Base* AbilityComp);
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbilityComponent_Base* AbilityComp_REF;
	
private:

	void SetImageStyle(UTexture2D* Image);
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_CooldownValue;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_ActionKey;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_AbilityIcon;
	
};
