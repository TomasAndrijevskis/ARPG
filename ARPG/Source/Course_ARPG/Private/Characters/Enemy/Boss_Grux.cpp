
#include "Characters/Enemy/Boss_Grux.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "Components/TraceComponent.h"


ABoss_Grux::ABoss_Grux()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


void ABoss_Grux::SpawnProjectile()
{
	ProjectileComp->SpawnProjectile();
}
