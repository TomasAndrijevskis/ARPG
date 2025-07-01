
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoHeader.generated.h"


class AMainCharacter_Base;
class UTextBlock;

UCLASS()
class COURSE_ARPG_API UInfoHeader : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void InitializeInfoHeader(int Value);

	UFUNCTION()
	void SetPointsAmount(int NewAmount);

	UFUNCTION()
	void UpdateStatValue(int NewValue);

	UFUNCTION()
	void UpdateAbilityPoints(int NewValue);
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PointsText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PointsValue;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
};
