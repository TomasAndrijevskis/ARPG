
#pragma once

#include "CoreMinimal.h"
#include "Characters/Minion.h"
#include "Minion_Fey.generated.h"


class UEnemyProjectileComponent;

UCLASS()
class COURSE_ARPG_API AMinion_Fey : public AMinion
{
	GENERATED_BODY()

public:

	AMinion_Fey();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;
};
