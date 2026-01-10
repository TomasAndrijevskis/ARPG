
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_Player.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityUnlockedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityCooldownFinishedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityCooldownChangedSignature, float, TimeLeft);

UCLASS()
class COURSE_ARPG_API UAbilityComponent_Player : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:
	
	UPROPERTY()
	FOnAbilityUnlockedSignature OnAbilityUnlockedDelegate;

	UPROPERTY()
	FOnAbilityCooldownChangedSignature OnAbilityCooldownChangedDelegate;
	
	UPROPERTY()
	FOnAbilityCooldownFinishedSignature OnAbilityCooldownFinishedDelegate;

	virtual void CreateIcon() override;
	
	UFUNCTION()
	void UpgradeAbility(int AvailablePoints);

	UFUNCTION()
	int GetCurrentAbilityLevel();
	
	void SetCurrentAbilityLevel(const int32 NewLevel);

	bool IsAbilityMaxLevel();
	
	FString GetAbilityDescription() const;

	void SetAbilityDescription(const FString& NewDescription);

	virtual void UpdateAbilityDescription() {};

	FString GetUpgradeDescription() const;

	void SetUpgradeDescription(const FString& NewDescription);

	virtual void UpdateUpgradeDescription() {};
	
	UFUNCTION()
	bool IsAbilityAvailable() const;

	UFUNCTION()
	void SetAbilityAvailability(const bool NewAvailability);

	float GetManaCost() const;

	void SetManaCost(const float NewManaCost);

	float GetCooldownDuration() const;

	void SetCooldownDuration(const float NewCooldownDuration);

	int GetRequiredUpgradePoints();

	UFUNCTION()
	FString GetActionKey() const;

	bool IsOnCooldown() const;

	UFUNCTION()
	bool IsAbilityActive() const;

	void SetAbilityActive(const bool NewIsActive);
	
	virtual void UpdateAbilityProperties();

	virtual void SaveCustomProperties(FAbilityData& Data);

	virtual void LoadCustomProperties(FAbilityData& SavedData);
	
protected:

	virtual void BeginPlay() override;
	
	virtual void StartCooldown();

	bool CanPlayMontage() const;

	void HandlePlayerActions(const bool bCanDo);

	bool IsEnoughMana() const;

	virtual void StartAbilityTimer() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* AnimMontage;

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityAvailable = false;
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* RequirementsDataTable;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

private:

	void StartCooldownTimer();

	UPROPERTY(EditAnywhere)
	float ManaCost;

	UPROPERTY(EditAnywhere)
	float CooldownDuration = 10.0f;

	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 0;

	UPROPERTY(VisibleAnywhere)
	bool bIsOnCooldown = false;

	UPROPERTY(EditDefaultsOnly)
	FString ActionKey;
	
	FString AbilityDescription;

	FString UpgradeDescription;
	
	bool bIsAbilityActive = false;
};
