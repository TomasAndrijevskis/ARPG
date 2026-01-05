
#include "Combat/Abilities/PlayerAbilities/FireStorm.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/BoxComponent.h"
#include "Components/StatusEffectsComponent.h"
#include "Particles/ParticleSystemComponent.h"


AFireStorm::AFireStorm(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	CollisionBox = ObjectInitializer.CreateDefaultSubobject<UBoxComponent>(this, TEXT("Collision"));
	CollisionBox->SetupAttachment(RootComponent);
	
	FireStormEffect = ObjectInitializer.CreateDefaultSubobject<UParticleSystemComponent>(this,TEXT("FireStorm"));
	FireStormEffect->SetupAttachment(CollisionBox);
	if (CollisionBox)
	{
		CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFireStorm::OnComponentBeginOverlap);
		CollisionBox->OnComponentEndOverlap.AddDynamic(this, &AFireStorm::OnComponentEndOverlap);
	}
}


void AFireStorm::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	HandleOverlap(OtherActor, true);
}


void AFireStorm::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	HandleOverlap(OtherActor, false);
}


void AFireStorm::HandleOverlap(AActor* OtherActor, bool bIsOverlapping)
{
	if (OtherActor == this || !OtherActor || Cast<AMainCharacter_Base>(OtherActor)) return;
	if (Cast<AEnemyCharacter>(OtherActor))
	{
		OverlappedActor = Cast<AEnemyCharacter>(OtherActor);
		OverlappedActor -> StatusEffectsComp->HandleBurn(BurnDuration, BurnDamage, BurnEffect, bIsOverlapping, BurnRate);
	}
}


void AFireStorm::SetProperties(const float NewDuration, const float NewDamage, const float NewBurnRate)
{
	BurnDuration = NewDuration;
	BurnDamage = NewDamage;
	BurnRate = NewBurnRate;
}
