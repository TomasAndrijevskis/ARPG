
#pragma once

#include "CoreMinimal.h"
#include "Characters/ARPG_Character_Base.h"
#include "Data/EAttributes.h"
#include "Data/EStats.h"
#include "Components/StatusEffectsComponent.h"
#include "Data/PersistentData/PlayerLevelData.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter_Base.generated.h"


class UEnchantmentComponent;
class UPlayerCharacterConfiguration;
class APickableItem_Base;
class UInventoryComponent;
class UAttributesComponent;
class UPoisonEffectManager;
class UIceEffectManager;
class UFireEffectManager;
class UStaminaStatsComponent;
class UHealthStatsComponent;
class UAbilityComponent_Player;
class UARPG_GameInstance;
class UPlayerWidget;
class USkeletalMeshComponent;
class UStatsComponent;
class ULockonComponent;
class UBlockComponent;
class UPlayerActionsComponent;
class UCombatComponent_Base;
class ULevelingComponent;
class UStatusEffectsComponent;
class UAnimInstance_Player;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributePointsAmountChanged, const int);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityPointsAmountChange, const int);

UCLASS(Blueprintable)
class COURSE_ARPG_API AMainCharacter_Base : public AARPG_Character_Base, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

public:

	AMainCharacter_Base();

	virtual void Tick(float DeltaTime) override;
	
	virtual float GetPhysicalDamage() override;

	virtual float GetMagicalDamage() const override;
	
	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const override;
	
	UFUNCTION()
	virtual bool HasEnoughStamina(float Stamina) const override;

	UFUNCTION()
	virtual bool HasEnoughMana(float Mana) const override;

	UFUNCTION()
	TArray<UAbilityComponent_Player*>& GetAbilitiesArray();

	UFUNCTION()
	void AddToAbilitiesArray(UAbilityComponent_Player* NewAbility);
	
	void SetCanPlayHurtAnimation(bool bCanPlayAnim);

	bool CanPlayHurtAnimation() const;

	void InterruptHurtAnimation() const;

	void ResetAttributes();
	
	void ResetAbilities();

	void IncreaseUsedAbilityPoints(int UsedPoints);

	void SetUsedAbilityPoints(int NewUsedPoints);

	int GetUsedAbilityPoints() const;

	UFUNCTION()
	void ReduceStamina(float Stamina);
	
	UFUNCTION()
	void ReduceMana(float Mana);
	
	void ReduceHealth(float Damage, AActor* Opponent);

	void HealPlayer(float Health);

	bool IsPlayerLockedOnEnemy() const;

	void EndPlayerLockOnEnemy();

	void SetCanAttack(bool bCanAttack);

	void SetCanRoll(bool bCanRoll);

	int GetCurrentAttributePointsAmount() const;
	
	int GetCurrentAbilityPointsAmount() const;

	int GetUsedAttributePoints() const;

	void SetUsedAttributePoints(int UsedStatPoints) const;

	void LoadAttributeData(TMap<EAttributes, int32> Data);
	
	TMap<EAttributes, int32> SaveAttributeData() const;

	void LoadLevelData(FPlayerLevelData Data);
	
	FPlayerLevelData SaveLevelData() const;
	
	void UpgradeAttribute(const EAttributes Attribute);
	
	void FillAttributeDisplayData(FString& AttributeName, int& AttributeValue, EAttributes AttributeToImprove) const;

	float GetPlayerMaxHealth() const;
	
	TArray<EAttributes>& GetAttributesArray() const;
	
	/*void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef);

	void CreateAbilityIconWithTimer(float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	void CreateAbilityIconWithAmount(float Amount, UTexture2D* Icon, UStatsComponent* StatsCompRef, const FString& Keyword);
	*/
	AActor* GetCurrentTargetActor() const;
	
	void CalculateStat(EAttributes Attribute, EStats Stat) const;

	void RecalculateAllStats();

	void RecalculateAttributeRelatedStats(EAttributes Attribute);
	
	void HandleDefaultAttributes();

	void BuildAttributeDescription(EAttributes AttributeToImprove, FString& AttributeDescription);
	
	float GetAbilityPowerPercent() const;
	
	virtual float GetElementalDamageModificator() const override;

	FVector GetTargetLocation(float DefaultSpawnDistance);

	virtual void SpawnProjectile(){};

	virtual TSubclassOf<UDamageTypeBase> GetDamageType() const override;

	void SetCanMove(bool CanMove);

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPlayerActionsComponent* PlayerActionsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UCombatComponent_Base* CombatComp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULevelingComponent* LevelComp;

	UPROPERTY(EditAnywhere)
	UAttributesComponent* AttributesComp;
	
	UPROPERTY(EditAnywhere)
	UEnchantmentComponent* EnchantmentComp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UFireEffectManager* FireStatusEffectManager;

	UPROPERTY(EditAnywhere)
	UIceEffectManager* IceStatusEffectManager;

	UPROPERTY(EditAnywhere)
	UPoisonEffectManager* PoisonStatusEffectManager;
	
	UPROPERTY(BlueprintReadOnly)
	UAnimInstance_Player* PlayerAnimInstance;

	FOnAttributePointsAmountChanged OnStatPointsAmountChangedDelegate;
	
	FOnAbilityPointsAmountChange OnAbilityPointsAmountChangeDelegate;

protected:

	virtual void BeginPlay() override;

	virtual void LoadConfigData() override;
	
	UFUNCTION()
	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

	virtual void BindAbilityDelegates(){};

	float GetResistanceStatValue(const UDamageType* DamageType) const;
	
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStatusEffectsVisualData> StatusEffectsVisualDataAsset;

private:

	UFUNCTION()
	void PlayHurtAnimation();

	UFUNCTION()
	void HandleStatPointsAmountChange(const int NewPoints);

	UFUNCTION()
	void HandleAbilityPointsAmountChange(const int NewPoints);

	void BindDelegates();

	UFUNCTION(BlueprintCallable)
	void HandleSideMovementInput(float ScaleValue);

	UFUNCTION(BlueprintCallable)
	void HandleForwardMovementInput(float ScaleValue);

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAnimMontage> HurtAnimMontage;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstance;

	UPROPERTY()
	TArray<UAbilityComponent_Player*> ArrAbilities;

	UPROPERTY(EditDefaultsOnly)
	UPlayerCharacterConfiguration* CharacterData;
	
	bool bCanPlayHurtAnim = true;

	bool bIsInFight = false;
	
	int UsedAbilityPoints = 0;

	bool bCanMove = true;
};