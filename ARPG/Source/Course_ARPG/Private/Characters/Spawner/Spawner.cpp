
#include "Characters/Spawner/Spawner.h"


void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ASpawner::CheckEnemies, .1, false);
	//CheckEnemies();
}
