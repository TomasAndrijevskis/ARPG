
#include "UI/TransitionAnim.h"
#include "Animation/WidgetAnimation.h"


void UTransitionAnim::PlayAnim(EAnimTypes AnimType)
{
	switch (AnimType)
	{
		case EAnimTypes::FadeIn:
			PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
			break;
		case EAnimTypes::FadeOut:
			PlayAnimation(FadeOut, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
			break;
		case EAnimTypes::FullFade:
			PlayAnimation(FullFade, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
			break;
	}
}


float UTransitionAnim::GetAnimDuration(EAnimTypes AnimType) const
{
	switch (AnimType)
	{
		case EAnimTypes::FadeIn:
			return FadeIn->GetEndTime();
		case EAnimTypes::FadeOut:
			return FadeOut->GetEndTime();
		case EAnimTypes::FullFade:
			return FullFade->GetEndTime();
		default:
			return 0;
	}
}


void UTransitionAnim::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	this->RemoveFromParent();
}