
#include "Combat/Abilities/AbilityComponent_RangeAttack.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Combat/RangeAttackProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"


void UAbilityComponent_RangeAttack::BeginPlay()
{
	Super::BeginPlay();

	SetUpgradeRequirements(FString::Printf(TEXT("Test")));
}


void UAbilityComponent_RangeAttack::StartAbilityAttack()
{
	if (!CanPlayMontage() || !GetAbilityAvailability() && CheckMana()) return;
	
	HandlePlayerActions(false);
	
	if (!bIsOnCooldown && !bIsCasting)
	{
		bIsCasting = true;
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		
		FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
		ParticleComponent = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(.4f, .4f, .4f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(ParticleTimerHandle, this, &UAbilityComponent_RangeAttack::CompleteAbilityAttack, AnimDuration/2, false);
	}
}


void UAbilityComponent_RangeAttack::CompleteAbilityAttack()
{
	HandlePlayerActions(true);
	bIsCasting = false;
	
	GetWorld()->GetTimerManager().ClearTimer(ParticleTimerHandle);
	StartCooldown();
	OnAttackPerformedDelegate.Broadcast();
	if (ParticleComponent)
	{
		ParticleComponent->DestroyComponent();
	}
}


void UAbilityComponent_RangeAttack::SpawnProjectile()
{
	if (!GetOwner() || !ProjectileClass) return;

	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp)
	{
		return;
	}

	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	
	FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	FVector TargetLocation = SpawnLocation + ForwardDirection * 1000.0f;

	FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClass, SpawnLocation, SpawnRotation);

	if (Projectile)
	{
		Projectile->SetStats(GetProjectileDamage(), AliveTime);
		Projectile->StartAliveTimer();
	}
}


float UAbilityComponent_RangeAttack::GetProjectileDamage()
{
	return ProjectileDamage;
}


void UAbilityComponent_RangeAttack::SetProjectileDamage(float NewProjectileDamage)
{
	ProjectileDamage = NewProjectileDamage;
}


void UAbilityComponent_RangeAttack::UpdateDescription()
{
	SetDescription(FString::Printf(TEXT("Throw an electric ball in your enemies."
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage: %.2f\nCooldown: %.2f s"), GetCurrentAbilityLevel(), GetManaCost(), GetProjectileDamage(), GetCooldownDuration()));
}

