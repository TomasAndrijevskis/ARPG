
#include "Characters/Boss_Rampage.h"
#include "Combat/GroundSmashComponent.h"
#include "Combat/TraceComponent.h"


ABoss_Rampage::ABoss_Rampage()
{
	GroundSmashComp = CreateDefaultSubobject<UGroundSmashComponent>(TEXT("Ground Smash Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


void ABoss_Rampage::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	if (IsSecondPhaseActive())
	{
		float FinalDamage = GetFinalDamage(Damage);
		Super::ReceiveDamage(DamagedActor, FinalDamage, DamageType, InstigatedBy, DamageCauser);
	}
	else
	{
		Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
	}
}



float ABoss_Rampage::GetFinalDamage(const float Damage) const
{
	float ClampedReduction = FMath::Clamp(DamageReductionPercent, 0.f, .9f);
	float ReducedDamage = Damage * ClampedReduction;
	return Damage - ReducedDamage;
}
