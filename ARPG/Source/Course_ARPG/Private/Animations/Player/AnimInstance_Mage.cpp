
#include "Animations/Player/AnimInstance_Mage.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAnimInstance_Mage::HandleLongRangeAttack()
{
	if (!PlayerRef) return;
	PlayerRef->SpawnProjectile();
}


void UAnimInstance_Mage::SpawnFrostBlast()
{
	OnFrostBlastUnleashRequest.Broadcast();
}


void UAnimInstance_Mage::SpawnFireStorm()
{
	OnFireStormSpawnRequest.Broadcast();
}
