
#include "Characters/Enemy/Minion_Grux.h"
#include "Components/TraceComponent.h"


AMinion_Grux::AMinion_Grux()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}
