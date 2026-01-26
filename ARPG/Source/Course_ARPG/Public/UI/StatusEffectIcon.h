
#pragma once

#include "CoreMinimal.h"
#include "UI/StatusIcon.h"
#include "StatusEffectIcon.generated.h"


class UStatusEffectsComponent;

UCLASS()
class COURSE_ARPG_API UStatusEffectIcon : public UStatusIcon
{
	GENERATED_BODY()

public:

	void InitializeWidget(UTexture2D* Icon, const FVector2d& IconSize, UStatusEffectsComponent* NewStatusEffectCompRef);

private:

	UPROPERTY()
	UStatusEffectsComponent* StatusEffectCompRef;
};