
#include "Characters/Player/MainCharacter_Archer.h"
#include "Animations/Player/AnimInstance_Archer.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_ArrowBarrage.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_ExplosiveArrow.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_LongRange.h"
#include "Components/StatsComponent.h"


AMainCharacter_Archer::AMainCharacter_Archer()
{
	AbilityComp_HealArrow = CreateDefaultSubobject<UAbComp_HealArrow>(TEXT("Healing Arrow"));
	AbilityComp_ArrowBarrage = CreateDefaultSubobject<UAbComp_ArrowBarrage>(TEXT("Arrow Barrage"));
	AbilityComp_AllElementsArrow = CreateDefaultSubobject<UAbComp_AllElementsArrow>(TEXT("All Elements Arrow"));
	AbilityComp_ExplosiveArrow = CreateDefaultSubobject<UAbComp_ExplosiveArrow>(TEXT("Explosive Arrow"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_LongRange>(TEXT("Combat Component"));
	AddToAbilitiesArray(AbilityComp_HealArrow);
	AddToAbilitiesArray(AbilityComp_ArrowBarrage);
	AddToAbilitiesArray(AbilityComp_AllElementsArrow);
	AddToAbilitiesArray(AbilityComp_ExplosiveArrow);
}


void AMainCharacter_Archer::BeginPlay()
{
	Super::BeginPlay();
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceStamina);
}


void AMainCharacter_Archer::BindAbilityDelegates()
{
/*	AbilityComp_HealArrow->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_ArrowBarrage->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_AllElementsArrow->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	AbilityComp_ExplosiveArrow->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
	*/
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnHealingArrowFireRequest.AddUObject(AbilityComp_HealArrow, &UAbComp_HealArrow::SpawnArrow);
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnArrowBarrageSpawnRequest.AddUObject(AbilityComp_ArrowBarrage, &UAbComp_ArrowBarrage::SpawnArrowBarrage);
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnAllElementsArrowSpawnRequest.AddUObject(AbilityComp_AllElementsArrow, &UAbComp_AllElementsArrow::SpawnArrow);
	Cast<UAnimInstance_Archer>(PlayerAnimInstance)->OnExplosiveArrowSpawnRequest.AddUObject(AbilityComp_ExplosiveArrow, &UAbComp_ExplosiveArrow::SpawnArrow);
}


float AMainCharacter_Archer::GetPhysicalDamage()
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


void AMainCharacter_Archer::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* DamageInstigator, AActor* DamageCauser)
{
	AEnemyCharacter* EnemyRef = nullptr;
	if (DamageInstigator) EnemyRef = Cast<AEnemyCharacter>(DamageInstigator->GetPawn());
	if (!EnemyRef) return;
	if (EnemyRef->CanApplyDamage()) Super::ReceiveDamage(DamagedActor, Damage, DamageType, DamageInstigator, DamageCauser);
	else
	{
		float FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage,GetResistanceStatValue(DamageType));
		AbilityComp_HealArrow->HandleEnemyHit(FinalDamage);
	}
}