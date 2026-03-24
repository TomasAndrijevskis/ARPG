
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Projectile_IceArrow.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_IceArrow : public AProjectile_Arrow
{
	GENERATED_BODY()

public:

	AProjectile_IceArrow();

protected:

	virtual void HandleDestruction() override;
	
private:

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* IceParticle;
	
};
