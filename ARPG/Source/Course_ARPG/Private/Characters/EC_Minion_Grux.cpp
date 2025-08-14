
#include "Characters/EC_Minion_Grux.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"


AEC_Minion_Grux::AEC_Minion_Grux()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}
