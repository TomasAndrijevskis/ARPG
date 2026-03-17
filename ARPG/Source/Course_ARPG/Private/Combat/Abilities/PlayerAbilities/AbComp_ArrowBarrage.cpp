
#include "Combat/Abilities/PlayerAbilities/AbComp_ArrowBarrage.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/PlayerAbilities/ArrowBarrage.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_ArrowBarrage::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, false);
	}
}


void UAbComp_ArrowBarrage::SpawnArrowBarrage()
{
	if (!ArrowBarrageClass) return;
	FTransform SpawnTransform = GetSpawnTransform(250.f);
	ArrowBarrageRef = GetWorld()->SpawnActorDeferred<AArrowBarrage>(ArrowBarrageClass, SpawnTransform);
	ArrowBarrageRef->SetParams(Damage, Duration, DamageRate);
	UGameplayStatics::FinishSpawningActor(ArrowBarrageRef, SpawnTransform);
	ArrowBarrageRef->OnParticleFinishedDelegate.AddUObject(this, &UAbComp_ArrowBarrage::OnAbilityTimerFinished);
	FinishAbilityCast();
}


void UAbComp_ArrowBarrage::FinishAbilityCast()
{
	Super::FinishAbilityCast();
}


void UAbComp_ArrowBarrage::OnAbilityTimerFinished()
{
	if (ArrowBarrageRef) ArrowBarrageRef = nullptr;
	StartCooldown();
}


void UAbComp_ArrowBarrage::StartAbilityTimer()
{
	Super::StartAbilityTimer();
	
}