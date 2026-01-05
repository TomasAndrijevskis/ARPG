
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatusIconWithAmount.generated.h"


class UStatsComponent;
class UTextBlock;
class UImage;

UCLASS()
class COURSE_ARPG_API UStatusIconWithAmount : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void InitializeWidget(const float Amount, UTexture2D* Image, UStatsComponent* NewStatsCompRef, const FString& NewKey);
	
	UFUNCTION()
	void SetAmount(const float AmountLeft);

	UFUNCTION()
	void SetStatusIcon(UTexture2D* Icon);

	UFUNCTION()
	void RemoveWidget();
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Amount;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_StatusIcon;

	UPROPERTY()
	UStatsComponent* StatsCompRef;

	FString Keyword;
};
