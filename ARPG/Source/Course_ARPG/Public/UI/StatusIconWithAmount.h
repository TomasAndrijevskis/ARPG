
#pragma once

#include "CoreMinimal.h"
#include "StatusIcon.h"
#include "StatusIconWithAmount.generated.h"


class UStatsComponent;
class UTextBlock;
class UImage;

UCLASS()
class COURSE_ARPG_API UStatusIconWithAmount : public UStatusIcon
{
	GENERATED_BODY()

public:
	
	void InitializeWidget(const float Amount, UTexture2D* Image, UStatsComponent* NewStatsCompRef, const FString& NewKey, const FVector2d& ImageSize);
	
	virtual void RemoveWidget() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Amount;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_StatusIcon;

	UPROPERTY()
	UStatsComponent* StatsCompRef;

	FString Keyword;
};
