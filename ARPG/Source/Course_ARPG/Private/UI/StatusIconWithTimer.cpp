
#include "UI/StatusIconWithTimer.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"



void UStatusIconWithTimer::InitializeWidget(const float Duration, UTexture2D* Image, UAbilityComponent_Base* NewAbilityCompRef, const FVector2d& ImageSize)
{
	if (!NewAbilityCompRef || !Image) return;
	AbilityCompRef = NewAbilityCompRef;
	SetValue(Duration);
	SetStatusIcon(Image, ImageSize);
	AbilityCompRef->OnAbilityTimerChangedDelegate.AddDynamic(this, &UStatusIconWithTimer::SetValue);
	AbilityCompRef->OnAbilityFinishedDelegate.AddDynamic(this, &UStatusIconWithTimer::RemoveWidget);
}



void UStatusIconWithTimer::RemoveWidget()
{
	AbilityCompRef->OnAbilityTimerChangedDelegate.Clear();
	Super::RemoveWidget();
}