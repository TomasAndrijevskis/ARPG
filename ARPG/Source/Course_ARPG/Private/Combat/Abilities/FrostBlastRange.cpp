
#include "Combat/Abilities/FrostBlastRange.h"
#include "NiagaraComponent.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Components/SphereComponent.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"


AFrostBlastRange::AFrostBlastRange()
{
 
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);

	RangeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX"));
	RangeEffect->SetupAttachment(Collision);

}

void AFrostBlastRange::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AFrostBlastRange::CheckEnemiesInRange, 1, false);
}


void AFrostBlastRange::CheckEnemiesInRange()
{
	
	TArray<AActor*> FoundEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyCharacter_Base::StaticClass(), FoundEnemies);

	float Radius = Collision->GetScaledSphereRadius();
	FVector Center = GetActorLocation();
	
	FDamageEvent TargetAttackedEvent{ };
	
	for (AActor* FoundEnemy : FoundEnemies)
	{
		if (!FoundEnemy)
		{
			continue;
		}

		float DistBtwEnemyAndCenter = FVector::DistSquared(FoundEnemy->GetActorLocation(), Center);
		if (DistBtwEnemyAndCenter < Radius * Radius)
		{
			FoundEnemy->TakeDamage(Damage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
			Cast<AEnemyCharacter_Base>(FoundEnemy)->SlowDownEnemy(SlowDuration);
		}
	}
	this->Destroy();
}


void AFrostBlastRange::SetParams(float NewDamage, float NewDuration)
{
	Damage = NewDamage;
	SlowDuration = NewDuration;
}
