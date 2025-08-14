
#include "Characters/EC_Boss_Rampage.h"
#include "Combat/GroundSmashComponent.h"


AEC_Boss_Rampage::AEC_Boss_Rampage()
{
	AbilityComp_GroundSmash = CreateDefaultSubobject<UGroundSmashComponent>(TEXT("Ground Smash Component"));
}
