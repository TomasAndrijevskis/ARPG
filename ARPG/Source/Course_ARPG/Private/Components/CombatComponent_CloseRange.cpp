
#include "Components/CombatComponent_CloseRange.h"
#include "GameFramework/Character.h"


void UCombatComponent_CloseRange::ComboAttack()
{
	if (!HasEnoughResource() || !bCanAttack) return;
	Super::ComboAttack();
	CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	OnAttackPerformedDelegate.Broadcast(AttackCost);
}