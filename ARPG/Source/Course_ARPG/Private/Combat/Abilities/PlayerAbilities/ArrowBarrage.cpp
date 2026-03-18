
#include "Combat/Abilities/PlayerAbilities/ArrowBarrage.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


AArrowBarrage::AArrowBarrage()
{
	Root = CreateDefaultSubobject<USceneComponent>("Root");
	RootComponent = Root;
	CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>("CollisionComponent");
	CollisionComponent->SetupAttachment(Root);
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(Root);
}


void AArrowBarrage::BeginPlay()
{
	Super::BeginPlay();
	CollisionComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &AArrowBarrage::OnComponentBeginOverlap);
	CollisionComponent->OnComponentEndOverlap.AddUniqueDynamic(this, &AArrowBarrage::OnComponentEndOverlap);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AArrowBarrage::DeactivateParticle, Duration, false);
}


void AArrowBarrage::DeactivateParticle()
{
	Particle->DeactivateSystem();
	OnParticleFinishedDelegate.Broadcast();
	this->Destroy();
}


void AArrowBarrage::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == this || Cast<AMainCharacter_Base>(OtherActor)) return;
	if (AEnemyCharacter* EnemyRef = Cast<AEnemyCharacter>(OtherActor))
	{
		FTimerHandle TimerHandle;
		OverlappingActorMap.Add(EnemyRef, TimerHandle);
	}
	HandleOverlap();
}


void AArrowBarrage::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (AEnemyCharacter* EnemyRef = Cast<AEnemyCharacter>(OtherActor))
	{
		if (FTimerHandle* Handle = OverlappingActorMap.Find(EnemyRef))
		{
			GetWorld()->GetTimerManager().ClearTimer(*Handle);
			OverlappingActorMap.Remove(EnemyRef);
		}
	}
}


void AArrowBarrage::HandleOverlap()
{
	for (auto &Actor : OverlappingActorMap)
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(Actor.Value)) continue;
		FTimerDelegate TimerDelegate;
		TimerDelegate.BindUObject(this, &AArrowBarrage::ApplyDamage, Actor.Key);
		GetWorld()->GetTimerManager().SetTimer(Actor.Value, TimerDelegate, DamageRate, true);
	}
}


void AArrowBarrage::ApplyDamage(AActor* OtherActor)
{
	UGameplayStatics::ApplyDamage(OtherActor, Damage, nullptr, nullptr, DamageType);
}


void AArrowBarrage::SetParams(float NewDamage, float NewDuration, float NewDamageRate){Damage = NewDamage; Duration = NewDuration; DamageRate = NewDamageRate;}
