
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AbilityComponent_Base.generated.h"

struct FAbilityData;

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
	void UpgradeAbility(int AvailablePoints);

	UFUNCTION(BlueprintCallable)
	int GetCurrentAbilityLevel();
	
	void SetCurrentAbilityLevel(int32 NewLevel);

	bool IsAbilityMaxLevel();
	
	FString GetAbilityDescription();

	void SetAbilityDescription(FString NewDescription);

	virtual void UpdateAbilityDescription() {};

	FString GetUpgradeDescription();

	void SetUpgradeDescription(FString NewDescription);

	virtual void UpdateUpgradeDescription() {};
	
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

	int GetRequiredUpgradePoints();

	virtual void UpdateAbilityProperties();

	virtual void SaveCustomProperties(FAbilityData& Data);

	virtual void LoadCustomProperties(FAbilityData& SavedData);
	
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

	UPROPERTY(VisibleAnywhere)
	bool bIsOnCooldown = false;

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityAvailable = false;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataTable* RequirementsDataTable;
	
	float TimerDuration;

	FTimerHandle TimerHandle;

	class AMainCharacter* PlayerRef;

	USkeletalMeshComponent* SkeletalMeshComp;


private:
	
	void StartCooldownTimer();

	UPROPERTY(EditAnywhere)
	float ManaCost;

	UPROPERTY(EditAnywhere)
	float AbilityDuration = 10.0f;

	UPROPERTY(EditAnywhere)
	float CooldownDuration = 10.0f;

	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 0;
	
	FString AbilityDescription;

	FString UpgradeDescription;

	
	
};

