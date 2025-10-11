
#include "UI/BonfireInteractionAnim.h"
#include "Animation/WidgetAnimation.h"


void UBonfireInteractionAnim::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}


float UBonfireInteractionAnim::GetAnimDuration() const
{
	return FadeIn->GetEndTime();
}


void UBonfireInteractionAnim::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	this->RemoveFromParent();
}
