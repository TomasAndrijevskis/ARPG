
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Data/Abilities/AbilityPropertiesBaseData.h"
#include "Data/Abilities/AbilitySaveData.h"
#include "AbilityComponent_Player.generated.h"


class UAbilitiesUpgradeData;
DECLARE_MULTICAST_DELEGATE(FOnAbilityUnlocked);
DECLARE_MULTICAST_DELEGATE(FOnAbilityCooldownFinished);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityCooldownChanged, float);

UCLASS()
class COURSE_ARPG_API UAbilityComponent_Player : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:
	
	FOnAbilityUnlocked OnAbilityUnlockedDelegate;
	
	FOnAbilityCooldownChanged OnAbilityCooldownChangedDelegate;
	
	FOnAbilityCooldownFinished OnAbilityCooldownFinishedDelegate;

	UFUNCTION()
	virtual void CreateIcon();
	
	UFUNCTION()
	void UpgradeAbility(int AvailablePoints);

	UFUNCTION()
	int GetCurrentAbilityLevel();
	
	void SetCurrentAbilityLevel(const int32 NewLevel);

	bool IsAbilityMaxLevel();
	
	FString GetAbilityDescription();

	void SetAbilityDescription(const FString& NewDescription);

	virtual void UpdateAbilityDescription() {};

	FString GetUpgradeDescription();

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

	void SaveAbilityProperties(FAbilitySaveData& Data);

	void LoadAbilityProperties(const FAbilitySaveData& SavedData);

	void ClearAbilityData();

	UTexture2D* GetIcon() const;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
protected:

	virtual void BeginPlay() override;
	
	virtual void StartCooldown();

	bool CanPlayMontage() const;

	void HandlePlayerActions(const bool bCanAttack, const bool bCanRoll, const bool bCanMove);

	bool HasEnoughMana() const;

	virtual void StartAbilityTimer() override;

	void SetCommonAbilityProperties(const FAbilityPropertiesBaseData* Data);
	
	virtual void SetAbilityData(const int32 Level){};

	virtual void SetDefaultAbilityData() {};
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* AnimMontage;

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityAvailable = false;
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* RequirementsDataTable;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY(EditAnywhere)
	UAbilitiesUpgradeData* AbilitiesUpgradeDataAsset;
	
private:

	void StartCooldownTimer();
	
	UPROPERTY(VisibleAnywhere)
	float ManaCost = 0.f;

	UPROPERTY(VisibleAnywhere)
	float CooldownDuration = 0.f;

	UPROPERTY(VisibleAnywhere)
	int CurrentAbilityLevel = 0;

	UPROPERTY(VisibleAnywhere)
	bool bIsOnCooldown = false;

	UPROPERTY(EditDefaultsOnly)
	FString ActionKey;
	
	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;
	
	FString AbilityDescription;

	FString UpgradeDescription;
	
	bool bIsAbilityActive = false;
};
