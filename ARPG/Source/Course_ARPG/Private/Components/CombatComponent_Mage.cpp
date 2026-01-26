
#include "Components/CombatComponent_Mage.h"
#include "Characters/Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Characters/Player/MainCharacter_Mage.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Components/StatsComponent.h"
#include "GameFramework/Character.h"
#include "Interfaces/MainPlayer.h"
#include "Kismet/KismetMathLibrary.h"


void UCombatComponent_Mage::ComboAttack()
{
	if (!CharacterRef->Implements<UMainPlayer>()) return;
	IMainPlayer* IPlayerRef = Cast<IMainPlayer>(CharacterRef);
	if (IPlayerRef && !IPlayerRef->HasEnoughMana(AttackManaCost)) return;
	if (!bCanAttack) return;
	bCanAttack = false;
	const float AnimDuration = CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	ComboCounter++;
	const int MaxCombo = AttackAnimations.Num();
	ComboCounter = UKismetMathLibrary::Wrap(ComboCounter, -1, (MaxCombo-1));
	GetWorld()->GetTimerManager().SetTimer(ProjectileTimerHandle, this, &UCombatComponent_Mage::SpawnProjectile, AnimDuration/3, false);
}


void UCombatComponent_Mage::SpawnProjectile()
{
	if (!GetOwner()) return;
	GetWorld()->GetTimerManager().ClearTimer(ProjectileTimerHandle);
	OnAttackPerformedDelegate.Broadcast(AttackManaCost);

	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	const FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	const FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	FVector TargetLocation;
	const AMainCharacter_Mage* MageRef = Cast<AMainCharacter_Mage>(CharacterRef);
	if (MageRef && MageRef->IsPlayerLockedOnEnemy() && MageRef->GetCurrentTargetActor())
		TargetLocation = MageRef->GetCurrentTargetActor()->GetActorLocation();
	else TargetLocation = SpawnLocation + ForwardDirection * 1000.0f;
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClasses[ProjectileCounter], SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	ProjectileCounter++;
	int MaxCombo = ProjectileClasses.Num();
	ProjectileCounter = UKismetMathLibrary::Wrap(ProjectileCounter, -1, (MaxCombo-1));
	
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(CharacterRef);
	if (!PlayerRef) return;
	Projectile->SetStats(PlayerRef->StatsComp->GetStatValue(EStats::Strength)/2, AliveTime);//half damage for each hand
	Projectile->StartAliveTimer();
}