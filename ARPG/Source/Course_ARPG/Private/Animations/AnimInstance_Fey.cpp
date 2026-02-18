
#include "Animations/AnimInstance_Fey.h"
#include "Characters/Enemy/Boss_Fey.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Components/EnemyProjectileComponent.h"


void UAnimInstance_Fey::HandleProjectileSpawn() const
{
	if (!PawnRef) return;
	if (PawnRef->FindComponentByClass<UEnemyProjectileComponent>())
		PawnRef->FindComponentByClass<UEnemyProjectileComponent>()->SpawnProjectile();
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