
#pragma once

#include "CoreMinimal.h"
#include "Characters/MainCharacter_Base.h"
#include "MainCharacter_Warrior.generated.h"


UCLASS()
class COURSE_ARPG_API AMainCharacter_Warrior : public AMainCharacter_Base
{
	GENERATED_BODY()

public:

	AMainCharacter_Warrior();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAbilityComponent_DamageIncrease* AbilityComp_DamageIncrease;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAbilityComponent_LifeStealAttack* AbilityComp_LifeStealAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAbilityComponent_RangeAttack* AbilityComp_RangeAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UAbilityComponent_GetArmor* AbilityComp_GetArmor;

	
protected:

	virtual void BeginPlay() override;
	
};
