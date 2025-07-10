
#include "Combat/Abilities/AbilityComponent_MagicShield.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/MagicShield.h"


void UAbilityComponent_MagicShield::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
	//SetAbilityAvailability(true);
}


void UAbilityComponent_MagicShield::StartAbility()
{
	if (!CanPlayMontage() || !IsAbilityAvailable()) return;
	if (!IsAbilityActive() && !IsOnCooldown() && CheckMana())
	{
		SetAbilityActive(true);
		TimerDuration = GetAbilityDuration();
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);

		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_MagicShield::SpawnShield, AnimDuration, false);
	}
}


void UAbilityComponent_MagicShield::SpawnShield()
{
	if (!ShieldClass)
	{
		return;
	}
	FVector SpawnLocation = GetOwner()->GetActorLocation();
	FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	ShieldActor = GetWorld()->SpawnActor<AMagicShield>(ShieldClass, SpawnLocation, SpawnRotation, Params);

	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character || !ShieldActor) return;

	ShieldActor->AttachToComponent(Character->GetRootComponent(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	
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
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1;
	float NextDuration = GetAbilityDuration() + 1;

	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, GetCooldownDuration(), NextCooldown, GetAbilityDuration(), NextDuration));
}


void UAbilityComponent_MagicShield::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();
}


void UAbilityComponent_MagicShield::SaveCustomProperties(FAbilityData& Data)
{
	Super::SaveCustomProperties(Data);
}


void UAbilityComponent_MagicShield::LoadCustomProperties(FAbilityData& Data)
{
	Super::LoadCustomProperties(Data);
}


