
#include "Characters/Player/MainCharacter_Archer.h"

#include "Characters/Enemy/EnemyCharacter.h"
#include "Combat/DamageTypes.h"
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_LongRange.h"
#include "Components/StatsComponent.h"


AMainCharacter_Archer::AMainCharacter_Archer()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_LongRange>(TEXT("Combat Component"));
	AbilityComp_HealArrow = CreateDefaultSubobject<UAbComp_HealArrow>(TEXT("Healing Arrow"));

	AddToAbilitiesArray(AbilityComp_HealArrow);
}


void AMainCharacter_Archer::BeginPlay()
{
	Super::BeginPlay();
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceStamina);
	AbilityComp_HealArrow->OnAbilityUnlockedDelegate.AddUObject(this, &AMainCharacter_Base::CreateAbilitiesFooterPanel);
}


void AMainCharacter_Archer::HandleEffectChange(EEffects NewEffect)
{
	//Super::HandleEffectChange(NewEffect);
	Cast<UCombatComponent_LongRange>(CombatComp)->RevertBaseProjectileClass();
}


float AMainCharacter_Archer::GetPhysicalDamage()
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


TSubclassOf<UDamageType> AMainCharacter_Archer::GetDamageType() const
{
	return UPhysicalDamageType::StaticClass();
}


void AMainCharacter_Archer::ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,AController* InstigatedBy, AActor* DamageCauser)
{
	AEnemyCharacter* EnemyRef = Cast<AEnemyCharacter>(DamageCauser);
	if (!EnemyRef) return;
	if (EnemyRef->bCanApplyDamage) Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
	else HealPlayer(Damage / 2);
}
