
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/PersistentData/PlayerStatsData.h"
#include "StatsWidget.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UStatsWidget : public UUserWidget
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

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PhysicalDamage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_MagicalDamage;

	void SetText();

	FText GetAsText(float Value, float MaxValue);

	FText GetAsText(float Value);

	UPROPERTY()
	FPlayerStatsData Data;
};