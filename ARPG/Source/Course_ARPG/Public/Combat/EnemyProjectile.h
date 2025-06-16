

#pragma once

#include "CoreMinimal.h"
#include "Projectile_Base.h"
#include "GameFramework/Actor.h"
#include "EnemyProjectile.generated.h"

UCLASS()
class COURSE_ARPG_API AEnemyProjectile : public AProjectile_Base
{
	GENERATED_BODY()
	
public:	

	AEnemyProjectile();

	virtual bool IsPlayerControlledActor(AActor* OtherActor) override;
	
};
