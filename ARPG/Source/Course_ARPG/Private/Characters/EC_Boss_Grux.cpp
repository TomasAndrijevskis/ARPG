
#include "Characters/EC_Boss_Grux.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


AEC_Boss_Grux::AEC_Boss_Grux()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
}
