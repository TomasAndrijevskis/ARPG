
#include "Helpers/TeleportSubsystem.h"
#include "EngineUtils.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/EAnimTypes.h"
#include "GameFramework/PlayerStart.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/TransitionAnim.h"


void UTeleportSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UTeleportSubsystem::OnLevelLoaded);
	OnTeleportPreparationCompletedDelegate.AddUObject(this, &UTeleportSubsystem::OnTeleportPreparationCompleted);
}


void UTeleportSubsystem::OnLevelLoaded(UWorld* LoadedWorld)
{
	if (!LoadedWorld || !LoadedWorld->IsGameWorld()) return;
	PlayFadeAnimOnLevelLoaded(EAnimTypes::FadeOut);
}


void UTeleportSubsystem::OnTeleportPreparationCompleted(const FSpawnPoint& LastSpawnPoint)
{
	if (UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance()))
	{
		GameInstance->SavePlayerLocation(LastSpawnPoint);
	}
}


void UTeleportSubsystem::PlayFadeAnimOnLevelLoaded(EAnimTypes AnimType)
{
	if (AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		PC->SetPlayerInputEnabled(false);
		float AnimDuration = PlayTransitionAnim(AnimType, PC->GetTransitionAnimClass());
		FTimerDelegate InputDelegate;
		InputDelegate.BindUObject(PC, &AARPG_PlayerController::SetPlayerInputEnabled, true);
		HandleTimers(AnimDuration, InputDelegate);
	}
}


void UTeleportSubsystem::HandleTeleportDestination(const FSpawnPoint& SpawnPointData)
{
	if (UGameplayStatics::GetCurrentLevelName(GetWorld()) == SpawnPointData.MapName) HandleTeleportToLocation(SpawnPointData.LocationTag);
	else HandleTeleportToMap(SpawnPointData);
}


void UTeleportSubsystem::HandleTeleportToMap(const FSpawnPoint& SpawnPointData)
{
	UE_LOG(LogTemp, Error, TEXT("Map %s, Location %s"), *SpawnPointData.MapName.ToString(), *SpawnPointData.LocationTag);
	FString MapPath = "/Game/Maps/" + SpawnPointData.MapName.ToString();
	if (FPackageName::DoesPackageExist(MapPath))
	{
		if (AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController()))
		{
			OnPlayerTeleportRequestDelegate.Broadcast();
			float AnimDuration = PlayTransitionAnim(EAnimTypes::FullFade, PC->GetTransitionAnimClass());
			
			FTimerDelegate TeleportDelegate;
			FTimerDelegate InputDelegate;
			TeleportDelegate.BindWeakLambda(this, [this, SpawnPointData]()
			{
				TeleportToMap(SpawnPointData);
			});
			InputDelegate.BindUObject(PC, &AARPG_PlayerController::SetPlayerInputEnabled, true);
			HandleTimers(AnimDuration/2, TeleportDelegate);
			HandleTimers(AnimDuration, InputDelegate);
		}
	}
	else UE_LOG(LogTemp, Error,TEXT("Teleport failed: Map %s does not exist"),*MapPath);
}


void UTeleportSubsystem::HandleTeleportToLocation(const FString& TravelLocationTag)
{
	if (AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		OnPlayerTeleportRequestDelegate.Broadcast();
		float AnimDuration = PlayTransitionAnim(EAnimTypes::FullFade, PC->GetTransitionAnimClass());
		
		FTimerDelegate TeleportDelegate;
		FTimerDelegate InputDelegate;
		TeleportDelegate.BindWeakLambda(this, [this, TravelLocationTag]()
		{
			TeleportToLocation(TravelLocationTag);
		});
		InputDelegate.BindUObject(PC, &AARPG_PlayerController::SetPlayerInputEnabled, true);
		HandleTimers(AnimDuration/2, TeleportDelegate);
		HandleTimers(AnimDuration, InputDelegate);
	}
}


void UTeleportSubsystem::TeleportToMap(const FSpawnPoint& SpawnPointData)
{
	UE_LOG(LogTemp, Warning, TEXT("TeleportToMap"));
	UE_LOG(LogTemp, Warning, TEXT("Next location %s"), *SpawnPointData.LocationTag);
	OnTeleportPreparationCompletedDelegate.Broadcast(SpawnPointData);
	OpenRequiredLevel(SpawnPointData.MapName);
}


void UTeleportSubsystem::TeleportToLocation(const FString& DesiredTag)
{
	UE_LOG(LogTemp, Warning, TEXT("TeleportToLocation"));
	if (AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0)))
	{
		for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
		{
			UE_LOG(LogTemp, Warning, TEXT("..."));
			if (It->PlayerStartTag == DesiredTag)
			{
				UE_LOG(LogTemp, Warning, TEXT("Found player start"));
				const bool bSuccess = PlayerRef->TeleportTo(It->GetActorLocation(), It->GetActorRotation());
				if (bSuccess)
				{
					FSpawnPoint Data;
					Data.LocationTag = DesiredTag;
					Data.MapName = FName(UGameplayStatics::GetCurrentLevelName(GetWorld()));
					OnTeleportPreparationCompletedDelegate.Broadcast(Data);
				}
				if (!bSuccess) UE_LOG(LogTemp, Warning, TEXT("TeleportTo failed"));
				return;
			}
		}
	}
}


float UTeleportSubsystem::PlayTransitionAnim(EAnimTypes AnimType, const TSubclassOf<UTransitionAnim>& TransitionAnimClass)
{
	if (!TransitionAnimClass) return 0.f;
	if (UTransitionAnim* TransitionAnimRef = Cast<UTransitionAnim>(CreateWidget(GetGameInstance(), TransitionAnimClass)))
	{
		TransitionAnimRef->AddToViewport(6);
		TransitionAnimRef->PlayAnim(AnimType);
		return TransitionAnimRef->GetAnimDuration(AnimType);
	}
	return 0.f;
}


void UTeleportSubsystem::OpenRequiredLevel(FName NextMapName)
{
	UGameplayStatics::OpenLevel(this, NextMapName);
}


void UTeleportSubsystem::HandleTimers(float AnimDuration, const FTimerDelegate& Delegate)
{
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, Delegate, AnimDuration, false);
}