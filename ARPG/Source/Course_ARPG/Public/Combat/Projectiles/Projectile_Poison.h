
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Projectile_Poison.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Poison : public AProjectile_Base
{
	GENERATED_BODY()

public:

	AProjectile_Poison();

protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
