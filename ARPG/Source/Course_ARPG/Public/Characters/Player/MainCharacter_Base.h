
#pragma once

#include "CoreMinimal.h"
#include "Data/EAttributes.h"
#include "Data/EStats.h"
#include "Data/PlayerPersistentData.h"
#include "Components/StatusEffectsComponent.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter_Base.generated.h"


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
class UPlayerAnimInstance;

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
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetCurrentDamage() const override;

	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent) const override;
	
	UFUNCTION()
	virtual bool HasEnoughStamina(const float Stamina) const override;

	UFUNCTION()
	virtual bool HasEnoughMana(const float Mana) const override;
	
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

	UFUNCTION()
	void SetSkeletalMeshComponent();

	void SetCanPlayHurtAnimation(const bool bCanPlayAnim);

	bool CanPlayHurtAnimation() const;

	void InterruptHurtAnimation() const;

	void ResetAttributes();
	
	void ResetAbilities();

	void IncreaseUsedAbilityPoints(const int UsedPoints);

	void SetUsedAbilityPoints(const int NewUsedPoints);

	int GetUsedAbilityPoints() const;

	UFUNCTION()
	void ReduceStamina(const float Stamina);

	UFUNCTION()
	void ReduceMana(const float Mana);
	
	void ReduceHealth(const float Damage, AActor* Opponent);

	void Heal(const float Health);
	
	void AddXP(const float NewXP);

	bool IsPlayerLockedOnEnemy() const;

	void EndPlayerLockOnEnemy();

	void SetCanAttack(const bool bCanAttack);

	void SetCanRoll(const bool bCanRoll);

	int GetCurrentAttributePointsAmount() const;
	
	int GetCurrentAbilityPointsAmount() const;

	int GetUsedAttributePoints() const;

	void SetUsedAttributePoints(int UsedStatPoints);
	
	void LoadPersistentData(const FPlayerPersistentData& Data);

	FPlayerPersistentData SavePersistentData() const;

	void SaveData();
	
	void UpgradeAttribute(const TEnumAsByte<EAttributes> Attribute);
	
	void FillAttributeDisplayData(FString& AttributeName, int& AttributeValue, const EAttributes& AttributeToImprove) const;

	float GetPlayerMaxHealth() const;
	
	TArray<TEnumAsByte<EAttributes>>& GetAttributesArray() const;

	void CreatePauseMenu();

	UFUNCTION()
	void CreateBonfireMenu();

	void CreateResetMenu();
	
	void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef);

	void CreateAbilityIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	void CreateAbilityIconWithAmount(const float Amount, UTexture2D* Icon, UStatsComponent* StatsCompRef, const FString& Keyword);
	
	AActor* GetCurrentTargetActor() const;
	
	void CalculateStat(const EAttributes& Attribute, const EStats& Stat) const;

	void RecalculateAllStats();

	void HandleDefaultAttributes();

	void SetAttributeDescription(const EAttributes& AttributeToImprove, FString& AttributeDescription);
	
	FString GetStatNextValue(const EAttributes& Attribute) const;
	
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
	UPlayerAnimInstance* PlayerAnimInstance;

	FOnBonfireInteractionFinished FOnBonfireInteractionFinishedDelegate;

	FOnAttributePointsAmountChanged OnStatPointsAmountChangedDelegate;
	
	FOnAbilityPointsAmountChange OnAbilityPointsAmountChangeDelegate;

protected:

	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void HandleDeath();
	
private:

	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

	UFUNCTION()
	void PlayHurtAnimation();
	
	UFUNCTION()
	void CreatePlayerWidget();

	UFUNCTION()
	void HandleStatPointsAmountChange(const int NewPoints);

	UFUNCTION()
	void HandleAbilityPointsAmountChange(const int NewPoints);

	void BindDelegates();
	
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

	bool bCanPlayHurtAnim = true;

	bool bIsInFight = false;
	
	int UsedAbilityPoints = 0;
};