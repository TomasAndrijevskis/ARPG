
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_Base.generated.h"


class AMainCharacter_Base;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityTimerChanged, float);
DECLARE_MULTICAST_DELEGATE(FOnAbilityStarted);
DECLARE_MULTICAST_DELEGATE(FOnAbilityFinished);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_Base : public UActorComponent
{
	GENERATED_BODY()

public:	

	UAbilityComponent_Base();
	
	UFUNCTION()
	float GetAbilityDuration() const {return AbilityDuration;}

	void SetAbilityDuration(const float NewAbilityDuration) {AbilityDuration = NewAbilityDuration;}

	UFUNCTION(BlueprintCallable)
	virtual void StartAbility(){};

	UFUNCTION()
	virtual void FinishAbilityCast(){};

	FOnAbilityTimerChanged OnAbilityTimerChangedDelegate;
	
	FOnAbilityStarted OnAbilityStartedDelegate;
	
	FOnAbilityFinished OnAbilityFinishedDelegate;
	
protected:

	virtual void StartAbilityTimer(){};

	virtual void OnAbilityTimerFinished(){};
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY()
	FTimerHandle TimerHandle;

	UPROPERTY(VisibleAnywhere)
	float AbilityDuration = 0.f;
	
	float TimerDuration;
	
};