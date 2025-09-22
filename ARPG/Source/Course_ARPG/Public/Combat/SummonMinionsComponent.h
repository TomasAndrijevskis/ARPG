
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SummonMinionsComponent.generated.h"


class AEnemyCharacter;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API USummonMinionsComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	void StartSummon();

protected:

	virtual void BeginPlay() override;
	
private:
	
	int GetRandomSpawnDistance();

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> MinionClass;

	UPROPERTY(EditAnywhere)
	TArray<int> MinionSpawnAmount;

	UPROPERTY(EditAnywhere)
	int MinSpawnDistance;

	UPROPERTY(EditAnywhere)
	int MaxSpawnDistance;

	AEnemyCharacter* CharacterRef;

};
