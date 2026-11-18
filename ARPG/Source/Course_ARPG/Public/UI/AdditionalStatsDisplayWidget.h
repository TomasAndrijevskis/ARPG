
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
	
	void UpdateText();
	
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

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_ElementalResistance;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_ElementalDamageModificator;

	static FText GetAsText(float Value);
	
};
