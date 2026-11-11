
#pragma once

#include "CoreMinimal.h"
#include "Data/SpawnPoint.h"
#include "GameFramework/PlayerState.h"
#include "ARPG_PlayerState.generated.h"


class ABonfire;

UCLASS()
class COURSE_ARPG_API AARPG_PlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	const TArray<FSpawnPoint>& GetUnlockedBonfires();

	void SetUnlockedBonfires(const TArray<FSpawnPoint>& NewUnlockedBonfires);
	
	const ABonfire*& GetCurrentBonfire();

	const FString& GetCurrentBonfireName() const;
	
	void HandleBonfireInteraction(const ABonfire* BonfireRef);

	TArray<FName> GetDefeatedBosses() const;

	void SetDefeatedBosses(const TArray<FName>& Bosses);

	void AddDefeatedBoss(const FName& Boss);

	
private:
	
	UPROPERTY()
	TArray<FSpawnPoint> UnlockedBonfires;

	UPROPERTY(VisibleAnywhere)
	TArray<FName> DefeatedBosses;
	
	UPROPERTY()
	const ABonfire* CurrentBonfire;
};
