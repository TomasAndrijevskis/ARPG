
#include "Combat/Abilities/AbilityComponent_LifeStealAttack.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"


void UAbilityComponent_LifeStealAttack::BeginPlay()
{
	Super::BeginPlay();

	FighterRef = Cast<IFighter>(GetOwner());

	SetDescription(FString::Printf(TEXT("Gives you an ability to steal health\nfrom your enemies."
	"\nMana cost: %.2f\nStolen health: %.2f%% \nCooldown: %.2f s\nDuration: %.2f s"),GetManaCost(), StolenHealthPercent*100, CooldownDuration, AbilityDuration));
	
	SetUpgradeRequirements(FString::Printf(TEXT("Test")));
}


float UAbilityComponent_LifeStealAttack::GetStolenHealthAmount()
{
	if (FighterRef)
	{
		float CurrentDamage = FighterRef->GetCurrentDamage();
		return CurrentDamage * StolenHealthPercent;
	}
	return 0;
}


void UAbilityComponent_LifeStealAttack::OnAbilityActivated()
{
	if (!CanPlayMontage() || !GetAbilityAvailability()) return;
	
	if (!bIsActivated && !bIsOnCooldown && CheckMana())
	{
		FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
		float AnimDuration = CharacterRef->PlayAnimMontage(AnimMontage);
		float TempDuration = 1-AnimDuration;
		
		bIsActivated = true;
		OnAbilityStartedDelegate.Broadcast();
		
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
				FVector3d(.5f, .5f, .5f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );

		TimerDuration = AbilityDuration;
		CharacterRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_LifeStealAttack::StartAbilityTimer, (AnimDuration + TempDuration), true);
	}
}


void UAbilityComponent_LifeStealAttack::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();

	bIsActivated = false;
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
	}
}


