
#include "Objects/TeleportDoor.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "UI/ObjectInteractionText.h"


void ATeleportDoor::SetupWidget() const
{
	Super::SetupWidget();
	const FString ChangedDoorName = DoorName.Replace(TEXT("_"), TEXT(" "));
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Door", ChangedDoorName, InteractionKey);
}


void ATeleportDoor::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (!PlayerController) return;
	PlayerController->SetIsInDoorRange(true);
	PlayerController->SetMapName(DoorName);
}


void ATeleportDoor::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	if (!PlayerController) return;
	PlayerController->SetIsInDoorRange(false);
}