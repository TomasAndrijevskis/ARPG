
#include "Characters/Boss_Fey.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/StatsComponent.h"
#include "Characters/AI/BTTask_SummonMinions.h"
#include "Combat/PoisonExplosionComponent.h"
#include "Combat/SummonMinionsComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


ABoss_Fey::ABoss_Fey()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	PoisonExplosionComp = CreateDefaultSubobject<UPoisonExplosionComponent>(TEXT("Poison Explosion"));
	SummonMinionsComp = CreateDefaultSubobject<USummonMinionsComponent>(TEXT("Summon Minions"));
}


void ABoss_Fey::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
	HandleBehaviour();
}


void ABoss_Fey::HandleBehaviour()
{
	float CurrentHealthPercent = StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth);
	//UE_LOG(LogTemp, Warning, TEXT("Current Health: %f"), CurrentHealthPercent);
	if (MeleeAttacksCounter < MeleeAttackHealthThresholds.Num() && CurrentHealthPercent <= MeleeAttackHealthThresholds[MeleeAttacksCounter])
	{
		//UE_LOG(LogTemp, Warning, TEXT("MeleeAttacksCounter: %i"), MeleeAttacksCounter);
		//UE_LOG(LogTemp, Warning, TEXT("MeleeAttackHealthThresholds.Num: %i"), MeleeAttackHealthThresholds.Num());
		SwitchToMeleeAttack();
	}
	if (SummonCounter < SummonHealthThresholds.Num() && CurrentHealthPercent <= SummonHealthThresholds[SummonCounter])
	{
		//UE_LOG(LogTemp, Warning, TEXT("SummonCounter: %i"), SummonCounter);
		//UE_LOG(LogTemp, Warning, TEXT("SummonHealthThresholds.Num: %i"), SummonHealthThresholds.Num());
		SummonMinions();
	}
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