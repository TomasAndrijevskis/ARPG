
#include "UI/LevelUpNotification.h"


void ULevelUpNotification::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}


void ULevelUpNotification::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	RemoveWidget();
}


void ULevelUpNotification::RemoveWidget()
{
	this->RemoveFromParent();
}
