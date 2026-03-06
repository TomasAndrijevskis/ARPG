
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Projectile_Arrow.generated.h"


UCLASS()
class COURSE_ARPG_API AProjectile_Arrow : public AProjectile_Base
{
	GENERATED_BODY()

public:	

	AProjectile_Arrow();
	
protected:

	virtual TSubclassOf<UDamageType> GetDamageType() const override;

private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};