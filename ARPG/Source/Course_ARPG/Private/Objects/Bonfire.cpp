
#include "Objects/Bonfire.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/ARPG_PlayerState.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ObjectInteractionText.h"


void ABonfire::BeginPlay()
{
	Super::BeginPlay();
	SpawnPoint.MapName = FName(UGameplayStatics::GetCurrentLevelName(GetWorld()));
}


void ABonfire::SetupWidget() const
{
	Super::SetupWidget();
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Bonfire", GetBonfireName(), InteractionKey);
}


void ABonfire::OnInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Bonfire, Interact"));
	if (!PlayerController) return;
	if (AARPG_PlayerState* PlayerState = PlayerController->GetPlayerState<AARPG_PlayerState>())
	{
		UE_LOG(LogTemp, Error, TEXT("Player state exists"));
		PlayerState->HandleBonfireInteraction(this);
		PlayerController->HandleBonfireInteraction(SpawnPoint);
	}
}


void ABonfire::SetIsFirstTimeUsed(const bool NewIsFirstTimeUsed){bIsFirstTimeUsed = NewIsFirstTimeUsed;}

const FString& ABonfire::GetBonfireName() const {return SpawnPoint.LocationTag;}

const FName& ABonfire::GetMapName() const{return SpawnPoint.MapName;}

bool ABonfire::IsFirstTimeUsed() const{return bIsFirstTimeUsed;}