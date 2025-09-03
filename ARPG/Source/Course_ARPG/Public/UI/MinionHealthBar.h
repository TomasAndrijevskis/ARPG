
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MinionHealthBar.generated.h"


class UAbilityComponent_Base;
class UStatusIconWithTimer;
class UHorizontalBox;
class UProgressBar;

UCLASS()
class COURSE_ARPG_API UMinionHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetHealth(float NewHealthPercent);

private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;
	
};
