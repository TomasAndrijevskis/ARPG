
#pragma once

#include "CoreMinimal.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "MainCharacter_Archer.generated.h"


UCLASS()
class COURSE_ARPG_API AMainCharacter_Archer : public AMainCharacter_Base
{
	GENERATED_BODY()

public:

	AMainCharacter_Archer();
	
	virtual void HandleEffectChange(EEffects NewEffect) override;

	virtual float GetPhysicalDamage() override;

	virtual TSubclassOf<UDamageType> GetDamageType() const override;

protected:

	virtual void BeginPlay() override;
	
};
