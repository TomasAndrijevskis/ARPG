
#include "Characters/Enemy/Minion_Fey.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


AMinion_Fey::AMinion_Fey()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
}
