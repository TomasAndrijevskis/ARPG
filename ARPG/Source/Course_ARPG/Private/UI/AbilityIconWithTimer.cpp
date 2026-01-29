
#include "UI/AbilityIconWithTimer.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"



void UAbilityIconWithTimer::InitializeWidget(const float Duration, UTexture2D* Icon, UAbilityComponent_Base* NewAbilityCompRef, const FVector2d& IconSize)
{
	if (!NewAbilityCompRef || !Icon) return;
	AbilityCompRef = NewAbilityCompRef;
	SetValue(Duration);
	SetStatusIcon(Icon, IconSize);
	AbilityCompRef->OnAbilityTimerChangedDelegate.AddUObject(this, &UAbilityIconWithTimer::SetValue);
	AbilityCompRef->OnAbilityFinishedDelegate.AddUObject(this, &UAbilityIconWithTimer::RemoveWidget);
}


void UAbilityIconWithTimer::RemoveWidget()
{
	AbilityCompRef->OnAbilityTimerChangedDelegate.Clear();
	Super::RemoveWidget();
}