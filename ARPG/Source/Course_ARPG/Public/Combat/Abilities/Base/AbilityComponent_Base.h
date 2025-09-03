
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_Base.generated.h"

struct FAbilityData;
class AMainCharacter_Base;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityTimerChangedSignature, float, TimeLeft);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityStartedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityFinishedSignature);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAbilityComponent_Base : public UActorComponent
{
	GENERATED_BODY()

public:	

	UAbilityComponent_Base();
	
	UPROPERTY(BlueprintAssignable)
	FOnAbilityTimerChangedSignature OnAbilityTimerChangedDelegate;//both

	UPROPERTY(BlueprintAssignable)
	FOnAbilityStartedSignature OnAbilityStartedDelegate;//both
	
	UPROPERTY(BlueprintAssignable)
	FOnAbilityFinishedSignature OnAbilityFinishedDelegate;//both
	
	UFUNCTION()
	float GetAbilityDuration();//both

	void SetAbilityDuration(float NewAbilityDuration);//both
	
	UTexture2D* GetIcon();//both
	
	UFUNCTION()
	virtual void CreateIcon(){};//both
	
protected:

	virtual void StartAbilityTimer(){};//both

	virtual void OnAbilityTimerFinished(){};//both

	UFUNCTION(BlueprintCallable)
	virtual void StartAbility(){};//both

	UFUNCTION()
	virtual void FinishAbilityCast(){};//both
	
	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;//both

	UPROPERTY()
	FTimerHandle TimerHandle;//both

	float TimerDuration;//both

private:
	
	UPROPERTY(EditAnywhere)
	float AbilityDuration = 10.0f;//both

	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;//both
};

