
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthBar.generated.h"


class UHorizontalBox;
class UProgressBar;

UCLASS()
class COURSE_ARPG_API UEnemyHealthBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION()
	void SetHealth(const float NewHealthPercent);

private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_StatusEffects;
};
