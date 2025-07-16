
#include "Combat/Abilities/FireStorm.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/StatusEffectsComponent.h"
#include "Components/BoxComponent.h"
#include "Particles/ParticleSystemComponent.h"


AFireStorm::AFireStorm(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	CollisionBox = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("Collision"));
	CollisionBox->SetupAttachment(RootComponent);
	
	FireStormEffect = ObjectInitializer.CreateDefaultSubobject<UParticleSystemComponent>(this,TEXT("FireStorm"));
	FireStormEffect->SetupAttachment(CollisionBox);
}


void AFireStorm::HandleBeginOverlap(AActor* OtherActor)
{
	if (OtherActor == this || !OtherActor || Cast<AMainCharacter_Base>(OtherActor))
	{
		return;
	}

	if (Cast<AEnemyCharacter_Base>(OtherActor))
	{
		Cast<AEnemyCharacter_Base>(OtherActor)->StatusEffectsComp->HandleBurn(BurnDuration, BurnDamage, BurnEffect);
	}
	
}


void AFireStorm::SetProperties(float Duration, float Damage)
{
	BurnDuration = Duration;
	BurnDamage = Damage;
}