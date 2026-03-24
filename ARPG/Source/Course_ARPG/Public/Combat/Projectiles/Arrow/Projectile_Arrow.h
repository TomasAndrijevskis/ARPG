
#pragma once

#include "CoreMinimal.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Projectile_Arrow.generated.h"

class AEnemyCharacter;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnHitEnemyDelegate, AEnemyCharacter*);
DECLARE_MULTICAST_DELEGATE(FOnHitNothingDelegate);
UCLASS()
class COURSE_ARPG_API AProjectile_Arrow : public AProjectile_Base
{
	GENERATED_BODY()

public:	

	AProjectile_Arrow();

	FOnHitEnemyDelegate OnHitEnemy;

	FOnHitNothingDelegate OnHitNothing;
	
private:

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;
};