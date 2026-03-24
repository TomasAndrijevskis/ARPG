
#include "Combat/Abilities/PlayerAbilities/FrostBlastRange.h"
#include "NiagaraComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Kismet/GameplayStatics.h"


AFrostBlastRange::AFrostBlastRange()
{
 
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);

	RangeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VFX"));
	RangeEffect->SetupAttachment(Collision);
}


void AFrostBlastRange::CheckEnemiesInRange()
{
	TArray<AActor*> FoundEnemies;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyCharacter::StaticClass(), FoundEnemies);

	float Radius = Collision->GetScaledSphereRadius();
	FVector Center = GetActorLocation();
	
	for (AActor* FoundEnemy : FoundEnemies)
	{
		if (!FoundEnemy || FoundEnemy->Implements<UIceEffectManager>()) continue;
		float DistBtwEnemyAndCenter = FVector::DistSquared(FoundEnemy->GetActorLocation(), Center);
		if (DistBtwEnemyAndCenter < Radius * Radius)
		{
			Cast<AEnemyCharacter>(FoundEnemy)->IceStatusEffectManager->SetParams(Damage, SlowDuration, 0, false);
			Cast<AEnemyCharacter>(FoundEnemy)->IceStatusEffectManager->HandleEffect(false);
		}
	}
	this->Destroy();
}


void AFrostBlastRange::SetParams(const float NewDamage, const float NewDuration){Damage = NewDamage;SlowDuration = NewDuration;}