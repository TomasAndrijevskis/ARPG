
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Projectile_Ice.generated.h"


class UNiagaraComponent;

UCLASS()
class COURSE_ARPG_API AProjectile_Ice : public AProjectile_Base
{
	GENERATED_BODY()

public:
	
	AProjectile_Ice();

protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
	
private:

	UPROPERTY(EditAnywhere)
	UNiagaraComponent* NiagaraEffect;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};
