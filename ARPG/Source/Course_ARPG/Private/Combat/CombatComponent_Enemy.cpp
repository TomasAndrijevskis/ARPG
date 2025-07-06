
#include "Combat/CombatComponent_Enemy.h"
#include "GameFramework/Character.h"


void UCombatComponent_Enemy::RandomAttack()
{
	int RandomIndex = FMath::RandRange(0, AttackAnimations.Num() - 1);

	AnimDuration = CharacterRef->PlayAnimMontage(AttackAnimations[RandomIndex]);
}

