
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Elemental.h"
#include "GameFramework/Actor.h"
#include "Projectile_Lightning.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Lightning : public AProjectile_Elemental
{
	GENERATED_BODY()
	
public:	

	AProjectile_Lightning();

protected:
	
	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
