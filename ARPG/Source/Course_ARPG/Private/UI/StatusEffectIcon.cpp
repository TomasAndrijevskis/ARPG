
#include "UI/StatusEffectIcon.h"
#include "Components/StatusEffectsComponent.h"


void UStatusEffectIcon::InitializeWidget(UTexture2D* Icon, const FVector2d& IconSize, UStatusEffectsComponent* NewStatusEffectCompRef)
{
	if (!NewStatusEffectCompRef || !Icon) return;
	StatusEffectCompRef = NewStatusEffectCompRef;
	SetStatusIcon(Icon, IconSize);
	StatusEffectCompRef->OnStatusIconRemoveRequestDelegate.AddUObject(this, &ThisClass::RemoveWidget);
}