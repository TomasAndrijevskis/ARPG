
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/PersistentData/PlayerMainStatsData.h"
#include "MainStatsDisplayWidget.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UMainStatsDisplayWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Health;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Stamina;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Mana;

	void SetText();

	FText GetAsText(float Value, float MaxValue);

	UPROPERTY()
	FPlayerMainStatsData Data;
};