
#include "Combat/Abilities/EnemyAbilities/SummonMinionsComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Enemy/Minion_Fey.h"


void USummonMinionsComponent::BeginPlay()
{
	Super::BeginPlay();
	CharacterRef = Cast<AEnemyCharacter>(GetOwner());
}


void USummonMinionsComponent::StartSummon()
{
	if (!CharacterRef) return;
	int SummonAttempt = CharacterRef->GetBlackboardComp()->GetValueAsInt(TEXT("SummonTimes"));
	int AmountToSummon = MinionSpawnAmount[SummonAttempt];
	for (int i = 0; i < AmountToSummon; i++)
	{
		FVector SpawnLocation = CharacterRef->GetActorLocation();
		SpawnLocation.X += GetRandomSpawnDistance() * 100;
		SpawnLocation.Y += GetRandomSpawnDistance() * 100;
	
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		GetWorld()->SpawnActor<AMinion_Fey>(MinionClass, SpawnLocation, CharacterRef->GetActorRotation(), SpawnParameters);
	}
}



int USummonMinionsComponent::GetRandomSpawnDistance() const
{
	return FMath::RandRange(MinSpawnDistance, MaxSpawnDistance);
}