
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/EStats.h"
#include "StatsScreenWidget.generated.h"


UCLASS()
class COURSE_ARPG_API UStatsScreenWidget : public UUserWidget
{
	GENERATED_BODY()


protected:
	
	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	float ImproveStat(float CurrentValue);

	UFUNCTION(BlueprintCallable)
	void SetStatsVariables(EStats StatToImprove);

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StatValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStats> Stat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StatName;
	
private:

	class AMainCharacter* PlayerRef;
	
	
};
