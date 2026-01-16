
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_FrostBlast.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/FrostBlastRange.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"


void UAbilityComponent_FrostBlast::BeginPlay()
{
	Super::BeginPlay();
	SetAbilityData(0);
}


void UAbilityComponent_FrostBlast::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		HandlePlayerActions(false);
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();

		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
		if (Warmup)
		{
			UGameplayStatics::SpawnEmitterAttached(Warmup, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
		}
		if (FrostBlastClass)
		{
			FVector SpawnLocation = GetOwner()->GetActorLocation();
			FRotator SpawnRotation = FRotator::ZeroRotator;
			FActorSpawnParameters Params;
			Params.Owner = GetOwner();
			FrostBlastRangeActor = GetWorld()->SpawnActor<AFrostBlastRange>(FrostBlastClass, SpawnLocation, SpawnRotation, Params);
			if (!PlayerRef || !FrostBlastRangeActor) return;
			FrostBlastRangeActor->AttachToComponent(PlayerRef->GetRootComponent(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			FrostBlastRangeActor->SetParams(Damage, SlowDuration);
		}
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FrostBlast::FinishAbilityCast, AnimDuration/2, false);
	}
}

void UAbilityComponent_FrostBlast::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FrostBlast::CompleteAbility, 1, false);
}


void UAbilityComponent_FrostBlast::CompleteAbility()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (InitialBlast)
		UGameplayStatics::SpawnEmitterAttached(InitialBlast, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
	PlayerRef->StatsComp->ReduceMana(GetManaCost());
	HandlePlayerActions(true);
	SetAbilityActive(false);
	StartCooldown();
}


void UAbilityComponent_FrostBlast::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon blizzard which\nwill slow your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage: %.2f\nCooldown: %.2f s\nSlow duration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetDamage(), GetCooldownDuration(), GetSlowDuration()));
}


void UAbilityComponent_FrostBlast::UpdateUpgradeDescription()
{
	const FFrostBlastPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nDamage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nSlow duration: %.2f -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDamage(), NextLevelData->Damage,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetSlowDuration(), NextLevelData->SlowDuration));
}



FFrostBlastPropertiesData* UAbilityComponent_FrostBlast::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->FrostBlastLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->FrostBlastLevels[Level];
}


void UAbilityComponent_FrostBlast::SetAbilityData(const int32 Level)
{
	const FFrostBlastPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetDamage(Data->Damage);
	SetSlowDuration(Data->SlowDuration);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


void UAbilityComponent_FrostBlast::SetDamage(float NewDamage)
{
	Damage = NewDamage;
}


float UAbilityComponent_FrostBlast::GetDamage() const
{
	return Damage;
}


void UAbilityComponent_FrostBlast::SetSlowDuration(float NewSlowDuration)
{
	SlowDuration = NewSlowDuration;
}


float UAbilityComponent_FrostBlast::GetSlowDuration() const
{
	return SlowDuration;
}

