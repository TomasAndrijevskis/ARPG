
#include "Characters/Boss_Grux.h"
#include "Combat/TraceComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


ABoss_Grux::ABoss_Grux()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}
