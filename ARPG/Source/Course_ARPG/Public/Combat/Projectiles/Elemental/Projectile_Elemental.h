
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Projectile_Elemental.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Elemental : public AProjectile_Base
{
	GENERATED_BODY()

public:
	
	virtual void DestroyProjectile() override;
	
protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;

	virtual void HandleDestruction() override;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particle;
};
