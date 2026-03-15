
#include "Combat/Abilities/EnemyAbilities/AbComp_SummonMinions.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Enemy/Minion_Fey.h"


void UAbComp_SummonMinions::StartAbility()
{
	const AEnemyCharacter* CharacterRef = Cast<AEnemyCharacter>(GetOwner());
	if (!CharacterRef) return;
	const int SummonAttempt = CharacterRef->GetBlackboardComp()->GetValueAsInt(TEXT("SummonTimes"));
	const int AmountToSummon = MinionSpawnAmount[SummonAttempt];
	for (int i = 0; i < AmountToSummon; i++)
	{
		FVector SpawnLocation = CharacterRef->GetActorLocation();
		SpawnLocation.X += GetRandomSpawnDistance();
		SpawnLocation.Y += GetRandomSpawnDistance();
	
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		GetWorld()->SpawnActor<AMinion_Fey>(MinionClass, SpawnLocation, CharacterRef->GetActorRotation(), SpawnParameters);
	}
}


int UAbComp_SummonMinions::GetRandomSpawnDistance() const{return FMath::RandRange(MinSpawnDistance, MaxSpawnDistance) * 100;}