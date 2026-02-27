
#include "Characters/Player/MainCharacter_Archer.h"
#include "Combat/DamageTypes.h"
#include "Components/CombatComponent_Archer.h"
#include "Components/StatsComponent.h"


AMainCharacter_Archer::AMainCharacter_Archer()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Archer>(TEXT("Combat Component"));
}


void AMainCharacter_Archer::BeginPlay()
{
	Super::BeginPlay();
}


void AMainCharacter_Archer::HandleEffectChange(EEffects NewEffect)
{
	//Super::HandleEffectChange(NewEffect);
}


float AMainCharacter_Archer::GetPhysicalDamage()
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


TSubclassOf<UDamageType> AMainCharacter_Archer::GetDamageType() const
{
	return UPhysicalDamageType::StaticClass();
}