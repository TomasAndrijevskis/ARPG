
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

	virtual void ActivateSecondPhase() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbComp_GroundSmash* GroundSmashComp;
};
