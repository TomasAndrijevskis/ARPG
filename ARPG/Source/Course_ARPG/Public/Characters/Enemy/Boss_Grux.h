
#pragma once

#include "CoreMinimal.h"
#include "Boss.h"
#include "Boss_Grux.generated.h"


UCLASS()
class COURSE_ARPG_API ABoss_Grux : public ABoss
{
	GENERATED_BODY()

public:
	
	ABoss_Grux();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UEnemyProjectileComponent* ProjectileComp;
};
