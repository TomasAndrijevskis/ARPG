
#include "Combat/Abilities/FrostBlastRange.h"
#include "NiagaraComponent.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Components/SphereComponent.h"
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

	for (auto FoundEnemy : FoundEnemies)
	{
		if (FoundEnemy)
		{
			UE_LOG(LogTemp, Error, TEXT("Enemy in range: %s"), *FoundEnemy->GetName());
		}
	}

	this->Destroy();
}



