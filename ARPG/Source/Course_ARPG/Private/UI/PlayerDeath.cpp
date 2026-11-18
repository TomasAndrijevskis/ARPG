
#include "UI/PlayerDeath.h"
#include "Characters/Player/ARPG_PlayerController.h"


void UPlayerDeath::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}


void UPlayerDeath::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	if (Animation == FadeIn)
	{
		if (AARPG_PlayerController* PC = GetPlayerController())
		{
			PC->OnDeathAnimationFinished();
		}
	}
}
