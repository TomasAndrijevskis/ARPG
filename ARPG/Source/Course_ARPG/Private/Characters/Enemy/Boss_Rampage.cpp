
#include "Characters/Enemy/Boss_Rampage.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_GroundSmash.h"
#include "Components/StatsComponent.h"
#include "Components/TraceComponent.h"


ABoss_Rampage::ABoss_Rampage()
{
	GroundSmashComp = CreateDefaultSubobject<UAbComp_GroundSmash>(TEXT("Ground Smash Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


void ABoss_Rampage::StartAbility()
{
	GroundSmashComp->StartAbility();
}


void ABoss_Rampage::ActivateSecondPhase()
{
	Super::ActivateSecondPhase();
	StatsComp->SetStatValue(EStats::MagDmgResistance, StatsComp->GetStatValue(MagDmgResistance) * 2);
	StatsComp->SetStatValue(EStats::PhysDmgResistance, StatsComp->GetStatValue(PhysDmgResistance) * 2);
}