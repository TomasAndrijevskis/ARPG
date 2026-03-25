
#include "Animations/Player/AnimInstance_Archer.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAnimInstance_Archer::HandleLongRangeAttack()
{
	if (!PlayerRef) return;
	PlayerRef->SpawnProjectile();
}


void UAnimInstance_Archer::FireHealingArrow()
{
	OnHealingArrowFireRequest.Broadcast();
}


void UAnimInstance_Archer::SpawnArrowBarrage()
{
	OnArrowBarrageSpawnRequest.Broadcast();
}


void UAnimInstance_Archer::SpawnAllElementsArrow()
{
	OnAllElementsArrowSpawnRequest.Broadcast();
}


void UAnimInstance_Archer::SpawnExplosiveArrow()
{
	OnExplosiveArrowSpawnRequest.Broadcast();
}