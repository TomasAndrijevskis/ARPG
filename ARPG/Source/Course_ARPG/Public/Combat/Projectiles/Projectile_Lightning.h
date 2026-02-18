
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Base.h"
#include "GameFramework/Actor.h"
#include "Projectile_Lightning.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Lightning : public AProjectile_Base
{
	GENERATED_BODY()
	
public:	

	AProjectile_Lightning();

protected:
	
	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
