
#include "Characters/MainCharacter_Mage.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Mage.h"


AMainCharacter_Mage::AMainCharacter_Mage()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Mage>(TEXT("Combat Component"));
}


void AMainCharacter_Mage::BeginPlay()
{
	Super::BeginPlay();

	CombatComp->OnAttackPerformedDelegate.AddDynamic(StatsComp, &UStatsComponent::ReduceMana);
}
