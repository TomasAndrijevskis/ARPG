
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BossHealthBar.generated.h"


class UProgressBar;

UCLASS()
class COURSE_ARPG_API UBossHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetHealth(float NewHealthPercent);
	
private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;
};
