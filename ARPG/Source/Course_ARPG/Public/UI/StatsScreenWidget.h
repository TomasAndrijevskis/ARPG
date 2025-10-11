
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Characters/EStats.h"
#include "Components/TextBlock.h"
#include "StatsScreenWidget.generated.h"


UCLASS()
class COURSE_ARPG_API UStatsScreenWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	void SetStatsVariables(const EStats& StatToImprove);

protected:
	
	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_StatValue;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_StatName;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_ImproveStat;
	
	UFUNCTION()
	void OnClickedImproveStat();
	
	UFUNCTION()
	float ImproveStat(const float CurrentValue);
	
	UFUNCTION()
	void UpdateText(FString& Name, const float Value);
	
	UPROPERTY()
	class AMainCharacter_Base* PlayerRef;
		
	UPROPERTY()
	float StatValue;

	UPROPERTY()
	TEnumAsByte<EStats> Stat;

	UPROPERTY()
	FString StatName;
};
