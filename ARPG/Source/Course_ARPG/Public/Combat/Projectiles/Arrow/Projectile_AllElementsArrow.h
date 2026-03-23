
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Projectile_AllElementsArrow.generated.h"

UCLASS()
class COURSE_ARPG_API AProjectile_AllElementsArrow : public AProjectile_Arrow
{
	GENERATED_BODY()

public:

	AProjectile_AllElementsArrow();

private:
	
	UPROPERTY(EditAnywhere)
	USceneComponent* EffectSpawnComponent;

	//FRotator GetRandomRotation();
	
	UPROPERTY(EditAnywhere)
	TArray<UParticleSystem*> Particles;

	UPROPERTY(EditDefaultsOnly)
	FVector EffectSize;
	
	UPROPERTY(EditDefaultsOnly)
	FName ComponentName;
};
