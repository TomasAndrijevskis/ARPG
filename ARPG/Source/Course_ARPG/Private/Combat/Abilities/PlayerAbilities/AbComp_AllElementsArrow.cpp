
#include "Combat/Abilities/PlayerAbilities/AbComp_AllElementsArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_AllElementsArrow::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		PlayerRef->ReduceMana(GetManaCost());
		PlayerRef->PlayAnimMontage(AnimMontage);
		HandlePlayerActions(false,false,false);
	}
}


void UAbComp_AllElementsArrow::SpawnArrow()
{
	if (!ArrowClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_AllElementsArrow* Projectile = GetWorld()->SpawnActor<AProjectile_AllElementsArrow>(ArrowClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetOwner(GetOwner());
	Projectile->SetParams(Damage, AliveTime, 0);
	Projectile->StartAliveTimer();
	FinishAbilityCast();
}


void UAbComp_AllElementsArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	
}
