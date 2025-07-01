
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

	
	UFUNCTION(BlueprintCallable)
	void SetStatsVariables(EStats StatToImprove);

	
protected:
	
	virtual void NativeConstruct() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StatValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStats> Stat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StatName;
	
private:

	UFUNCTION()
	void OnClickedImproveStat();
	
	UFUNCTION()
	float ImproveStat(float CurrentValue);
	
	UFUNCTION()
	void UpdateText(FString Name, float Value);
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_StatValue;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_StatName;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_ImproveStat;
	
	class AMainCharacter_Base* PlayerRef;
};
