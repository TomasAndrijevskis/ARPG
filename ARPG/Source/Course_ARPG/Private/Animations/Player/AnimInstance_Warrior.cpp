
#include "Animations/Player/AnimInstance_Warrior.h"
#include "Characters/ARPG_Character_Base.h"
#include "Components/TraceComponent.h"


void UAnimInstance_Warrior::HandleResetAttack()
{
	Super::HandleResetAttack();
	if (!IsValid(PawnRef)) return;
	if (UTraceComponent* TraceComp = PawnRef->FindComponentByClass<UTraceComponent>())
	{
		TraceComp->HandleResetAttack();
	}
}


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