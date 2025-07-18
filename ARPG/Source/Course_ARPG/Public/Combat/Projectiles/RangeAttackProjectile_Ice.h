
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/RangeAttackProjectile.h"
#include "RangeAttackProjectile_Ice.generated.h"


class UNiagaraComponent;

UCLASS()
class COURSE_ARPG_API ARangeAttackProjectile_Ice : public AProjectile_Base
{
	GENERATED_BODY()

public:
	
	ARangeAttackProjectile_Ice();

	virtual bool IsPlayerControlledActor(AActor* OtherActor) override;

private:

	UPROPERTY(EditAnywhere)
	UNiagaraComponent* NiagaraEffect;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};
