
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Combat/Abilities/Data/Player/AbilityPropertiesBaseData.h"
#include "SaveGame/AbilityData.h"
#include "AbilityComponent_Player.generated.h"


class UAbilitiesUpgradeData;
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

	UFUNCTION()
	virtual void CreateIcon();
	
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

	void SaveAbilityProperties(FAbilityData& Data);

	void LoadAbilityProperties(const FAbilityData& SavedData);

	void ClearAbilityData();

	UTexture2D* GetIcon() const;

	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
protected:

	virtual void BeginPlay() override;
	
	virtual void StartCooldown();

	bool CanPlayMontage() const;

	void HandlePlayerActions(const bool bCanDo);

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
