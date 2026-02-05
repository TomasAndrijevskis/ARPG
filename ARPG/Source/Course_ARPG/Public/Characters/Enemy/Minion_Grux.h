
#pragma once

#include "CoreMinimal.h"
#include "Minion.h"
#include "Minion_Grux.generated.h"


UCLASS()
class COURSE_ARPG_API AMinion_Grux : public AMinion
{
	GENERATED_BODY()

public:

	AMinion_Grux();

	virtual TSubclassOf<UDamageType> GetDamageType() const override;
};
