
#include "Characters/Enemy/Minion_Rampage.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_GroundSmash.h"
#include "Components/TraceComponent.h"


AMinion_Rampage::AMinion_Rampage()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	GroundSmashComp = CreateDefaultSubobject<UAbComp_GroundSmash>(TEXT("Ground Smash Component"));
}
