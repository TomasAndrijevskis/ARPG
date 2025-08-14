
#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Boss.h"
#include "EC_Boss_Grux.generated.h"


UCLASS()
class COURSE_ARPG_API AEC_Boss_Grux : public AEnemyCharacter_Boss
{
	GENERATED_BODY()

public:
	
	AEC_Boss_Grux();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;
};
