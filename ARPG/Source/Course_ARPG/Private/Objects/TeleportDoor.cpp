
#include "Objects/TeleportDoor.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "Helpers/TeleportSubsystem.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/ObjectInteractionText.h"


ATeleportDoor::ATeleportDoor()
{
	DoorEffect = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorEffect"));
	DoorEffect -> SetupAttachment(ObjectMesh);
}


void ATeleportDoor::SetupWidget() const
{
	Super::SetupWidget();
	FString DoorName = SpawnPoint.MapName.ToString();
	const FString ChangedDoorName = DoorName.Replace(TEXT("_"), TEXT(" "));
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Door", ChangedDoorName, InteractionKey);
}


void ATeleportDoor::OnInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("Door, Interact"));
	if (UTeleportSubsystem* Subsystem = GetGameInstance()->GetSubsystem<UTeleportSubsystem>())
	{
		if (UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance()))
		{
			GameInstance->SaveAll();
		}
		UE_LOG(LogTemp, Warning, TEXT("Subsystem exists"));
		Subsystem->HandleTeleportDestination(SpawnPoint);
	}
	else UE_LOG(LogTemp, Warning, TEXT("Subsystem does not exist"));
}


void ATeleportDoor::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!PlayerController || OtherActor != PlayerController->GetPawn()) return;
	Super::OnSphereBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	UE_LOG(LogTemp, Error, TEXT("Door, Start Overlap"));
}


void ATeleportDoor::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!PlayerController || OtherActor != PlayerController->GetPawn()) return;
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	UE_LOG(LogTemp, Error, TEXT("Door, End Overlap"));
}