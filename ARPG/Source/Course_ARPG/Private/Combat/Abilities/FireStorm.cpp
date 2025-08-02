
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
	UE_LOG(LogTemp, Warning, TEXT("OnComponentEndOverlap"));
	HandleOverlap(OtherActor, false);
}


void AFireStorm::HandleOverlap(AActor* OtherActor, bool bIsOverlapping)
{
	if (OtherActor == this || !OtherActor || Cast<AMainCharacter_Base>(OtherActor))
	{
		return;
	}

	if (Cast<AEnemyCharacter_Base>(OtherActor))
	{
		OverlappedActor = Cast<AEnemyCharacter_Base>(OtherActor);
		OverlappedActor -> StatusEffectsComp->HandleBurn(BurnDuration, BurnDamage, BurnEffect, bIsOverlapping);
	}
}


void AFireStorm::SetProperties(float Duration, float Damage)
{
	BurnDuration = Duration;
	BurnDamage = Damage;
}
