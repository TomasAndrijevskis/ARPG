
#include "Animations/Player/AnimInstance_Mage.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAnimInstance_Mage::HandleLongRangeAttack()
{
	if (!PlayerRef) return;
	PlayerRef->SpawnProjectile();
}


void UAnimInstance_Mage::SpawnFrostBlast()
{
	OnFrostBlastSummoned.Broadcast();
}


void UAnimInstance_Mage::SpawnFireStorm()
{
	OnFireStormSummoned.Broadcast();
}


void UAnimInstance_Mage::SpawnHealingAura()
{
	OnHealingAuraSummoned.Broadcast();
}


void UAnimInstance_Mage::SpawnMagicShield()
{
	OnMagicShieldSummoned.Broadcast();
}
