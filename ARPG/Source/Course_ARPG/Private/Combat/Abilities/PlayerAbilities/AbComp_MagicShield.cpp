
#include "Combat/Abilities/PlayerAbilities/AbComp_MagicShield.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/MagicShield.h"


void UAbComp_MagicShield::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_MagicShield::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		TimerDuration = GetEnhancedAbilityDuration();
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_MagicShield::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbComp_MagicShield::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SpawnShield();
}


void UAbComp_MagicShield::SpawnShield()
{
	if (!ShieldClass || !PlayerRef) return;
	const FVector SpawnLocation = GetOwner()->GetActorLocation();
	const FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	ShieldActor = GetWorld()->SpawnActor<AMagicShield>(ShieldClass, SpawnLocation, SpawnRotation, Params);
	if (!ShieldActor) return;
	ShieldActor->AttachToComponent(PlayerRef->GetRootComponent(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	OnAbilityStartedDelegate.Broadcast();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_MagicShield::StartAbilityTimer, 1, true);
}


void UAbComp_MagicShield::StartAbilityTimer()
{
	Super::StartAbilityTimer();
}


void UAbComp_MagicShield::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ShieldActor)
	{
		ShieldActor->Destroy();
		ShieldActor = nullptr;
	}
}


void UAbComp_MagicShield::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Get yourself fully covered\nwith magic shield"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\n\n Default duration: %.2f s\nAP modifier: +%.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetEnhancedAbilityDuration(), GetAbilityDuration(), GetEnhancedAbilityDuration() - GetAbilityDuration()));
}


void UAbComp_MagicShield::UpdateUpgradeDescription()
{
	const FMagicShieldPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration));
}


void UAbComp_MagicShield::CreateIcon()
{
	PlayerRef->CreateAbilityIconWithTimer(GetEnhancedAbilityDuration(), GetIcon(), this);
}


float UAbComp_MagicShield::GetEnhancedAbilityDuration() const
{
	return GetAbilityDuration() + (GetAbilityDuration() * PlayerRef->GetAbilityPowerPercent());
}


FMagicShieldPropertiesData* UAbComp_MagicShield::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->MagicShieldLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->MagicShieldLevels[Level];
}


void UAbComp_MagicShield::SetAbilityData(const int32 Level)
{
	const FMagicShieldPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetCommonAbilityProperties(Data);
}