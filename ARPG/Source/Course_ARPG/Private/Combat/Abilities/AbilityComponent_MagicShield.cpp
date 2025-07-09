
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
	SetAbilityDescription(FString::Printf(TEXT("Test")));
}


void UAbilityComponent_MagicShield::UpdateUpgradeDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Test")));
}


void UAbilityComponent_MagicShield::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();

	UE_LOG(LogTemp, Error, TEXT("MagicShield|Works"));
}


void UAbilityComponent_MagicShield::SaveCustomProperties(FAbilityData& Data)
{
	Super::SaveCustomProperties(Data);
}


void UAbilityComponent_MagicShield::LoadCustomProperties(FAbilityData& Data)
{
	Super::LoadCustomProperties(Data);
}


