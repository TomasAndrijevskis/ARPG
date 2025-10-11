
#pragma once

#include "CoreMinimal.h"
#include "Animations/AnimInstance_Base.h"
#include "AnimInstance_Rampage.generated.h"


class ABoss_Rampage;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Rampage : public UAnimInstance_Base
{
	GENERATED_BODY()

public:
	
	
	UFUNCTION(BlueprintCallable)
	void SetIsSmashingGround(const bool bIsSmashing);
	
protected:

	UFUNCTION(BlueprintCallable)
	void HandleSmashingGround() const;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSmashingGround = false;
};
