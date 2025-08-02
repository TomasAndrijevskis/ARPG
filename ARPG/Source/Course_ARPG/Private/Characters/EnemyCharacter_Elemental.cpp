
#include "Characters/EnemyCharacter_Elemental.h"

#include "AIController.h"
#include "BrainComponent.h"
#include "NiagaraComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


AEnemyCharacter_Elemental::AEnemyCharacter_Elemental()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	MeshComp ->SetupAttachment(RootComponent);
	
	ParticleEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle Effect"));
	ParticleEffect ->SetupAttachment(RootComponent);

	NiagaraEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Niagara Effect"));
	NiagaraEffect ->SetupAttachment(RootComponent);

	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
}

void AEnemyCharacter_Elemental::HandleDeath()
{
	if (GetAIController())
	{
		GetAIController()->GetBrainComponent()->StopLogic("Defeated");
	}
	FindComponentByClass<UCapsuleComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
	IMainPlayer* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->EndLockonWithActor(this);
	GiveRewardXP();

	if (DeathParticleClass)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticleClass,GetActorLocation(), FRotator::ZeroRotator, FVector3d(1.f, 1.f, 1.f), true );
	}
	Destroy();
}
