
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Interfaces/Fighter.h"
#include "MainCharacter_Base.generated.h"

enum EStats : int;
class UARPG_GameInstance;
class UPlayerWidget;
class UAbilityComponent_Base;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class COURSE_ARPG_API AMainCharacter_Base : public ACharacter, public IMainPlayer, public IFighter
{
	GENERATED_BODY()

public:

	AMainCharacter_Base();

	virtual void Tick(float DeltaTime) override;
	
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float GetCurrentDamage() override;

	virtual void EndLockonWithActor(AActor* ActorRef) override;

	virtual bool CanTakeDamage(AActor* Opponent) override;
	
	UFUNCTION()
	virtual bool HasEnoughStamina(float Stamina) override;

	UFUNCTION()
	virtual bool HasEnoughMana(float Mana) override;
	
	UFUNCTION()
	UPlayerWidget* GetPlayerWidget();

	UFUNCTION()
	TArray<UAbilityComponent_Base*> GetAbilitiesArray();

	UFUNCTION(BlueprintCallable)
	UARPG_GameInstance* GetGameInstanceRef();

	UFUNCTION()
	void CreateAbilitiesFooter();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStatsComponent* StatsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULockonComponent* LockonComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UBlockComponent* BlockComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPlayerActionsComponent* PlayerActionsComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTraceComponent* TraceComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCombatComponent* CombatComp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class ULevelingComponent* LevelComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TEnumAsByte<EStats>> ArrStats;

	
protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly)
	class UPlayerAnimInstance* PlayerAnim;

	UPROPERTY()
	USkeletalMeshComponent* SkeletalComp;


private:

	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
	
	UFUNCTION()
	void HandleDeath();

	UFUNCTION()
	void PlayHurtAnimation();
	
	UFUNCTION()
	void CreateUI();
	
	UPROPERTY()
	UPlayerWidget* PlayerWidgetRef;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* DeathAnimMontage;

	UPROPERTY(EditAnywhere)
	UAnimMontage* HurtAnimMontage;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerWidget> PlayerWidget;

	UPROPERTY()
	TArray<UAbilityComponent_Base*> ArrAbilities;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstance;
	
};
