
#pragma once

#include "CoreMinimal.h"
#include "StatusIcon.h"
#include "AbilityIconWithTimer.generated.h"


class UAbilityComponent_Base;
class UVerticalBox;
class UImage;
class UTextBlock;

UCLASS()
class COURSE_ARPG_API UAbilityIconWithTimer : public UStatusIcon
{
	GENERATED_BODY()

public:
	
	void InitializeWidget(const float Duration, UTexture2D* Icon, UAbilityComponent_Base* NewAbilityCompRef, const FVector2d& IconSize);
	
	virtual void RemoveWidget() override;
	
private:
	
	UPROPERTY()
	UAbilityComponent_Base* AbilityCompRef;
};
