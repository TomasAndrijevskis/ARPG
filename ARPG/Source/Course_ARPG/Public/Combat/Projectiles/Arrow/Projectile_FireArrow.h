
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Projectile_FireArrow.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_FireArrow : public AProjectile_Arrow
{
	GENERATED_BODY()

public:

	AProjectile_FireArrow();

	
private:

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* FireParticle;
};
