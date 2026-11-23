
#include "Characters/ARPG_Character_Base.h"
#include "Components/StatsComponent.h"


AARPG_Character_Base::AARPG_Character_Base()
{
	PrimaryActorTick.bCanEverTick = true;
	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
}


void AARPG_Character_Base::BeginPlay()
{
	Super::BeginPlay();
	LoadConfigData();
}


void AARPG_Character_Base::PlayDeathAnimation()
{
	if (!DeathAnimMontage) return;
	PlayAnimMontage(DeathAnimMontage);
}
