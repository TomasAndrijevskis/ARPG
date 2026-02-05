
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/PersistentData/PlayerAdditionalStatsData.h"
#include "AdditionalStatsDisplayWidget.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UAdditionalStatsDisplayWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PhysDmgResistance;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_MagDmgResistance;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PhysicalStrength;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_MagicalStrength;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_AbilityPower;

	void SetText();

	FText GetAsText(float Value);

	UPROPERTY()
	FPlayerAdditionalStatsData Data;
};
