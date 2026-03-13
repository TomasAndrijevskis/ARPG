
#pragma once

#include "CoreMinimal.h"
#include "Combat/DamageTypes.h"
#include "UObject/Interface.h"
#include "Fighter.generated.h"


UINTERFACE(MinimalAPI)
class UFighter : public UInterface
{
	GENERATED_BODY()
};


class COURSE_ARPG_API IFighter
{
	GENERATED_BODY()


public:

	virtual float GetPhysicalDamage() { return 0.0f; }

	virtual float GetMagicalDamage() const { return 0.0f; }

	virtual float GetElementalDamageModificator() const { return 0.0f; }
	
	virtual void Attack() {};

	virtual float GetAnimDuration() const { return 0.0f; };

	virtual float GetMeleeRange() const { return 0.0f; };

	virtual float GetRangeDistance() const { return 0.0f; };

	virtual bool CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const {return true;};
	
	virtual float GetAttackAnimReductionTime() const { return 0.0f; };
	
	virtual TSubclassOf<UDamageTypeBase> GetDamageType() const {return UDamageTypeBase::StaticClass();}
};
