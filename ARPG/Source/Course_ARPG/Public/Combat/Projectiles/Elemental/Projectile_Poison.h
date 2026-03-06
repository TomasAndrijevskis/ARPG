
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Elemental.h"
#include "Projectile_Poison.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Poison : public AProjectile_Elemental
{
	GENERATED_BODY()

public:

	AProjectile_Poison();

protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
