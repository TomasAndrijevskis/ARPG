
#include "Combat/Abilities/PlayerAbilities/AbComp_MagicShield.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/MagicShield.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_MagicShield::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_MagicShield::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, true);
	}
}


void UAbComp_MagicShield::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_MagicShield::StartAbilityTimer, 1, true);
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
	FinishAbilityCast();
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
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\nDamage reflection: %.2f%%\n\nDefault damage reflection: %.2f%%\nAP modifier: +%.2f%%"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration(),
	GetEnhancedDamageReflectionPercent() * 100,
	GetDefaultDamageReflectionPercent() * 100,
	(GetEnhancedDamageReflectionPercent() - GetDefaultDamageReflectionPercent()) *100));
}


void UAbComp_MagicShield::UpdateUpgradeDescription()
{
	const FMagicShieldPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s\nDamage reflection: %.2f%% -> %.2f%%"),
		GetManaCost(), NextLevelData->ManaCost,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration,
		GetDefaultDamageReflectionPercent() * 100, NextLevelData->DamageReflectionPercent * 100));
}


void UAbComp_MagicShield::CreateIcon()
{
	PlayerRef->CreateAbilityIconWithTimer(GetAbilityDuration(), GetIcon(), this);
}


void UAbComp_MagicShield::ReflectAttack(AActor* Opponent, float Damage, const UDamageType* DamageType)
{
	if (!Opponent || Opponent == GetOwner()) return;
	UGameplayStatics::ApplyDamage(Opponent, Damage * GetEnhancedDamageReflectionPercent(), Opponent->GetInstigatorController(), GetOwner(), DamageType->GetClass());
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
	SetReflectionPercent(Data->DamageReflectionPercent);
}


void UAbComp_MagicShield::SetReflectionPercent(float NewReflectionPercent){DamageReflectionPercent = NewReflectionPercent;}

float UAbComp_MagicShield::GetDefaultDamageReflectionPercent() const{return DamageReflectionPercent;}

float UAbComp_MagicShield::GetEnhancedDamageReflectionPercent() const{return DamageReflectionPercent + (DamageReflectionPercent * PlayerRef->GetAbilityPowerPercent());}