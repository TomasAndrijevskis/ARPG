
#pragma once

#include "CoreMinimal.h"
#include "Boss.h"
#include "Boss_Rampage.generated.h"


class UAbComp_GroundSmash;

UCLASS()
class COURSE_ARPG_API ABoss_Rampage : public ABoss
{
	GENERATED_BODY()

public:
	
	ABoss_Rampage();

	void StartAbility();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbComp_GroundSmash* GroundSmashComp;

protected:

	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) override;

private:

	float GetFinalDamage(const float Damage) const;
	
	UPROPERTY(EditAnywhere)
	float DamageReductionPercent;
};
