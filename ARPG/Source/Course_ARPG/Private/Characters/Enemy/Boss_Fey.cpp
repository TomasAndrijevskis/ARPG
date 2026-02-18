
#include "Characters/Enemy/Boss_Fey.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Combat/DamageTypes.h"
#include "Data/EStats.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_PoisonExplosion.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_SummonMinions.h"
#include "Components/EnemyProjectileComponent.h"
#include "Components/StatsComponent.h"


ABoss_Fey::ABoss_Fey()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	PoisonExplosionComp = CreateDefaultSubobject<UAbComp_PoisonExplosion>(TEXT("Poison Explosion"));
	SummonMinionsComp = CreateDefaultSubobject<UAbComp_SummonMinions>(TEXT("Summon Minions"));
}

void ABoss_Fey::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
	HandleBehaviour();
}


void ABoss_Fey::HandleBehaviour()
{
	float CurrentHealthPercent = StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth);
	if (MeleeAttacksCounter < MeleeAttackHealthThresholds.Num() && CurrentHealthPercent <= MeleeAttackHealthThresholds[MeleeAttacksCounter])
		SwitchToMeleeAttack();
	if (SummonCounter < SummonHealthThresholds.Num() && CurrentHealthPercent <= SummonHealthThresholds[SummonCounter])
		HandleSummonMinions();
}


void ABoss_Fey::SwitchToMeleeAttack()
{
	MeleeAttacksCounter++;
	GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
}


void ABoss_Fey::HandleSummonMinions()
{
	GetBlackboardComp()->SetValueAsInt(TEXT("SummonTimes"), SummonCounter);
	SummonCounter++;
	GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Summon);
}


void ABoss_Fey::StartPoisonAbility()
{
	PoisonExplosionComp->StartAbility();
}


void ABoss_Fey::FinishPoisonAbility()
{
	PoisonExplosionComp->FinishAbilityCast();
}


void ABoss_Fey::StartSummonAbility()
{
	SummonMinionsComp->StartAbility();
}


void ABoss_Fey::SpawnProjectile()
{
	ProjectileComp->SpawnProjectile();
}


TSubclassOf<UDamageType> ABoss_Fey::GetDamageType() const
{
	return UMagicalDamageType::StaticClass();
}
