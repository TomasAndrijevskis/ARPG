
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatsWidget.generated.h"


class UTextBlock;

UCLASS()
class COURSE_ARPG_API UStatsWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Health;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Stamina;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Mana;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_PhysicalDamage;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_MagicalDamage;

	void SetText();

	FString Health;

	FString Stamina;
	
	FString Mana;
	
	FString PhysicalDamage;

	FString MagicalDamage;
};
