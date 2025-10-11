
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossHealthBar.generated.h"


class UAbilityComponent_Base;
class UHorizontalBox;
class UStatusIconWithTimer;
class UTextBlock;
class UProgressBar;

UCLASS()
class COURSE_ARPG_API UBossHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void SetHealth(const float NewHealthPercent);

	void SetBossName(const FText& NewBossName);

private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_BossName;
	
};
