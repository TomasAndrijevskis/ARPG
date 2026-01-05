
#include "Characters/Enemy/Minion_Rampage.h"
#include "Combat/Abilities/EnemyAbilities/GroundSmashComponent.h"
#include "Components/TraceComponent.h"


AMinion_Rampage::AMinion_Rampage()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	GroundSmashComp = CreateDefaultSubobject<UGroundSmashComponent>(TEXT("Ground Smash Component"));
}
