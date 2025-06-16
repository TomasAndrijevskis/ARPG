

#pragma once

#include "CoreMinimal.h"
#include "Projectile_Base.h"
#include "GameFramework/Actor.h"
#include "RangeAttackProjectile.generated.h"

UCLASS()
class COURSE_ARPG_API ARangeAttackProjectile : public AProjectile_Base
{
	GENERATED_BODY()
	
public:	

	ARangeAttackProjectile();

	virtual bool IsPlayerControlledActor(AActor* OtherActor) override;

	
};
