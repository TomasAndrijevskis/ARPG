
#include "Objects/MagicalCube.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "UI/ObjectInteractionText.h"


void AMagicalCube::SetupWidget() const
{
	Super::SetupWidget();
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Magical Cube","Magical Cube", InteractionKey);
}


void AMagicalCube::OnInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("cube, Interact"));
	if (!PlayerController) return;
	PlayerController->HandleMagicalCubeInteraction();
}