
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "AbComp_HealArrow.generated.h"


UCLASS()
class COURSE_ARPG_API UAbComp_HealArrow : public UAbilityComponent_Player
{
	GENERATED_BODY()

public:
	
	virtual void CreateIcon() override;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;

protected:

	virtual void BeginPlay() override;
	
private:

	void CompleteAbility();
	
	UPROPERTY(EditDefaultsOnly)
	UAnimMontage* ShootMontage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AActor> ArrowClass;
};
