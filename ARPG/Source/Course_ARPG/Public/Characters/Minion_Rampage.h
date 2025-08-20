
#pragma once

#include "CoreMinimal.h"
#include "Characters/Minion.h"
#include "Minion_Rampage.generated.h"


class UGroundSmashComponent;

UCLASS()
class COURSE_ARPG_API AMinion_Rampage : public AMinion
{
	GENERATED_BODY()

public:
	
	AMinion_Rampage();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UGroundSmashComponent* GroundSmashComp;
};
