
#include "Combat/RangeAttackProjectile.h"

ARangeAttackProjectile::ARangeAttackProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
}


bool ARangeAttackProjectile::IsPlayerControlledActor(AActor* OtherActor)
{
	APawn* PawnRef = Cast<APawn>(OtherActor);

	if (PawnRef->IsPlayerControlled())
	{
		return true;
	}
	return false;
}