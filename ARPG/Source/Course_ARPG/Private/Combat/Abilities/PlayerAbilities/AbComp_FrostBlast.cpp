
#include "Combat/Abilities/PlayerAbilities/AbComp_FrostBlast.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/Player/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/FrostBlastRange.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_FrostBlast::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		HandlePlayerActions(false);
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
		if (!Warmup || !FrostBlastClass || !PlayerRef) return;
		UGameplayStatics::SpawnEmitterAttached(Warmup, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
		FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
		const FVector SpawnLocation = GetOwner()->GetActorLocation();
		const FRotator SpawnRotation = FRotator::ZeroRotator;
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		AFrostBlastRange* FrostBlastRangeActor = GetWorld()->SpawnActor<AFrostBlastRange>(FrostBlastClass, SpawnLocation, SpawnRotation, Params);
		if (!FrostBlastRangeActor) return;
		FrostBlastRangeActor->AttachToComponent(PlayerRef->GetRootComponent(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		FrostBlastRangeActor->SetParams(Damage, SlowDuration);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_FrostBlast::FinishAbilityCast, AnimDuration/2, false);
	}
}

void UAbComp_FrostBlast::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	CompleteAbility();
}


void UAbComp_FrostBlast::CompleteAbility()
{
	SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (!InitialBlast) return;
	UGameplayStatics::SpawnEmitterAttached(InitialBlast, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
	FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
	PlayerRef->ReduceMana(GetManaCost());
	HandlePlayerActions(true);
	SetAbilityActive(false);
	StartCooldown();
}


void UAbComp_FrostBlast::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon blizzard which\nwill slow your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage: %.2f\nCooldown: %.2f s\nSlow duration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetDamage(), GetCooldownDuration(), GetSlowDuration()));
}


void UAbComp_FrostBlast::UpdateUpgradeDescription()
{
	const FFrostBlastPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nDamage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nSlow duration: %.2f -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDamage(), NextLevelData->Damage,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetSlowDuration(), NextLevelData->SlowDuration));
}



FFrostBlastPropertiesData* UAbComp_FrostBlast::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->FrostBlastLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->FrostBlastLevels[Level];
}


void UAbComp_FrostBlast::SetAbilityData(const int32 Level)
{
	const FFrostBlastPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetDamage(Data->Damage);
	SetSlowDuration(Data->SlowDuration);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


void UAbComp_FrostBlast::SetDamage(float NewDamage)
{
	Damage = NewDamage;
}


float UAbComp_FrostBlast::GetDamage() const
{
	return Damage;
}


void UAbComp_FrostBlast::SetSlowDuration(float NewSlowDuration)
{
	SlowDuration = NewSlowDuration;
}


float UAbComp_FrostBlast::GetSlowDuration() const
{
	return SlowDuration;
}