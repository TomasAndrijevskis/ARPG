
#pragma once

#include "CoreMinimal.h"
#include "Projectile_Elemental.h"
#include "Projectile_Ice.generated.h"


class UNiagaraComponent;

UCLASS()
class COURSE_ARPG_API AProjectile_Ice : public AProjectile_Elemental
{
	GENERATED_BODY()

public:
	
	AProjectile_Ice();
	
private:

	UPROPERTY(EditAnywhere)
	UNiagaraComponent* NiagaraEffect;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};
