
#include "Animations/AnimInstance_Fey.h"
#include "Characters/Boss_Fey.h"
#include "Characters/AI/BTTask_SummonMinions.h"
#include "Combat/PoisonExplosionComponent.h"
#include "Combat/SummonMinionsComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


void UAnimInstance_Fey::HandleProjectileSpawn()
{
	if (!PawnRef)
	{
		return;
	}
	if (PawnRef->FindComponentByClass<UEnemyProjectileComponent>())
	{
		PawnRef->FindComponentByClass<UEnemyProjectileComponent>()->SpawnProjectile();
	}
}


void UAnimInstance_Fey::SpawnPoisonArea()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<ABoss_Fey>(PawnRef)->PoisonExplosionComp->SpawnArea();
}


void UAnimInstance_Fey::ExplodePoisonArea()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<ABoss_Fey>(PawnRef)->PoisonExplosionComp->SpawnExplosion();
}


void UAnimInstance_Fey::HandleSummonMinions()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<ABoss_Fey>(PawnRef)->SummonMinionsComp->StartSummon();
}

