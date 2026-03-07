
#include "Animations/Player/AnimInstance_Mage.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAnimInstance_Mage::HandleLongRangeAttack()
{
	if (!PlayerRef) return;
	PlayerRef->SpawnProjectile();
}
