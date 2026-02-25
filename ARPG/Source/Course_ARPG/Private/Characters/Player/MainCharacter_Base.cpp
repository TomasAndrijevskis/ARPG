
#include "Characters/Player/MainCharacter_Base.h"
#include "Animations/PlayerAnimInstance.h"
#include "Combat/DamageTypes.h"
#include "Data/EStats.h"
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
#include "Data/PersistentData/PlayerMainStatsData.h"
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
	SkeletalMeshComp = GetMesh();
	PlayerAnimInstance = Cast<UPlayerAnimInstance>(GetMesh()->GetAnimInstance());
	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (GameInstance) GameInstance->LoadCurrentEffect();
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
	if (!CanTakeDamage(DamageCauser, Damage, DamageType)) return;
	float FinalDamage = Damage;
	if (!DamageType) return;
	if (DamageType->IsA(UPhysicalDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage,StatsComp->GetStatValue(EStats::PhysDmgResistance));
	else if (DamageType->IsA(UMagicalDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage, StatsComp->GetStatValue(EStats::MagDmgResistance));
	else if (DamageType->IsA(UFireDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage, StatsComp->GetStatValue(EStats::FireDmgResistance));
	else if (DamageType->IsA(UPoisonDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage, StatsComp->GetStatValue(EStats::PoisonDmgResistance));
	else if (DamageType->IsA(UIceDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage, StatsComp->GetStatValue(EStats::IceDmgResistance));
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(FinalDamage, this, DamageCauser);
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


bool AMainCharacter_Base::CanTakeDamage(AActor* Opponent, float Damage, const UDamageType* DamageType) const
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


void AMainCharacter_Base::LoadAttributeData(TMap<TEnumAsByte<EAttributes>, int32> Data)
{
	for (const auto& Element : Data)
	{
		AttributesComp->SetAttributeValue(Element.Key, Element.Value);
	}
	RecalculateAllStats();
}


TMap<TEnumAsByte<EAttributes>, int32>AMainCharacter_Base::SaveAttributeData() const
{
	TMap<TEnumAsByte<EAttributes>, int32> Data;
	for (auto Element : GetAttributesArray())
	{
		Data.Add(Element, AttributesComp->GetAttributeValue(Element));
	}
	return Data;
}


void AMainCharacter_Base::LoadLevelData(FPlayerLevelData Data)
{
	LevelComp->SetLevel(Data.CurrentLevel);
	LevelComp->SetExperience(Data.CurrentExperience);
	LevelComp->SetAbilityPoints(Data.CurrentAbilityPoints);
	LevelComp->SetAttributePoints(Data.CurrentAttributePoints);
}


FPlayerLevelData AMainCharacter_Base::SaveLevelData() const
{
	FPlayerLevelData Data;
	Data.CurrentLevel = LevelComp->GetCurrentLevel();
	Data.CurrentExperience = LevelComp->GetCurrentExperience();
	Data.CurrentAttributePoints = LevelComp->GetCurrentAttributePointsAmount();
	Data.CurrentAbilityPoints = LevelComp->GetCurrentAbilityPointsAmount();
	Data.RequiredExperience = 0;
	return Data;
}


void AMainCharacter_Base::SaveAllExceptPosition()
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
	const float Value = AttributesComp->GetAttributeValue(Attribute);
	const float Coefficient = AttributesComp->GetStatScalingCoefficient(Stat);
	const float NewValue = Value * Coefficient;
	StatsComp->SetStatValue(Stat, NewValue);
	StatsComp->RestoreStats();
	if (Attribute == EAttributes::Intelligence)
	{
		IceStatusEffectManager->OnResistanceChangedDelegate.Broadcast(NewValue);
		FireStatusEffectManager->OnResistanceChangedDelegate.Broadcast(NewValue);
		PoisonStatusEffectManager->OnResistanceChangedDelegate.Broadcast(NewValue);
	}
}


void AMainCharacter_Base::RecalculateAllStats()
{
	RecalculateAttributeRelatedStats(EAttributes::Vigor);
	RecalculateAttributeRelatedStats(EAttributes::Endurance);
	RecalculateAttributeRelatedStats(EAttributes::Strength);
	RecalculateAttributeRelatedStats(EAttributes::Intelligence);
	RecalculateAttributeRelatedStats(EAttributes::Wisdom);
	RecalculateAttributeRelatedStats(EAttributes::Arcane);
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
		const float Delta = AttributesComp->GetStatScalingCoefficient(RelatedStats[i]);
		Result += StatsComp->GetStatUpgradeDescription(RelatedStats[i], Delta);
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


void AMainCharacter_Base::FillMainStatsDisplayData(FPlayerMainStatsData& Data) const
{
	Data.Health = StatsComp->GetStatValue(EStats::Health);
	Data.MaxHealth = StatsComp->GetStatValue(EStats::MaxHealth);
	Data.Mana = StatsComp->GetStatValue(EStats::Mana);
	Data.MaxMana = StatsComp->GetStatValue(EStats::MaxMana);
	Data.Stamina = StatsComp->GetStatValue(EStats::Stamina);
	Data.MaxStamina = StatsComp->GetStatValue(EStats::MaxStamina);
}


void AMainCharacter_Base::FillAdditionalStatsDisplayData(FPlayerAdditionalStatsData& Data) const
{
	Data.PhysicalStrength = StatsComp->GetStatValue(EStats::PhysicalStrength);
	Data.MagicalStrength = StatsComp->GetStatValue(EStats::MagicalStrength);
	Data.MagDamageResistance = StatsComp->GetStatValue(EStats::MagDmgResistance) * 100;
	Data.PhysDamageResistance = StatsComp->GetStatValue(EStats::PhysDmgResistance) * 100;
	Data.AbilityPower = StatsComp->GetStatValue(EStats::AbilityPower) * 100;
	Data.ElementalResistance = StatsComp->GetStatValue(EStats::FireDmgResistance) * 100;// all same
	Data.ElementalDamageModificator = StatsComp->GetStatValue(EStats::ElementalDamageModificator) * 100;
}


float AMainCharacter_Base::GetAbilityPowerPercent() const
{
	return StatsComp->GetStatValue(EStats::AbilityPower);
}


EEffects AMainCharacter_Base::GetCurrentEnchantmentEffect() const
{
	return CurrentEffect;
}


float AMainCharacter_Base::GetElementalDamageModificator() const
{
	return StatsComp->GetStatValue(EStats::ElementalDamageModificator);
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


void AMainCharacter_Base::CreateEnchantmentMenu()
{
	PlayerWidgetRef->CreateEnchantmentMenuWidget();
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


float AMainCharacter_Base::GetPhysicalDamage()
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


float AMainCharacter_Base::GetMagicalDamage() const
{
	return StatsComp->GetStatValue(EStats::MagicalStrength);
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