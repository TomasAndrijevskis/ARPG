
#include "Characters/Minion_Grux.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"


AMinion_Grux::AMinion_Grux()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}
