
#pragma once

#include "CoreMinimal.h"
#include "MainCharacter_Base.h"
#include "MainCharacter_Warrior.generated.h"

class UAbilityComponent_DamageIncrease;
class UAbilityComponent_LifeStealAttack;
class UAbilityComponent_RangeAttack;
class UAbilityComponent_GetArmor;
class UTraceComponent;

UCLASS()
class COURSE_ARPG_API AMainCharacter_Warrior : public AMainCharacter_Base
{
	GENERATED_BODY()

public:

	AMainCharacter_Warrior();

	float GetDamageMultiplier();

	void SetArmor(const int32 Armor);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbilityComponent_DamageIncrease* AbilityComp_DamageIncrease;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbilityComponent_LifeStealAttack* AbilityComp_LifeStealAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbilityComponent_RangeAttack* AbilityComp_RangeAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbilityComponent_GetArmor* AbilityComp_GetArmor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTraceComponent* TraceComp;
	
protected:

	virtual void BeginPlay() override;

	virtual bool CanTakeDamage(AActor* Opponent) const override;
};
