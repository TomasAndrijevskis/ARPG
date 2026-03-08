
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
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::FinishAnimation, AnimDuration, false);
	}
}


void UAbComp_HealArrow::FinishAnimation()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	PlayerRef->PlayAnimMontage(ShootMontage);
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
	Projectile->SetParams(0, AliveTime, 0);
	Projectile->StartAliveTimer();
	FinishAbilityCast();
}


void UAbComp_HealArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
	StartCooldown();
}


void UAbComp_HealArrow::CreateIcon()
{
	//PlayerRef->CreateAbilityIconWithAmount();
	UE_LOG(LogTemp, Warning, TEXT("Should be icon"));
}
