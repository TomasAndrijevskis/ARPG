
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Data/Abilities/AbilityPropertiesBaseData.h"
#include "Data/Abilities/AbilitySaveData.h"
#include "Engine/DataTable.h"
#include "AbilityComponent_Player.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnAbilityUnlocked);
DECLARE_MULTICAST_DELEGATE(FOnAbilityCooldownFinished);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityCooldownChanged, float);

UCLASS()
class COURSE_ARPG_API UAbilityComponent_Player : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	void UpgradeAbility(int AvailablePoints);

	UFUNCTION()
	int GetCurrentAbilityLevel() const{return CurrentAbilityLevel;}
	
	void SetCurrentAbilityLevel(const int32 NewLevel) {CurrentAbilityLevel = NewLevel;}

	bool IsAbilityMaxLevel();
	
	FString GetAbilityDescription();

	void SetAbilityDescription(const FString& NewDescription) {AbilityDescription = NewDescription;}

	virtual void UpdateAbilityDescription() {};

	FString GetUpgradeDescription();

	void SetUpgradeDescription(const FString& NewDescription) 	{UpgradeDescription = NewDescription;}

	virtual void UpdateUpgradeDescription() {};

	UFUNCTION()
	bool IsAbilityAvailable() const{return bIsAbilityAvailable;}

	UFUNCTION()
	void SetAbilityAvailability(const bool NewAvailability) {bIsAbilityAvailable = NewAvailability;}

	float GetManaCost() const{return ManaCost;}

	void SetManaCost(const float NewManaCost) {ManaCost = NewManaCost;}

	float GetCooldownDuration() const{return CooldownDuration;}

	void SetCooldownDuration(const float NewCooldownDuration) {CooldownDuration = NewCooldownDuration;}

	UFUNCTION()
	FString GetActionKey() const{return ActionKey;}

	bool IsOnCooldown() const{return bIsOnCooldown;}

	UFUNCTION()
	bool IsAbilityActive() const{return bIsAbilityActive;}

	void SetAbilityActive(const bool NewIsActive) {bIsAbilityActive = NewIsActive;}
	
	int GetRequiredUpgradePoints();

	void SaveAbilityProperties(FAbilitySaveData& Data);

	void LoadAbilityProperties(const FAbilitySaveData& SavedData);

	void ClearAbilityData();

	UFUNCTION()
	virtual void CreateIcon();
	
	UTexture2D* GetIcon() const;

	FTransform GetSpawnTransform(float DefaultSpawnDistance) const;

	FOnAbilityUnlocked OnAbilityUnlockedDelegate;
	
	FOnAbilityCooldownChanged OnAbilityCooldownChangedDelegate;
	
	FOnAbilityCooldownFinished OnAbilityCooldownFinishedDelegate;
	
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

	virtual void FinishAbilityCast() override;
	
	virtual void StartAbility() override;

	bool CanUseAbility() const;

	template <typename T>
	const T* GetAbilityData(int32 Level) const
	{
		if (!PropertiesDataTable) return nullptr;
		const FName RowName = FName(*FString::FromInt(Level));
		return PropertiesDataTable->FindRow<T>(RowName, TEXT("GetAbilityData"));
	}
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UAnimMontage> AnimMontage;

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityAvailable = false;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UDataTable> RequirementsDataTable;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UDataTable> PropertiesDataTable;
	
	UPROPERTY()
	TObjectPtr<AMainCharacter_Base> PlayerRef;

	UPROPERTY(VisibleAnywhere)
	float ManaCost = 0.f;

	UPROPERTY(VisibleAnywhere)
	float CooldownDuration = 0.f;

	UPROPERTY(VisibleAnywhere)
	int CurrentAbilityLevel = 1;

	UPROPERTY(VisibleAnywhere)
	bool bIsOnCooldown = false;

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityActive = false;
	
private:

	void StartCooldownTimer();
	
	UPROPERTY(EditDefaultsOnly)
	FString ActionKey;
	
	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;
	
	FString AbilityDescription;

	FString UpgradeDescription;
};

