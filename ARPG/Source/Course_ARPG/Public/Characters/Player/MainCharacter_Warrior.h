
#pragma once

#include "CoreMinimal.h"
#include "MainCharacter_Base.h"
#include "MainCharacter_Warrior.generated.h"

class UAbComp_DamageIncrease;
class UAbComp_LifeStealAttack;
class UAbComp_RangeAttack;
class UAbComp_GetArmor;
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
	UAbComp_DamageIncrease* AbilityComp_DamageIncrease;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbComp_LifeStealAttack* AbilityComp_LifeStealAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbComp_RangeAttack* AbilityComp_RangeAttack;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbComp_GetArmor* AbilityComp_GetArmor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTraceComponent* TraceComp;
	
protected:

	virtual void BeginPlay() override;

	virtual bool CanTakeDamage(AActor* Opponent) const override;
};
