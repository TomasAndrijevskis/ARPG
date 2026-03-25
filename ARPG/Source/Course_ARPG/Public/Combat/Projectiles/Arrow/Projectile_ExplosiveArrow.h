
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Projectile_ExplosiveArrow.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_ExplosiveArrow : public AProjectile_Arrow
{
	GENERATED_BODY()
public:

	AProjectile_ExplosiveArrow();
	
protected:

	virtual void HandleDestruction() override;

	virtual void HandleBeginOverlap(AActor* OtherActor) override;
	
private:

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particle;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ExplosionRangeClassRef;
};
