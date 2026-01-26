
#pragma once

#include "CoreMinimal.h"
#include "StatusIcon.h"
#include "AbilityIconWithAmount.generated.h"


class UStatsComponent;
class UTextBlock;
class UImage;

UCLASS()
class COURSE_ARPG_API UAbilityIconWithAmount : public UStatusIcon
{
	GENERATED_BODY()

public:
	
	void InitializeWidget(const float Amount, UTexture2D* Icon, UStatsComponent* NewStatsCompRef, const FString& NewKey, const FVector2d& IconSize);
	
	virtual void RemoveWidget() override;
	
private:

	UPROPERTY()
	UStatsComponent* StatsCompRef;

	FString Keyword;
};
