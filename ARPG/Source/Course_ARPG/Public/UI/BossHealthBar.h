
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossHealthBar.generated.h"


class UTextBlock;
class UProgressBar;

UCLASS()
class COURSE_ARPG_API UBossHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void SetHealth(float NewHealthPercent);

	void SetBossName(FText NewBossName);
	
private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_BossName;
};
