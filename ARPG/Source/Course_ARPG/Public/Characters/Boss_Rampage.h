
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
	UGroundSmashComponent* GroundSmashComp;

protected:

	virtual void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser) override;

private:

	float GetFinalDamage(const float Damage) const;
	
	UPROPERTY(EditAnywhere)
	float DamageReductionPercent;
};
