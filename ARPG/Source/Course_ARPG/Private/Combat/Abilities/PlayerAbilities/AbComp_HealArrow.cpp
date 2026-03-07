
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_HealArrow::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_HealArrow::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		HandlePlayerActions(false);
		OnAbilityStartedDelegate.Broadcast();
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbComp_HealArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	float AnimDuration = PlayerRef->PlayAnimMontage(ShootMontage);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::CompleteAbility, AnimDuration, false);
}


void UAbComp_HealArrow::SpawnArrow()
{
	if (!ArrowClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ArrowClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetOwner(GetOwner());
	Projectile->SetStats(0, AliveTime, 0);
	Projectile->StartAliveTimer();
}


void UAbComp_HealArrow::CompleteAbility()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SetAbilityActive(false);
	HandlePlayerActions(true);
	StartCooldown();
}

void UAbComp_HealArrow::CreateIcon()
{
	//PlayerRef->CreateAbilityIconWithAmount();
}
