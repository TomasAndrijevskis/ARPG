
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

	UFUNCTION()
	void InitializeInfoHeader(const int Value);

	UFUNCTION()
	void SetPointsAmount(const int NewAmount);

	UFUNCTION()
	void UpdateStatValue(const int NewValue);

	UFUNCTION()
	void UpdateAbilityPoints(const int NewValue);
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PointsText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PointsValue;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
};
