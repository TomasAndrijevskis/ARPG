
#include "Components/CombatComponent_Enemy.h"
#include "GameFramework/Character.h"


void UCombatComponent_Enemy::RandomAttack()
{
	int RandomIndex = FMath::RandRange(0, AttackAnimations.Num() - 1);
	AnimDuration = CharacterRef->PlayAnimMontage(AttackAnimations[RandomIndex]);
}


void UCombatComponent_Enemy::ComboAttack()
{
	if (ComboCounter == AttackAnimations.Num() - 1) ComboCounter = 0;
	else ComboCounter++;
	AnimDuration = CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
}