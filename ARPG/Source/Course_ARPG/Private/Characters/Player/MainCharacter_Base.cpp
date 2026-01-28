
#include "Characters/Player/MainCharacter_Base.h"
#include "Animations/PlayerAnimInstance.h"
#include "Characters/Data/EStats.h"
#include "Characters/Data/PlayerPersistentStats.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/AttributesComponent.h"
#include "Components/CombatComponent_Base.h"
#include "Components/LevelingComponent.h"
#include "Components/LockonComponent.h"
#include "Components/PlayerActionsComponent.h"
#include "Components/StatsComponent.h"
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/PlayerWidget.h"


AMainCharacter_Base::AMainCharacter_Base()
{
 	PrimaryActorTick.bCanEverTick = true;
	
	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	LockonComp = CreateDefaultSubobject<ULockonComponent>(TEXT("Lockon Component"));
	PlayerActionsComp = CreateDefaultSubobject<UPlayerActionsComponent>(TEXT("Player Actions Component"));
	LevelComp = CreateDefaultSubobject<ULevelingComponent>(TEXT("Leveling Component"));
	AttributesComp = CreateDefaultSubobject<UAttributesComponent>(TEXT("Attributes Component"));
	FireStatusEffectManager = CreateDefaultSubobject<UFireEffectManager>(TEXT("Fire Effects Manager"));
	IceStatusEffectManager = CreateDefaultSubobject<UIceEffectManager>(TEXT("Ice Effects Manager"));
	PoisonStatusEffectManager = CreateDefaultSubobject<UPoisonEffectManager>(TEXT("Poison Effects Manager"));
	
	ArrStats.Add(EStats::MaxHealth);
	ArrStats.Add(EStats::MaxStamina);
	ArrStats.Add(EStats::PhysicalStrength);
	ArrStats.Add(EStats::MagicalStrength);
	ArrStats.Add(EStats::MaxMana);
}


void AMainCharacter_Base::BeginPlay()
{
	Super::BeginPlay();
	PlayerAnimInstance = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	SetSkeletalMeshComponent();
	CreatePlayerWidget();
	BindDelegates();
}


void AMainCharacter_Base::BindDelegates()
{
	LockonComp->OnUpdatedTargetDelegate.AddUObject(PlayerAnimInstance, &UPlayerAnimInstance::HandleUpdatedTarget);
	PlayerActionsComp->OnSprintDelegate.AddUObject(this, &ThisClass::ReduceStamina);
	PlayerActionsComp->OnRollDelegate.AddUObject(this, &ThisClass::ReduceStamina);
	StatsComp->OnHealthPercentUpdateDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetHealth);
	StatsComp->OnManaPercentUpdateDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetMana);
	StatsComp->OnStaminaPercentUpdateDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetStamina);
	StatsComp->OnZeroHealthDelegate.AddUObject(this, &ThisClass::HandleDeath);
	StatsComp->OnStatUpdateDelegate.AddUObject(GameInstance, &UARPG_GameInstance::SaveStats);
	LevelComp->OnXpUpdatedDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetXP);
	LevelComp->OnLevelUpdatedDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetLevel);
	LevelComp->OnNewLevelDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::ShowLevelUpAnimation);
	LevelComp->OnStatPointsUpdateDelegate.AddUObject(this, &ThisClass::HandleStatPointsAmountChange);
	LevelComp->OnAbilityPointsUpdateDelegate.AddUObject(this, &ThisClass::HandleAbilityPointsAmountChange);
	FOnBonfireInteractionFinishedDelegate.AddUObject(StatsComp, &UStatsComponent::RestoreStats);
	OnTakeAnyDamage.AddDynamic(this, &ThisClass::ReceiveDamage);
}


void AMainCharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	StatsComp->OnRegenStaminaRequestDelegate.Broadcast();
	StatsComp->OnRegenManaRequestDelegate.Broadcast();
}


void AMainCharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AMainCharacter_Base::CreatePlayerWidget()
{
	if (!PlayerWidgetClass) return;
	PlayerWidgetRef = Cast<UPlayerWidget>(CreateWidget(GetWorld()->GetFirstPlayerController(), PlayerWidgetClass));
	if (!PlayerWidgetRef) return;
	PlayerWidgetRef->AddToViewport();
	PlayerWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
	PlayerWidgetRef->SetStamina(StatsComp->GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
	PlayerWidgetRef->SetMana(StatsComp->GetStatPercentage(EStats::Mana, EStats::MaxMana));
	PlayerWidgetRef->SetLevel(LevelComp->GetCurrentLevel());
	PlayerWidgetRef->SetXP(LevelComp->GetXPPercentage());
	CreateAbilitiesFooterPanel();
}


void AMainCharacter_Base::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	const float ReducedDamage = StatsComp->GetReducedDamage(Damage, DamageCauser);
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(ReducedDamage, this, DamageCauser);
	PlayHurtAnimation();
}


void AMainCharacter_Base::CreateAbilitiesFooterPanel()
{
	PlayerWidgetRef->ClearAbilityFooterPanel();
	for (UAbilityComponent_Player* Ability: ArrAbilities)
	{
		if (IsValid(Ability) && Ability->IsAbilityAvailable())
			PlayerWidgetRef->CreateAbilityFooterPanel(Ability->GetIcon(), Ability->GetActionKey(), Ability);
	}
}


void AMainCharacter_Base::HandleDeath()
{
	if (!DeathAnimMontage) return;
	PlayerWidgetRef->CreateDeathWidget();
	PlayAnimMontage(DeathAnimMontage);
	DisableInput(GetController<APlayerController>());
}


void AMainCharacter_Base::EndLockonWithActor(AActor* ActorRef)
{
	if (ActorRef != LockonComp->CurrentTargetActor) return;
	LockonComp->EndLockon();
}


bool AMainCharacter_Base::CanTakeDamage(AActor* Opponent) const
{
	if (PlayerActionsComp->IsRollActive()) return false;
	if (PlayerAnimInstance->bIsBlocking) return false;
	return true;
}


void AMainCharacter_Base::PlayHurtAnimation()
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	if (CurrentMontage == DeathAnimMontage || CurrentMontage == PlayerActionsComp->RollAnimMontage || !CanPlayHurtAnimation()) return;
	PlayAnimMontage(HurtAnimMontage);
}


void AMainCharacter_Base::InterruptHurtAnimation() const
{
	UAnimMontage* CurrentMontage = GetCurrentMontage();
	if (CurrentMontage == HurtAnimMontage) PlayerAnimInstance->Montage_Stop(.1f);
}


void AMainCharacter_Base::ResetStats()
{
	const int UsedStatPoints = LevelComp->GetUsedStatPoints();
	if (UsedStatPoints == 0) return;
	const int AvailablePoints = LevelComp->GetCurrentStatPointsAmount();
	LevelComp->SetStatPoints(UsedStatPoints + AvailablePoints);
	LevelComp->SetUsedStatPoints(0);
	StatsComp->OnStatsRevertedToDefaultDelegate.Broadcast();
}


void AMainCharacter_Base::ResetAbilities()
{
	for (auto& Ability : GetAbilitiesArray())
	{
		if (!IsValid(Ability)) continue;
		Ability->ClearAbilityData();
	}
	PlayerWidgetRef->ClearAbilityFooterPanel();
	LevelComp->SetAbilityPoints(LevelComp->GetCurrentAbilityPointsAmount() + GetUsedAbilityPoints());
	SetUsedAbilityPoints(0);
}


void AMainCharacter_Base::ReduceStamina(const float Stamina)
{
	StatsComp->OnReduceStaminaRequestDelegate.Broadcast(Stamina);
}


void AMainCharacter_Base::ReduceMana(const float Mana)
{
	StatsComp->OnReduceManaRequestDelegate.Broadcast(Mana);
}


void AMainCharacter_Base::ReduceHealth(const float Damage, AActor* Opponent)
{
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(Damage, this, Opponent);
}


void AMainCharacter_Base::Heal(const float Health)
{
	StatsComp->OnAddHealthRequestDelegate.Broadcast(Health);
}


void AMainCharacter_Base::AddXP(const float NewXP)
{
	LevelComp->AddXP(NewXP);
}


bool AMainCharacter_Base::IsPlayerLockedOnEnemy() const
{
	return LockonComp->IsLocked();
}


void AMainCharacter_Base::EndPlayerLockOnEnemy()
{
	LockonComp->EndLockon();
}


void AMainCharacter_Base::SetCanAttack(const bool bCanAttack)
{
	CombatComp->SetCanAttack(bCanAttack);
}


void AMainCharacter_Base::SetCanRoll(const bool bCanRoll)
{
	PlayerActionsComp->SetCanRoll(bCanRoll);
}


int AMainCharacter_Base::GetCurrentStatPointsAmount() const
{
	return LevelComp->GetCurrentStatPointsAmount();
}


int AMainCharacter_Base::GetCurrentAbilityPointsAmount() const
{
	return LevelComp->GetCurrentAbilityPointsAmount();
}


int AMainCharacter_Base::GetUsedStatPoints() const
{
	return LevelComp->GetUsedStatPoints();
}


void AMainCharacter_Base::SetUsedStatPoints(int UsedStatPoints)
{
	LevelComp->SetUsedStatPoints(UsedStatPoints);
}


void AMainCharacter_Base::ApplyPersistentStats(const FPlayerPersistentStats& Data)
{
	StatsComp->SetStatValue(EStats::Health, Data.Health);
	StatsComp->SetStatValue(EStats::MaxHealth, Data.MaxHealth);
	StatsComp->SetStatValue(EStats::Mana, Data.Mana);
	StatsComp->SetStatValue(EStats::MaxMana, Data.MaxMana);
	StatsComp->SetStatValue(EStats::Stamina, Data.Stamina);
	StatsComp->SetStatValue(EStats::MaxStamina, Data.MaxStamina);
	StatsComp->SetStatValue(EStats::PhysicalStrength, Data.PhysicalStrength);
	StatsComp->SetStatValue(EStats::MagicalStrength, Data.MagicalStrength);

	AttributesComp->SetAttributeValue(EAttributes::Arcane, Data.Arcane);
	AttributesComp->SetAttributeValue(EAttributes::Wisdom, Data.Wisdom);
	AttributesComp->SetAttributeValue(EAttributes::Endurance, Data.Endurance);
	AttributesComp->SetAttributeValue(EAttributes::Intelligence, Data.Intelligence);
	AttributesComp->SetAttributeValue(EAttributes::Strength, Data.Strength);
	
	LevelComp->SetLevel(Data.CurrentLevel);
	LevelComp->SetXP(Data.CurrentXP);
	LevelComp->SetAbilityPoints(Data.AbilityPoints);
	LevelComp->SetStatPoints(Data.StatPoints);
}


FPlayerPersistentStats AMainCharacter_Base::SavePersistentStats() const
{
	FPlayerPersistentStats Data;
	Data.Health = StatsComp->GetStatValue(EStats::Health);
	Data.MaxHealth = StatsComp->GetStatValue(EStats::MaxHealth);
	Data.Mana = StatsComp->GetStatValue(EStats::Mana);
	Data.MaxMana = StatsComp->GetStatValue(EStats::MaxMana);
	Data.Stamina = StatsComp->GetStatValue(EStats::Stamina);
	Data.MaxStamina = StatsComp->GetStatValue(EStats::MaxStamina);
	Data.PhysicalStrength = StatsComp->GetStatValue(EStats::PhysicalStrength);
	Data.MagicalStrength = StatsComp->GetStatValue(EStats::MagicalStrength);
	
	Data.Arcane = AttributesComp->GetAttributeValue(EAttributes::Arcane);
	Data.Wisdom = AttributesComp->GetAttributeValue(EAttributes::Wisdom);
	Data.Strength = AttributesComp->GetAttributeValue(EAttributes::Strength);
	Data.Intelligence = AttributesComp->GetAttributeValue(EAttributes::Intelligence);
	Data.Endurance = AttributesComp->GetAttributeValue(EAttributes::Endurance);
	
	Data.CurrentLevel = LevelComp->GetCurrentLevel();
	Data.CurrentXP = LevelComp->GetCurrentXP();
	Data.StatPoints = LevelComp->GetCurrentStatPointsAmount();
	Data.AbilityPoints = LevelComp->GetCurrentAbilityPointsAmount();
	return Data;
}


void AMainCharacter_Base::UpgradeStat(const TEnumAsByte<EStats> Stat) const
{
	int Points = LevelComp->GetCurrentStatPointsAmount();
	if (Points <= 0) return;
	if (Stat == Strength) StatsComp->UpgradeStat(Stat, 5);
	else StatsComp->UpgradeStat(Stat, 10);
	Points--;
	LevelComp->SetStatPoints(Points);
	LevelComp->IncreaseUsedStatPoints();
	LevelComp->OnStatPointsUpdateDelegate.Broadcast(Points);
}


void AMainCharacter_Base::FillStatDisplayData(FString& StatName, float& StatValue, const EStats& StatToImprove) const
{
	StatName = StatsComp->GetStatName(StatToImprove);
	StatValue = StatsComp->GetStatValue(StatToImprove);
}


void AMainCharacter_Base::CalculateStat(const EAttributes& Attribute, const EStats& Stat) const
{
	const int Value = AttributesComp->GetAttributeValue(Attribute);
	const int Coefficient = AttributesComp->GetAttributeCoefficient(Attribute);
	StatsComp->SetStatValue(Stat, Value * Coefficient);
}


float AMainCharacter_Base::GetPlayerMaxHealth() const
{
	return StatsComp->GetStatValue(EStats::MaxHealth);
}


void AMainCharacter_Base::CreatePauseMenu()
{
	PlayerWidgetRef->CreatePauseMenu();
}


void AMainCharacter_Base::CreateBonfireMenu()
{
	PlayerWidgetRef->CreateBonfireMenuWidget();
}


void AMainCharacter_Base::CreateResetMenu()
{
	PlayerWidgetRef->CreateResetWidget();
}


void AMainCharacter_Base::SetDefaultStats()
{
	StatsComp->SetDefaultStats();
}


void AMainCharacter_Base::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	PlayerWidgetRef->CreateStatusEffectIcon(Icon, StatusEffectsCompRef);
}


void AMainCharacter_Base::CreateAbilityIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	PlayerWidgetRef->CreateAbilityIconWithTimer(Duration, Image, AbilityCompRef);
}


void AMainCharacter_Base::CreateAbilityIconWithAmount(const float Amount, UTexture2D* Icon, UStatsComponent* StatsCompRef, const FString& Keyword)
{
	PlayerWidgetRef->CreateAbilityIconWithAmount(Amount, Icon, StatsCompRef, Keyword);
}


AActor* AMainCharacter_Base::GetCurrentTargetActor() const
{
	return LockonComp->CurrentTargetActor;
}


void AMainCharacter_Base::HandleStatPointsAmountChange(const int NewPoints)
{
	OnStatPointsAmountChangedDelegate.Broadcast(NewPoints);
}


void AMainCharacter_Base::HandleAbilityPointsAmountChange(const int NewPoints)
{
	OnAbilityPointsAmountChangeDelegate.Broadcast(NewPoints);	
}


float AMainCharacter_Base::GetCurrentDamage() const
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


bool AMainCharacter_Base::HasEnoughStamina(const float Stamina) const
{
	return StatsComp->GetStatValue(EStats::Stamina) >= Stamina;
}


bool AMainCharacter_Base::HasEnoughMana(const float Mana) const
{
	return StatsComp->GetStatValue(EStats::Mana) >= Mana;
}


UPlayerWidget* AMainCharacter_Base::GetPlayerWidget() const
{
	return PlayerWidgetRef;
}


TArray<UAbilityComponent_Player*>& AMainCharacter_Base::GetAbilitiesArray()
{
	return ArrAbilities;
}


void AMainCharacter_Base::AddToAbilitiesArray(UAbilityComponent_Player* NewAbility)
{
	ArrAbilities.Add(NewAbility);
}


UARPG_GameInstance* AMainCharacter_Base::GetGameInstanceRef() const
{
	return GameInstance;
}


USkeletalMeshComponent* AMainCharacter_Base::GetSkeletalMeshComponent() const
{
	return SkeletalMeshComp;
}


void AMainCharacter_Base::SetSkeletalMeshComponent()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetOwner());
	if (!PlayerController) return;
	APawn* Pawn = PlayerController->GetPawn();
	if (ACharacter* Character = Cast<ACharacter>(Pawn)) SkeletalMeshComp = Character->GetMesh();
}


void AMainCharacter_Base::SetCanPlayHurtAnimation(const bool bCanPlayAnim)
{
	bCanPlayHurtAnim = bCanPlayAnim;
}


bool AMainCharacter_Base::CanPlayHurtAnimation() const
{
	return bCanPlayHurtAnim;
}


TArray<TEnumAsByte<EStats>> AMainCharacter_Base::GetStatsArray() const
{
	return ArrStats;
}


TArray<TEnumAsByte<EAttributes>>& AMainCharacter_Base::GetAttributes() const
{
	return AttributesComp->GetAttributes();
}


void AMainCharacter_Base::IncreaseUsedAbilityPoints(const int UsedPoints)
{
	UsedAbilityPoints += UsedPoints;
}


void AMainCharacter_Base::SetUsedAbilityPoints(const int NewUsedPoints)
{
	UsedAbilityPoints = NewUsedPoints;
}


int AMainCharacter_Base::GetUsedAbilityPoints() const
{
	return UsedAbilityPoints;
}