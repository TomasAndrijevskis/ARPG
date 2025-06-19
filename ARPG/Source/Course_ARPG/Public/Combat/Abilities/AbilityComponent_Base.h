
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_Base.generated.h"

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
	FOnAbilityTimerChangedSignature OnTimerChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnAbilityStartedSignature OnAbilityStartedDelegate;
	
	UPROPERTY(BlueprintAssignable)
	FOnAbilityFinishedSignature OnAbilityFinishedDelegate;

	UFUNCTION(BlueprintCallable)
	void SetAbilityLevel(int NewLevel);

	UFUNCTION(BlueprintCallable)
	int GetAbilityLevel();
	
	FString GetDescription();

	void SetDescription(FString NewDescription);

	FString GetUpgradeRequirements();

	void SetUpgradeRequirements(FString NewRequirements);
	
	UFUNCTION(BlueprintPure)
	bool GetAbilityAvailability();

	UFUNCTION(BlueprintCallable)
	void SetAbilityAvailability(bool NewAvailability);

	float GetManaCost();

	void SetManaCost(float NewManaCost);

	float GetCooldownDuration();

	void SetCooldownDuration(float NewCooldownDuration);

	UFUNCTION(BlueprintPure)
	float GetAbilityDuration();

	void SetAbilityDuration(float NewAbilityDuration);
	
	UTexture2D* GetIcon();
	
protected:

	virtual void BeginPlay() override;

	virtual void StartAbilityTimer();

	virtual void OnAbilityTimerFinished(){};

	void StartCooldown();

	bool CanPlayMontage() const;

	void HandlePlayerActions(bool bCanDo);

	bool CheckMana();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* Icon;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* AnimMontage;

	UPROPERTY(EditAnywhere)
	int RequiredPointsToUpgrade;

	UPROPERTY(VisibleAnywhere)
	bool bIsOnCooldown = false;

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityAvailable = false;
	
	float TimerDuration;

	FTimerHandle TimerHandle;

	class AMainCharacter* CharacterRef;

	USkeletalMeshComponent* SkeletalMeshComp;


private:
	
	void StartCooldownTimer();

	UPROPERTY(EditAnywhere)
	float ManaCost;

	UPROPERTY(EditAnywhere)
	float AbilityDuration = 10.0f;

	UPROPERTY(EditAnywhere)
	float CooldownDuration = 10.0f;
	
	FString Description;

	FString UpgradeRequirements;
	
	int CurrentLevel;

	int MaxLevel;
	
};

