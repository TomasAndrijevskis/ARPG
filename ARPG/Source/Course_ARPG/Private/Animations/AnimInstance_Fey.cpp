
#include "Animations/AnimInstance_Fey.h"
#include "Characters/Enemy/Boss_Fey.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionComponent.h"
#include "Combat/Abilities/EnemyAbilities/SummonMinionsComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


void UAnimInstance_Fey::HandleProjectileSpawn() const
{
	if (!PawnRef) return;
	if (PawnRef->FindComponentByClass<UEnemyProjectileComponent>())
		PawnRef->FindComponentByClass<UEnemyProjectileComponent>()->SpawnProjectile();
}


void UAnimInstance_Fey::SpawnPoisonArea() const
{
	if (!PawnRef) return;
	Cast<ABoss_Fey>(PawnRef)->PoisonExplosionComp->SpawnArea();
}


void UAnimInstance_Fey::ExplodePoisonArea() const
{
	if (!PawnRef) return;
	Cast<ABoss_Fey>(PawnRef)->PoisonExplosionComp->SpawnExplosion();
}


void UAnimInstance_Fey::HandleSummonMinions() const
{
	if (!PawnRef) return;
	Cast<ABoss_Fey>(PawnRef)->SummonMinionsComp->StartSummon();
}

