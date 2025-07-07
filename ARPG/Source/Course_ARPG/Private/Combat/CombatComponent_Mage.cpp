
#include "Combat/CombatComponent_Mage.h"
#include "Characters/MainCharacter_Mage.h"
#include "Characters/StatsComponent.h"
#include "Combat/Projectile_Base.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"


void UCombatComponent_Mage::ComboAttack()
{
	if (CharacterRef->Implements<UMainPlayer>()) //проверяет есть ли интерфейс
	{
		//UE_LOG(LogTemp, Error, TEXT("CombatComp|Implements"));
		IMainPlayer* IPlayerRef = Cast<IMainPlayer>(CharacterRef);
		if (IPlayerRef && !IPlayerRef->HasEnoughMana(AttackManaCost))
		{
			//UE_LOG(LogTemp, Error, TEXT("CombatComp|Has mana"));
			return;
		}
	}
	if (!bCanAttack)
	{
		return;
	}
	bCanAttack = false;
	
	
	float AnimDuration = CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	ComboCounter++;

	int MaxCombo = AttackAnimations.Num();
	ComboCounter = UKismetMathLibrary::Wrap(ComboCounter, -1, (MaxCombo-1));
	
	GetWorld()->GetTimerManager().SetTimer(ProjectileTimerHandle, this, &UCombatComponent_Mage::SpawnProjectile, AnimDuration/3, false);
}


void UCombatComponent_Mage::SpawnProjectile()
{
	if (!GetOwner())
	{
		UE_LOG(LogTemp, Error, TEXT("Error"));
		return;
	}
	
	GetWorld()->GetTimerManager().ClearTimer(ProjectileTimerHandle);
	OnAttackPerformedDelegate.Broadcast(AttackManaCost);

	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp)
	{
		return;
	}

	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	
	FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	FVector TargetLocation = SpawnLocation + ForwardDirection * 1000.0f;

	FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClasses[ProjectileCounter], SpawnLocation, SpawnRotation);
	ProjectileCounter++;
	int MaxCombo = ProjectileClasses.Num();
	ProjectileCounter = UKismetMathLibrary::Wrap(ProjectileCounter, -1, (MaxCombo-1));
	
	if (Projectile)
	{
		AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(CharacterRef);
		if (!PlayerRef)
		{
			return;
		}
		Projectile->SetStats(PlayerRef->StatsComp->GetStatValue(EStats::Strength), AliveTime);
		Projectile->StartAliveTimer();
	}
}
