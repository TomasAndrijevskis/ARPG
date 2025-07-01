
#include "Combat/Abilities/AbilityComponent_RangeAttack.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Combat/RangeAttackProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"
#include "SaveGame/AbilityData.h"


void UAbilityComponent_RangeAttack::BeginPlay()
{
	Super::BeginPlay();
	
}


void UAbilityComponent_RangeAttack::StartAbilityAttack()
{
	if (!CanPlayMontage() || !IsAbilityAvailable() && CheckMana()) return;
	
	HandlePlayerActions(false);
	
	if (!IsOnCooldown() && !IsAbilityActive())
	{
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		
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
	SetAbilityActive(false);
	
	GetWorld()->GetTimerManager().ClearTimer(ParticleTimerHandle);
	StartCooldown();
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


void UAbilityComponent_RangeAttack::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Throw an electric ball in your enemies."
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage: %.2f\nCooldown: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetProjectileDamage(), GetCooldownDuration()));
}


void UAbilityComponent_RangeAttack::UpdateUpgradeDescription()
{
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1 ;
	
	float NextDamage = GetProjectileDamage() + (GetProjectileDamage() * .3f);
	
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, GetProjectileDamage(), NextDamage, GetCooldownDuration(), NextCooldown));
	
}


void UAbilityComponent_RangeAttack::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();

	float NewDamage = ProjectileDamage + (ProjectileDamage * 0.3f);

	SetProjectileDamage(FMath::RoundToFloat(NewDamage * 100.0f) / 100.0f);
}


void UAbilityComponent_RangeAttack::SaveCustomProperties(FAbilityData& Data) 
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("ProjectileDamage", GetProjectileDamage());
}


void UAbilityComponent_RangeAttack::LoadCustomProperties(FAbilityData& Data)
{
	Super::LoadCustomProperties(Data);
	SetProjectileDamage(Data.CustomProperties.FindRef("ProjectileDamage"));
}



float UAbilityComponent_RangeAttack::GetProjectileDamage()
{
	return ProjectileDamage;
}


void UAbilityComponent_RangeAttack::SetProjectileDamage(float NewProjectileDamage)
{
	ProjectileDamage = NewProjectileDamage;
}


