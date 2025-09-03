
#pragma once

#include "CoreMinimal.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "AbilityComponent_Player.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityUnlockedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAbilityCooldownFinishedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityCooldownChangedSignature, float, TimeLeft);

UCLASS()
class COURSE_ARPG_API UAbilityComponent_Player : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:

	UAbilityComponent_Player(){};

	UPROPERTY(BlueprintAssignable)
	FOnAbilityUnlockedSignature OnAbilityUnlockedDelegate;//player

	UPROPERTY(BlueprintAssignable)
	FOnAbilityCooldownChangedSignature OnAbilityCooldownChangedDelegate;//player
	
	UPROPERTY(BlueprintAssignable)
	FOnAbilityCooldownFinishedSignature OnAbilityCooldownFinishedDelegate;//player

	virtual void CreateIcon() override;
	
	UFUNCTION(BlueprintCallable)
	void UpgradeAbility(int AvailablePoints);//player

	UFUNCTION(BlueprintCallable)
	int GetCurrentAbilityLevel();//player
	
	void SetCurrentAbilityLevel(int32 NewLevel);//player

	bool IsAbilityMaxLevel();//player
	
	FString GetAbilityDescription();//player

	void SetAbilityDescription(FString NewDescription);//player

	virtual void UpdateAbilityDescription() {};//player

	FString GetUpgradeDescription();//player

	void SetUpgradeDescription(FString NewDescription);//player

	virtual void UpdateUpgradeDescription() {};//player
	
	UFUNCTION(BlueprintPure)
	bool IsAbilityAvailable();//player

	UFUNCTION(BlueprintCallable)
	void SetAbilityAvailability(bool NewAvailability);//player

	float GetManaCost();//player

	void SetManaCost(float NewManaCost);//player

	float GetCooldownDuration();//player

	void SetCooldownDuration(float NewCooldownDuration);//player

	int GetRequiredUpgradePoints();//player

	UFUNCTION()
	FString GetActionKey();//player

	bool IsOnCooldown();//player

	UFUNCTION()
	bool IsAbilityActive();//player

	void SetAbilityActive(bool NewIsActive);//player
	
	virtual void UpdateAbilityProperties();//player

	virtual void SaveCustomProperties(FAbilityData& Data);//player

	virtual void LoadCustomProperties(FAbilityData& SavedData);//player

	
protected:

	virtual void BeginPlay() override;//both
	
	virtual void StartCooldown();//player

	bool CanPlayMontage() const; //player

	void HandlePlayerActions(bool bCanDo);//player

	bool IsEnoughMana();//player

	virtual void StartAbilityTimer() override;
	
	virtual void StartAbility() override;

	virtual void FinishAbilityCast() override;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* AnimMontage;//player

	UPROPERTY(VisibleAnywhere)
	bool bIsAbilityAvailable = false;//player
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UDataTable* RequirementsDataTable;//player

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;//player

	
private:

	void StartCooldownTimer();//player

	UPROPERTY(EditAnywhere)
	float ManaCost;//player

	UPROPERTY(EditAnywhere)
	float CooldownDuration = 10.0f;//player

	UPROPERTY(VisibleAnywhere)
	int CurrentLevel = 0;//player

	UPROPERTY(VisibleAnywhere)
	bool bIsOnCooldown = false;//player

	UPROPERTY(EditDefaultsOnly)
	FString ActionKey;//player
	
	FString AbilityDescription;//player

	FString UpgradeDescription;//player
	
	bool bIsAbilityActive = false;//player
	
};
