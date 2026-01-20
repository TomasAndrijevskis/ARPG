
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_MagicShield.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/MagicShield.h"
#include "Components/StatsComponent.h"


void UAbilityComponent_MagicShield::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
	SetAbilityData(0);
}


void UAbilityComponent_MagicShield::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		TimerDuration = GetAbilityDuration();
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->StatsComp->OnReduceManaRequestDelegate.Broadcast(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_MagicShield::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbilityComponent_MagicShield::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_MagicShield::SpawnShield, .1, false);
}


void UAbilityComponent_MagicShield::SpawnShield()
{
	if (!ShieldClass) return;
	FVector SpawnLocation = GetOwner()->GetActorLocation();
	FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	ShieldActor = GetWorld()->SpawnActor<AMagicShield>(ShieldClass, SpawnLocation, SpawnRotation, Params);
	if (!PlayerRef || !ShieldActor) return;
	ShieldActor->AttachToComponent(PlayerRef->GetRootComponent(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	OnAbilityStartedDelegate.Broadcast();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_MagicShield::StartAbilityTimer, 1, true);
}


void UAbilityComponent_MagicShield::StartAbilityTimer()
{
	Super::StartAbilityTimer();
}


void UAbilityComponent_MagicShield::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ShieldActor)
	{
		ShieldActor->Destroy();
		ShieldActor = nullptr;
	}
}


void UAbilityComponent_MagicShield::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Get yourself fully covered\nwith magic shield"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration()));
}


void UAbilityComponent_MagicShield::UpdateUpgradeDescription()
{
	const FMagicShieldPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration));
}


FMagicShieldPropertiesData* UAbilityComponent_MagicShield::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->MagicShieldLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->MagicShieldLevels[Level];
}


void UAbilityComponent_MagicShield::SetAbilityData(const int32 Level)
{
	const FMagicShieldPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}