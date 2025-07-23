
#include "UI/PlayerTeleport.h"
#include "Animation/WidgetAnimation.h"


void UPlayerTeleport::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}


float UPlayerTeleport::GetAnimDuration()
{
	return FadeIn->GetEndTime();
}


void UPlayerTeleport::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	this->RemoveFromParent();
}
