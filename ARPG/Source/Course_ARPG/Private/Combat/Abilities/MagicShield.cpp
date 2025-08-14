
#include "Combat/Abilities/MagicShield.h"
#include "Components/SphereComponent.h"
#include "NiagaraComponent.h"


AMagicShield::AMagicShield()
{
	ShieldCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	ShieldCollision->SetupAttachment(RootComponent);

	MagicShield = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX"));
	MagicShield->SetupAttachment(ShieldCollision);
}
