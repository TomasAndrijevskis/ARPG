
#include "Combat/Abilities/PlayerAbilities/AbComp_AllElementsArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_AllElementsArrow::StartAbility()
{
	Super::StartAbility();
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		PlayerRef->ReduceMana(GetManaCost());
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		HandlePlayerActions(false,false,false);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_AllElementsArrow::FinishAnimation, AnimDuration, false);
	}
}


void UAbComp_AllElementsArrow::FinishAnimation()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	PlayerRef->PlayAnimMontage(ShootMontage);
}


void UAbComp_AllElementsArrow::SpawnArrow()
{
	UE_LOG(LogTemp, Warning, TEXT("Spawn arrow"));
	if (!ArrowClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_AllElementsArrow* Projectile = GetWorld()->SpawnActor<AProjectile_AllElementsArrow>(ArrowClass, SpawnLocation, SpawnRotation);
	if (Projectile)
	{
		Projectile->SetOwner(GetOwner());
		Projectile->SetParams(Damage, AliveTime, 0);
		Projectile->StartAliveTimer();
	}
	FinishAbilityCast();
}


void UAbComp_AllElementsArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
}