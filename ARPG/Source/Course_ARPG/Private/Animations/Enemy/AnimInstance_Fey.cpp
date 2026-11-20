
#include "Animations/Enemy/AnimInstance_Fey.h"
#include "Characters/Enemy/Boss_Fey.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_PoisonExplosion.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_SummonMinions.h"
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
	if (UAbComp_PoisonExplosion* PoisonExplosionComp = PawnRef->FindComponentByClass<UAbComp_PoisonExplosion>())
	{
		PoisonExplosionComp->StartAbility();
	}
}


void UAnimInstance_Fey::ExplodePoisonArea() const
{
	if (!PawnRef) return;
	if (UAbComp_PoisonExplosion* PoisonExplosionComp = PawnRef->FindComponentByClass<UAbComp_PoisonExplosion>())
	{
		PoisonExplosionComp->FinishAbilityCast();
	}
}


void UAnimInstance_Fey::HandleSummonMinions() const
{
	if (!PawnRef) return;
	if (UAbComp_SummonMinions* SummonMinionsComp = PawnRef->FindComponentByClass<UAbComp_SummonMinions>())
	{
		SummonMinionsComp->StartAbility();
	}
}