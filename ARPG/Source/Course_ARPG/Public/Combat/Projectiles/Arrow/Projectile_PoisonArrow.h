
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Projectile_PoisonArrow.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_PoisonArrow : public AProjectile_Arrow
{
	GENERATED_BODY()

public:

	AProjectile_PoisonArrow();

protected:

	virtual void HandleDestruction() override;
	
private:

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* PoisonParticle;
};
