
#pragma once

#include "CoreMinimal.h"
#include "Characters/MainCharacter_Base.h"
#include "MainCharacter_Mage.generated.h"


UCLASS()
class COURSE_ARPG_API AMainCharacter_Mage : public AMainCharacter_Base
{
	GENERATED_BODY()

public:
	
	AMainCharacter_Mage();

protected:

	virtual void BeginPlay() override;
};
