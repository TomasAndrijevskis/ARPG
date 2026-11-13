
#include "Animations/Player/AnimInstance_Mage.h"
#include "Characters/ARPG_Character_Base.h"
#include "Components/CombatComponent_Base.h"


void UAnimInstance_Mage::HandleLongRangeAttack()
{
	if (!PawnRef) return;
	if (UCombatComponent_Base* CombatComp = PawnRef->FindComponentByClass<UCombatComponent_Base>())
	{
		CombatComp->SpawnProjectile();
	}
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
