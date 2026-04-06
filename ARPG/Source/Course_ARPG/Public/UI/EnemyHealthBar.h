
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EnemyHealthBar.generated.h"


class UStatusEffectsComponent;
class UStatusEffectIcon;
class UHorizontalBox;
class UProgressBar;

UCLASS()
class COURSE_ARPG_API UEnemyHealthBar : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION()
	void SetHealth(const float NewHealthPercent);

	void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef);

	void SetHealthBarColor(bool IsMarked);
	
private:

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_HealthBar;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_StatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffectIcon> StatusEffectIconWidgetClass;

	UPROPERTY(EditAnywhere)
	FVector2D IconSize;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor OriginalHealthBarColor;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor MarkedHealthBarColor;
};
