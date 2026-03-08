
#include "Animations/Player/AnimInstance_Warrior.h"


void UAnimInstance_Warrior::BecomeInvincible()
{
	OnInvincibilityRequested.Broadcast();
}


void UAnimInstance_Warrior::IncreaseDamage()
{
	OnDamageIncreaseRequested.Broadcast();
}


void UAnimInstance_Warrior::StealLife()
{
	OnStealLifeRequested.Broadcast();
}


void UAnimInstance_Warrior::SummonLightningBall()
{
	OnLightningBallSummoned.Broadcast();
}