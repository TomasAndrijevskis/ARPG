
#include "Combat/Abilities/AbilityComponent_FrostBlast.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/FrostBlastRange.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/AbilityData.h"


void UAbilityComponent_FrostBlast::BeginPlay()
{
	Super::BeginPlay();
	//SetAbilityAvailability(true);
}

void UAbilityComponent_FrostBlast::StartAbility()
{
	if (!CanPlayMontage() || !IsAbilityAvailable()) return;
	
	if (!IsOnCooldown() && !IsAbilityActive() && CheckMana())
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
			
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FrostBlast::CompleteAbility, AnimDuration/2, false);
	}
}


void UAbilityComponent_FrostBlast::CompleteAbility()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (InitialBlast)
	{
		UGameplayStatics::SpawnEmitterAttached(InitialBlast, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
	}

	
	PlayerRef->StatsComp->ReduceMana(GetManaCost());

	HandlePlayerActions(true);
	SetAbilityActive(false);
	StartCooldown();
}


void UAbilityComponent_FrostBlast::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();
	
	float NewDamage = Damage + (Damage * 0.4f);

	SetAbilityDuration(GetAbilityDuration() + 1);
	SetDamage(FMath::RoundToFloat(NewDamage * 100.0f) / 100.0f);
	SetSlowDuration(GetSlowDuration() + 1);
}

void UAbilityComponent_FrostBlast::SaveCustomProperties(FAbilityData& Data)
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("SlowDamage", GetDamage());
	Data.CustomProperties.Add("SlowDuration", GetSlowDuration());
}

void UAbilityComponent_FrostBlast::LoadCustomProperties(FAbilityData& SavedData)
{
	Super::LoadCustomProperties(SavedData);
	SetDamage(SavedData.CustomProperties.FindRef("SlowDamage"));
	SetSlowDuration(SavedData.CustomProperties.FindRef("SlowDuration"));
}


void UAbilityComponent_FrostBlast::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon blizzard which\nwill slow your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage: %.2f\nCooldown: %.2f s\nSlow duration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetDamage(), GetCooldownDuration(), GetSlowDuration()));
}

void UAbilityComponent_FrostBlast::UpdateUpgradeDescription()
{
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1 ;
	
	float NextDamage = GetDamage() + (GetDamage() * .4f);
	float NextSlowDuration = GetSlowDuration() + 1;
	
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nDamage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nSlow duration: %.2f -> %.2f s"),
		GetManaCost(), NextMana, GetDamage(), NextDamage, GetCooldownDuration(), NextCooldown, GetSlowDuration(), NextSlowDuration));
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

