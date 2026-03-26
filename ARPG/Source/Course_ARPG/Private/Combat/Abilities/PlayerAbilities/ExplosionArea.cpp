
#include "Combat/Abilities/PlayerAbilities/ExplosionArea.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


AExplosionArea::AExplosionArea()
{
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Range sphere"));
	SphereComp->SetupAttachment(Root);
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Explosion particle"));
	Particle->SetupAttachment(SphereComp);
}


void AExplosionArea::BeginPlay()
{
	Super::BeginPlay();
	CheckEnemiesInRange();
}


void AExplosionArea::CheckEnemiesInRange()
{
	TArray<AActor*> FoundEnemies;
	UGameplayStatics::GetAllActorsOfClass(this, AEnemyCharacter::StaticClass(), FoundEnemies);
	float Radius = SphereComp->GetScaledSphereRadius();
	FVector Center = GetActorLocation();
	for (auto& FoundEnemy : FoundEnemies)
	{
		if (!IsValid(FoundEnemy)) continue;
		float DistBtwEnemyAndCenter = FVector::DistSquared(FoundEnemy->GetActorLocation(), Center);
		if (DistBtwEnemyAndCenter < Radius * Radius)
		{
			float Percent = 1 - GetPercentage(DistBtwEnemyAndCenter, Radius * Radius);
			float FinalDamage = CalculateFinalDamage(Percent);
			UGameplayStatics::ApplyDamage(FoundEnemy, FinalDamage, Cast<AEnemyCharacter>(FoundEnemy)->GetController(), nullptr, DamageType);
		}
	}
	HandleDestruction();
}


float AExplosionArea::CalculateFinalDamage(float DistancePercent)
{
	float PercentThreshold = 1 / static_cast<float>(DamageSections);
	float Percent = 1;
	for (int i = 0; i < DamageSections; i++)
	{
		if (Percent > DistancePercent && DistancePercent >= Percent - PercentThreshold)
			return Damage * Percent;
		Percent -= PercentThreshold;
	}
	return 0;
}


void AExplosionArea::HandleDestruction()
{
	SphereComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AExplosionArea::DestroyActor, 2, false);
}


void AExplosionArea::DestroyActor()
{
	this->Destroy();
}


void AExplosionArea::SetParams(float NewDamage, TSubclassOf<UDamageTypeBase> NewDamageType){Damage = NewDamage; DamageType = NewDamageType;}

float AExplosionArea::GetPercentage(float Part, float Whole) const{return Part / Whole;}