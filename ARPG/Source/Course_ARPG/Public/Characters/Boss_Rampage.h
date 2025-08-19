
#pragma once

#include "CoreMinimal.h"
#include "Characters/Boss.h"
#include "Boss_Rampage.generated.h"


class UGroundSmashComponent;

UCLASS()
class COURSE_ARPG_API ABoss_Rampage : public ABoss
{
	GENERATED_BODY()

public:
	
	ABoss_Rampage();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UGroundSmashComponent* AbilityComp_GroundSmash;

protected:

	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

private:

	float GetFinalDamage(float Damage);
	
	UPROPERTY(EditAnywhere)
	float DamageReductionPercent;
};
