
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Base.h"
#include "GameFramework/Actor.h"
#include "Projectile_Fire.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Fire : public AProjectile_Base
{
	GENERATED_BODY()
	
public:	

	AProjectile_Fire();
	
protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
