
#include "Animations/Enemy/AnimInstance_Fey.h"
#include "Characters/Enemy/Boss_Fey.h"
#include "Components/EnemyProjectileComponent.h"


void UAnimInstance_Fey::HandleLongRangeAttack()
{
	if (!PawnRef) return;
	if (UEnemyProjectileComponent* ProjectileComp = PawnRef->FindComponentByClass<UEnemyProjectileComponent>())
	{
		ProjectileComp->SpawnProjectile();
	}
}


void UAnimInstance_Fey::SpawnPoisonArea() const
{
	if (!PawnRef) return;
	Cast<ABoss_Fey>(PawnRef)->StartPoisonAbility();
}


void UAnimInstance_Fey::ExplodePoisonArea() const
{
	if (!PawnRef) return;
	Cast<ABoss_Fey>(PawnRef)->FinishPoisonAbility();
}


void UAnimInstance_Fey::HandleSummonMinions() const
{
	if (!PawnRef) return;
	Cast<ABoss_Fey>(PawnRef)->StartSummonAbility();
}