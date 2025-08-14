
#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter_Boss.h"
#include "EC_Boss_Rampage.generated.h"


class UGroundSmashComponent;

UCLASS()
class COURSE_ARPG_API AEC_Boss_Rampage : public AEnemyCharacter_Boss
{
	GENERATED_BODY()

public:
	
	AEC_Boss_Rampage();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UGroundSmashComponent* AbilityComp_GroundSmash;
	
};
