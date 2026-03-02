
#include "Characters/Player/MainCharacter_Archer.h"
#include "Combat/DamageTypes.h"
#include "Components/CombatComponent_Base.h"
#include "Components/CombatComponent_LongRange.h"
#include "Components/StatsComponent.h"


AMainCharacter_Archer::AMainCharacter_Archer()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_LongRange>(TEXT("Combat Component"));
}


void AMainCharacter_Archer::BeginPlay()
{
	Super::BeginPlay();
	CombatComp->OnAttackPerformedDelegate.AddUObject(this, &AMainCharacter_Base::ReduceStamina);
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