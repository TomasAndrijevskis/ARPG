
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"


AProjectile_AllElementsArrow::AProjectile_AllElementsArrow()
{
	EffectSpawnComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Effect Spawn Component"));
	EffectSpawnComponent->SetupAttachment(GetRootComponent());
}
