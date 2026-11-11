
#include "Characters/Player/ARPG_PlayerState.h"
#include "Objects/Bonfire.h"
#include "SaveGame/ARPG_GameInstance.h"


void AARPG_PlayerState::HandleBonfireInteraction(const ABonfire* BonfireRef)
{
	UE_LOG(LogTemp, Warning, TEXT("Interact with Bonfire"));
	CurrentBonfire = BonfireRef;
	FSpawnPoint NewSpawnPoint;
	NewSpawnPoint.LocationTag = CurrentBonfire->GetBonfireName();
	NewSpawnPoint.MapName = CurrentBonfire->GetMapName();
	if (!UnlockedBonfires.Contains(NewSpawnPoint))
	{
		FSpawnPoint Data;
		Data.LocationTag = BonfireRef->GetBonfireName();
		Data.MapName = BonfireRef->GetMapName();
		UnlockedBonfires.AddUnique(Data);
		if (UARPG_GameInstance* GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance()))
		{
			GameInstanceRef->SaveBonfires();
		}
	}
}


void AARPG_PlayerState::SetUnlockedBonfires(const TArray<FSpawnPoint>& NewUnlockedBonfires){UnlockedBonfires = NewUnlockedBonfires;}
const ABonfire*& AARPG_PlayerState::GetCurrentBonfire() {return CurrentBonfire;}
const FString& AARPG_PlayerState::GetCurrentBonfireName() const{return CurrentBonfire->GetBonfireName();}
const TArray<FSpawnPoint>& AARPG_PlayerState::GetUnlockedBonfires(){return UnlockedBonfires;}

void AARPG_PlayerState::SetDefeatedBosses(const TArray<FName>& Bosses){DefeatedBosses = Bosses;}
void AARPG_PlayerState::AddDefeatedBoss(const FName& Boss){DefeatedBosses.AddUnique(Boss);}
TArray<FName> AARPG_PlayerState::GetDefeatedBosses() const{return DefeatedBosses;}