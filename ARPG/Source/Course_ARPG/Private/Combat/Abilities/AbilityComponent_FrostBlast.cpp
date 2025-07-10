
#include "Combat/Abilities/AbilityComponent_FrostBlast.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/FrostBlastRange.h"
#include "Kismet/GameplayStatics.h"


void UAbilityComponent_FrostBlast::BeginPlay()
{
	Super::BeginPlay();
	SetAbilityAvailability(true);
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



void UAbilityComponent_FrostBlast::SetDamage(float NewDamage)
{
	Damage = NewDamage;
}


float UAbilityComponent_FrostBlast::GetDamage() const
{
	return Damage;
}