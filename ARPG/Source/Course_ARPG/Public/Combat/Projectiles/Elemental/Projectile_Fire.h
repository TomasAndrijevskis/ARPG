
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Elemental.h"
#include "GameFramework/Actor.h"
#include "Projectile_Fire.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Fire : public AProjectile_Elemental
{
	GENERATED_BODY()
	
public:	

	AProjectile_Fire();
	
protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
