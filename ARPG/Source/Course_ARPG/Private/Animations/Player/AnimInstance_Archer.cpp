
#include "Animations/Player/AnimInstance_Archer.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAnimInstance_Archer::HandleLongRangeAttack()
{
	if (!PlayerRef) return;
	PlayerRef->SpawnProjectile();
}


void UAnimInstance_Archer::FireHealingArrow()
{
	OnHealingArrowFireRequested.Broadcast();
}