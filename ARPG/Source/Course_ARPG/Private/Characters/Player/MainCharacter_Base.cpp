
#include "Characters/Player/MainCharacter_Base.h"
#include "Animations/PlayerAnimInstance.h"
#include "Data/EStats.h"
#include "Data/PersistentData/PlayerAttributeData.h"
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
#include "Data/PersistentData/PlayerStatsData.h"
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
	StatsComp->OnStatUpdateDelegate.AddUObject(GameInstance, &UARPG_GameInstance::SaveAttributeData);
	LevelComp->OnExperienceUpdatedDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetExperience);
	LevelComp->OnLevelUpdatedDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::SetLevel);
	LevelComp->OnNewLevelDelegate.AddUObject(PlayerWidgetRef, &UPlayerWidget::ShowLevelUpAnimation);
	LevelComp->OnAttributePointsUpdateDelegate.AddUObject(this, &ThisClass::HandleStatPointsAmountChange);
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
	PlayerWidgetRef->SetExperience(LevelComp->GetExperiencePercentage());
	CreateAbilitiesFooterPanel();
}


void AMainCharacter_Base::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
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


void AMainCharacter_Base::ResetAttributes()
{
	const int UsedAttributePoints = LevelComp->GetUsedAttributePoints();
	if (UsedAttributePoints == 0) return;
	const int AvailablePoints = LevelComp->GetCurrentAttributePointsAmount();
	LevelComp->SetAttributePoints(UsedAttributePoints + AvailablePoints);
	LevelComp->SetUsedAttributePoints(0);
	AttributesComp->OnAttributesRevertedDelegate.Broadcast();
	RecalculateAllStats();
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


void AMainCharacter_Base::ReduceStamina(float Stamina)
{
	StatsComp->OnReduceStaminaRequestDelegate.Broadcast(Stamina);
}


void AMainCharacter_Base::ReduceMana(float Mana)
{
	StatsComp->OnReduceManaRequestDelegate.Broadcast(Mana);
}


void AMainCharacter_Base::ReduceHealth(float Damage, AActor* Opponent)
{
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(Damage, this, Opponent);
}


void AMainCharacter_Base::Heal(float Health)
{
	StatsComp->OnAddHealthRequestDelegate.Broadcast(Health);
}


void AMainCharacter_Base::AddExperience(float NewExperience)
{
	LevelComp->AddExperience(NewExperience);
}


bool AMainCharacter_Base::IsPlayerLockedOnEnemy() const
{
	return LockonComp->IsLocked();
}


void AMainCharacter_Base::EndPlayerLockOnEnemy()
{
	LockonComp->EndLockon();
}


void AMainCharacter_Base::SetCanAttack(bool bCanAttack)
{
	CombatComp->SetCanAttack(bCanAttack);
}


void AMainCharacter_Base::SetCanRoll(bool bCanRoll)
{
	PlayerActionsComp->SetCanRoll(bCanRoll);
}


int AMainCharacter_Base::GetCurrentAttributePointsAmount() const
{
	return LevelComp->GetCurrentAttributePointsAmount();
}


int AMainCharacter_Base::GetCurrentAbilityPointsAmount() const
{
	return LevelComp->GetCurrentAbilityPointsAmount();
}


int AMainCharacter_Base::GetUsedAttributePoints() const
{
	return LevelComp->GetUsedAttributePoints();
}


void AMainCharacter_Base::SetUsedAttributePoints(int UsedStatPoints)
{
	LevelComp->SetUsedAttributePoints(UsedStatPoints);
}


void AMainCharacter_Base::LoadAttributeData(FPlayerAttributeData Data)
{
	AttributesComp->SetAttributeValue(EAttributes::Arcane, Data.Arcane);
	AttributesComp->SetAttributeValue(EAttributes::Wisdom, Data.Wisdom);
	AttributesComp->SetAttributeValue(EAttributes::Endurance, Data.Endurance);
	AttributesComp->SetAttributeValue(EAttributes::Intelligence, Data.Intelligence);
	AttributesComp->SetAttributeValue(EAttributes::Strength, Data.Strength);
	AttributesComp->SetAttributeValue(EAttributes::Vigor, Data.Vigor);
	RecalculateAllStats();
}


FPlayerAttributeData AMainCharacter_Base::SaveAttributeData() const
{
	FPlayerAttributeData Data;
	Data.Arcane = AttributesComp->GetAttributeValue(EAttributes::Arcane);
	Data.Wisdom = AttributesComp->GetAttributeValue(EAttributes::Wisdom);
	Data.Strength = AttributesComp->GetAttributeValue(EAttributes::Strength);
	Data.Intelligence = AttributesComp->GetAttributeValue(EAttributes::Intelligence);
	Data.Endurance = AttributesComp->GetAttributeValue(EAttributes::Endurance);
	Data.Vigor = AttributesComp->GetAttributeValue(EAttributes::Vigor);
	return Data;
}


void AMainCharacter_Base::LoadLevelData(FPlayerLevelData Data)
{
	LevelComp->SetLevel(Data.CurrentLevel);
	LevelComp->SetExperience(Data.CurrentExperience);
	LevelComp->SetAbilityPoints(Data.AbilityPoints);
	LevelComp->SetAttributePoints(Data.AttributePoints);
}


FPlayerLevelData AMainCharacter_Base::SaveLevelData() const
{
	FPlayerLevelData Data;
	Data.CurrentLevel = LevelComp->GetCurrentLevel();
	Data.CurrentExperience = LevelComp->GetCurrentExperience();
	Data.AttributePoints = LevelComp->GetCurrentAttributePointsAmount();
	Data.AbilityPoints = LevelComp->GetCurrentAbilityPointsAmount();
	return Data;
}


void AMainCharacter_Base::SaveData()
{
	GameInstance->SaveAllExceptPosition();
}


void AMainCharacter_Base::FillAttributeDisplayData(FString& AttributeName, int& AttributeValue, EAttributes AttributeToImprove) const
{
	AttributeName = AttributesComp->GetAttributeName(AttributeToImprove);
	AttributeValue = AttributesComp->GetAttributeValue(AttributeToImprove);
}


void AMainCharacter_Base::UpgradeAttribute(const TEnumAsByte<EAttributes> Attribute)
{
	int Points = LevelComp->GetCurrentAttributePointsAmount();
	if (Points <= 0) return;
	AttributesComp->UpgradeAttribute(Attribute);
	Points--;
	LevelComp->SetAttributePoints(Points);
	LevelComp->IncreaseUsedStatPoints();
	LevelComp->OnAttributePointsUpdateDelegate.Broadcast(Points);
	RecalculateAttributeRelatedStats(Attribute);
}


void AMainCharacter_Base::CalculateStat(EAttributes Attribute, EStats Stat) const
{
	const int Value = AttributesComp->GetAttributeValue(Attribute);
	const int Coefficient = AttributesComp->GetStatScalingCoefficient(Stat);
	StatsComp->SetStatValue(Stat, Value * Coefficient);
	StatsComp->RestoreStats();
}


void AMainCharacter_Base::RecalculateAllStats()
{
	RecalculateAttributeRelatedStats(Vigor);
	RecalculateAttributeRelatedStats(Endurance);
	RecalculateAttributeRelatedStats(Strength);
	RecalculateAttributeRelatedStats(Intelligence);
	RecalculateAttributeRelatedStats(Wisdom);
	//RecalculateAttributeRelatedStats(Arcane);
}


void AMainCharacter_Base::RecalculateAttributeRelatedStats(EAttributes Attribute)
{
	for (auto Stat : AttributesComp->GetRelatedStats(Attribute))
	{
		CalculateStat(Attribute, Stat);
	}
}


void AMainCharacter_Base::HandleDefaultAttributes()
{
	AttributesComp->SetDefaultAttributes();
	RecalculateAllStats();
}


void AMainCharacter_Base::BuildAttributeDescription(EAttributes AttributeToImprove, FString& AttributeDescription)
{
	FString Result;
	TArray<EStats> RelatedStats = AttributesComp->GetRelatedStats(AttributeToImprove);
	if (RelatedStats.Num() <= 0) return;
	for (int i = 0; i < RelatedStats.Num(); i++)
	{
		Result += AttributesComp->GetAttributeDescription(RelatedStats[i]);
		const int Delta = AttributesComp->GetStatScalingCoefficient(RelatedStats[i]);
		Result += StatsComp->GetStatUpgradePreview(RelatedStats[i], Delta);
		if (i != RelatedStats.Num() - 1) Result += "\n";
	}
	AttributeDescription = Result;
}


void AMainCharacter_Base::FillLevelDisplayData(FPlayerLevelData& Data)
{
	Data.CurrentLevel = LevelComp->GetCurrentLevel();
	Data.CurrentExperience = LevelComp->GetCurrentExperience();
	Data.RequiredExperience = LevelComp->GetRequiredExperience();
}


void AMainCharacter_Base::FillStatsDisplayData(FPlayerStatsData& Data) const
{
	Data.Health = StatsComp->GetStatValue(EStats::Health);
	Data.MaxHealth = StatsComp->GetStatValue(EStats::MaxHealth);
	Data.Mana = StatsComp->GetStatValue(EStats::Mana);
	Data.MaxMana = StatsComp->GetStatValue(EStats::MaxMana);
	Data.Stamina = StatsComp->GetStatValue(EStats::Stamina);
	Data.MaxStamina = StatsComp->GetStatValue(EStats::MaxStamina);
	Data.PhysicalStrength = StatsComp->GetStatValue(EStats::PhysicalStrength);
	Data.MagicalStrength = StatsComp->GetStatValue(EStats::MagicalStrength);
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


void AMainCharacter_Base::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	PlayerWidgetRef->CreateStatusEffectIcon(Icon, StatusEffectsCompRef);
}


void AMainCharacter_Base::CreateAbilityIconWithTimer(float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	PlayerWidgetRef->CreateAbilityIconWithTimer(Duration, Image, AbilityCompRef);
}


void AMainCharacter_Base::CreateAbilityIconWithAmount(float Amount, UTexture2D* Icon, UStatsComponent* StatsCompRef, const FString& Keyword)
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


TArray<TEnumAsByte<EAttributes>>& AMainCharacter_Base::GetAttributesArray() const
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