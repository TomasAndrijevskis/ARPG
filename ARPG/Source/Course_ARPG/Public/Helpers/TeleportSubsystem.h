
#pragma once

#include "CoreMinimal.h"
#include "Data/EAnimTypes.h"
#include "Data/SpawnPoint.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TeleportSubsystem.generated.h"


class UTransitionAnim;
class UTeleportSettings;

DECLARE_MULTICAST_DELEGATE(FOnPlayerTeleportRequest);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlayerTeleportComplete, const FSpawnPoint&);
UCLASS()
class COURSE_ARPG_API UTeleportSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override {return true;}
	
	void HandleTeleportDestination(const FSpawnPoint& SpawnPointData);
	
	void TeleportToLocation(const FString& DesiredTag);
	
	FOnPlayerTeleportRequest OnPlayerTeleportRequestDelegate;

	FOnPlayerTeleportComplete OnPlayerTeleportCompleteDelegate;
	
private:
	
	void HandleTeleportToMap(const FSpawnPoint& SpawnPointData);

	void HandleTeleportToLocation(const FString& TravelLocationTag);
	
	void TeleportToMap(const FSpawnPoint& SpawnPointData);
	
	void HandleTimers(float AnimDuration, const FTimerDelegate& Delegate);
	
	void OpenRequiredLevel(FName NextMapName);
	
	void PlayTransitionAnim(EAnimTypes AnimType, float& OutAnimDuration, const TSubclassOf<UTransitionAnim>& TransitionAnimClass);
	
	void PlayFadeAnimOnLevelLoaded(EAnimTypes AnimType);

	void OnLevelLoaded(UWorld* LoadedWorld);

	void OnTeleportComplete(const FSpawnPoint& LastSpawnPoint);
};