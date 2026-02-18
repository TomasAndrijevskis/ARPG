
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Projectile_Wind.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Wind : public AProjectile_Base
{
	GENERATED_BODY()
	
public:
	
	AProjectile_Wind();

protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
	
};
