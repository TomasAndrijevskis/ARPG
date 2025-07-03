
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthBar.generated.h"


class UProgressBar;

UCLASS()
class COURSE_ARPG_API UEnemyHealthBar : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetHealth(float NewHealthPercent);
	
private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;
};
