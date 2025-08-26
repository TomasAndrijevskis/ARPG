
#include "Characters/Minion_Rampage.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/GroundSmashComponent.h"
#include "Combat/TraceComponent.h"


AMinion_Rampage::AMinion_Rampage()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	GroundSmashComp = CreateDefaultSubobject<UGroundSmashComponent>(TEXT("Ground Smash Component"));
}
