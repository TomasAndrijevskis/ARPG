
#include "Characters/EnemyCharacter_Grux.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"


AEnemyCharacter_Grux::AEnemyCharacter_Grux()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}
