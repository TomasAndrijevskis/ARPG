
#include "Characters/Minion_Grux.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"


AMinion_Grux::AMinion_Grux()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}
