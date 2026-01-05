
#include "Characters/Enemy/Boss_Fey.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Data/EStats.h"
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionComponent.h"
#include "Combat/Abilities/EnemyAbilities/SummonMinionsComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "Components/StatsComponent.h"


ABoss_Fey::ABoss_Fey()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	PoisonExplosionComp = CreateDefaultSubobject<UPoisonExplosionComponent>(TEXT("Poison Explosion"));
	SummonMinionsComp = CreateDefaultSubobject<USummonMinionsComponent>(TEXT("Summon Minions"));
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
		SummonMinions();
}


void ABoss_Fey::SwitchToMeleeAttack()
{
	MeleeAttacksCounter++;
	GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
}


void ABoss_Fey::SummonMinions()
{
	GetBlackboardComp()->SetValueAsInt(TEXT("SummonTimes"), SummonCounter);
	SummonCounter++;
	GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Summon);
}