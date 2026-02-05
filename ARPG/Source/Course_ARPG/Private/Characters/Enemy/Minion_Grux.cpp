
#include "Characters/Enemy/Minion_Grux.h"
#include "Combat/DamageTypes.h"
#include "Components/TraceComponent.h"


AMinion_Grux::AMinion_Grux()
{
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


TSubclassOf<UDamageType> AMinion_Grux::GetDamageType() const
{
	return UPhysicalDamageType::StaticClass();
}
