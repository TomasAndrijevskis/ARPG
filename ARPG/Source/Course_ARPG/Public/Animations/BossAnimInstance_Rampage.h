
#pragma once

#include "CoreMinimal.h"
#include "Animations/BossAnimInstance_Base.h"
#include "BossAnimInstance_Rampage.generated.h"


class ABoss_Rampage;

UCLASS()
class COURSE_ARPG_API UBossAnimInstance_Rampage : public UBossAnimInstance_Base
{
	GENERATED_BODY()

public:
	
	
	UFUNCTION(BlueprintCallable)
	void SetIsSmashingGround(bool bIsSmashing);
	
protected:

	UFUNCTION(BlueprintCallable)
	void HandleSmashingGround();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSmashingGround = false;
};
