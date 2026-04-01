
#pragma once

#include "CoreMinimal.h"
#include "Data/EAttributes.h"
#include "Data/EStats.h"
#include "Components/StatusEffectsComponent.h"
#include "Data/PersistentData/PlayerAdditionalStatsData.h"
#include "Data/PersistentData/PlayerLevelData.h"
#include "Data/PersistentData/PlayerMainStatsData.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter_Base.generated.h"


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

DECLARE_MULTICAST_DELEGATE(FOnBonfireInteractionFinished);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributePointsAmountChanged, const int);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAbilityPointsAmountChange, const int);

UCLASS(Blueprintable)
class COURSE_ARPG_API AMainCharacter_Base : public ACharacter, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

public:

	AMainCharacter_Base();

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual float GetPhysicalDamage() override;

	virtual float GetMagicalDamage() const override;
	
	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const override;
	
	UFUNCTION()
	virtual bool HasEnoughStamina(float Stamina) const override;

	UFUNCTION()
	virtual bool HasEnoughMana(float Mana) const override;
	
	UFUNCTION()
	UPlayerWidget* GetPlayerWidget() const;

	UFUNCTION()
	TArray<UAbilityComponent_Player*>& GetAbilitiesArray();

	UFUNCTION()
	void AddToAbilitiesArray(UAbilityComponent_Player* NewAbility);
	
	UFUNCTION()
	void CreateAbilitiesFooterPanel();

	UFUNCTION()
	USkeletalMeshComponent* GetSkeletalMeshComponent() const;

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
	
	void AddExperience(float NewExperience);

	bool IsPlayerLockedOnEnemy() const;

	void EndPlayerLockOnEnemy();

	void SetCanAttack(bool bCanAttack);

	void SetCanRoll(bool bCanRoll);

	int GetCurrentAttributePointsAmount() const;
	
	int GetCurrentAbilityPointsAmount() const;

	int GetUsedAttributePoints() const;

	void SetUsedAttributePoints(int UsedStatPoints) const;

	void LoadAttributeData(TMap<TEnumAsByte<EAttributes>, int32> Data);
	
	TMap<TEnumAsByte<EAttributes>, int32> SaveAttributeData() const;

	void LoadLevelData(FPlayerLevelData Data);
	
	FPlayerLevelData SaveLevelData() const;
	
	void SaveAllExceptPosition();
	
	void UpgradeAttribute(const TEnumAsByte<EAttributes> Attribute);
	
	void FillAttributeDisplayData(FString& AttributeName, int& AttributeValue, EAttributes AttributeToImprove) const;

	float GetPlayerMaxHealth() const;
	
	TArray<TEnumAsByte<EAttributes>>& GetAttributesArray() const;

	void CreatePauseMenu();

	UFUNCTION()
	void CreateBonfireMenu();

	void CreateEnchantmentMenu();
	
	void CreateResetMenu();
	
	void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef);

	void CreateAbilityIconWithTimer(float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	void CreateAbilityIconWithAmount(float Amount, UTexture2D* Icon, UStatsComponent* StatsCompRef, const FString& Keyword);
	
	AActor* GetCurrentTargetActor() const;
	
	void CalculateStat(EAttributes Attribute, EStats Stat) const;

	void RecalculateAllStats();

	void RecalculateAttributeRelatedStats(EAttributes Attribute);
	
	void HandleDefaultAttributes();

	void BuildAttributeDescription(EAttributes AttributeToImprove, FString& AttributeDescription);
	
	void FillLevelDisplayData(FPlayerLevelData& Data);

	void FillMainStatsDisplayData(FPlayerMainStatsData& Data) const;

	void FillAdditionalStatsDisplayData(FPlayerAdditionalStatsData& Data) const;

	float GetAbilityPowerPercent() const;

	virtual void HandleEffectChange(EEffects NewEffect){};

	virtual void HandleEffectChange(TSubclassOf<UDamageTypeBase> NewEnchantmentType){};

	EEffects GetCurrentEnchantmentEffect() const;
	
	TSubclassOf<UDamageTypeBase> GetEnchantmentDamageType() const;
	
	virtual float GetElementalDamageModificator() const override;

	FVector GetTargetLocation(float DefaultSpawnDistance);
	
	virtual void HandleResetAttack();

	virtual void SpawnProjectile(){};

	virtual TSubclassOf<UDamageTypeBase> GetDamageType() const override;

	void SetCanMove(bool CanMove);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UPlayerActionsComponent* PlayerActionsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UCombatComponent_Base* CombatComp;

	UPROPERTY(blueprintReadWrite, EditAnywhere)
	UInventoryComponent* InventoryComp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ULevelingComponent* LevelComp;

	UPROPERTY(EditAnywhere)
	UAttributesComponent* AttributesComp;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UFireEffectManager* FireStatusEffectManager;

	UPROPERTY(EditAnywhere)
	UIceEffectManager* IceStatusEffectManager;

	UPROPERTY(EditAnywhere)
	UPoisonEffectManager* PoisonStatusEffectManager;
	
	UPROPERTY(BlueprintReadOnly)
	UAnimInstance_Player* PlayerAnimInstance;

	FOnBonfireInteractionFinished FOnBonfireInteractionFinishedDelegate;

	FOnAttributePointsAmountChanged OnStatPointsAmountChangedDelegate;
	
	FOnAbilityPointsAmountChange OnAbilityPointsAmountChangeDelegate;

protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();

	UFUNCTION()
	virtual void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);

	virtual void BindAbilityDelegates(){};
	
	EEffects CurrentEffect;

	float GetResistanceStatValue(const UDamageType* DamageType) const;
	
	UPROPERTY()
	TSubclassOf<UDamageTypeBase> CurrentEnchantmentDamageType;

	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;
	
private:

	UFUNCTION()
	void PlayHurtAnimation();
	
	UFUNCTION()
	void CreatePlayerWidget();

	UFUNCTION()
	void HandleStatPointsAmountChange(const int NewPoints);

	UFUNCTION()
	void HandleAbilityPointsAmountChange(const int NewPoints);

	void BindDelegates();

	UFUNCTION(BlueprintCallable)
	void HandleSideMovementInput(float ScaleValue);

	UFUNCTION(BlueprintCallable)
	void HandleForwardMovementInput(float ScaleValue);
	
	UPROPERTY()
	UPlayerWidget* PlayerWidgetRef;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* HurtAnimMontage;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerWidget> PlayerWidgetClass;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstance;
	
	TArray<UAbilityComponent_Player*> ArrAbilities;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalMeshComp;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTypeBase> BaseAttackDamageType;
	
	bool bCanPlayHurtAnim = true;

	bool bIsInFight = false;
	
	int UsedAbilityPoints = 0;

	bool bCanMove = true;
};