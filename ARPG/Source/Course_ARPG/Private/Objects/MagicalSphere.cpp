
#include "Objects/MagicalSphere.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "UI/ObjectInteractionText.h"


void AMagicalSphere::SetupWidget() const
{
	Super::SetupWidget();
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Magical Sphere","Magical Sphere", InteractionKey);
}


void AMagicalSphere::OnInteract()
{
	UE_LOG(LogTemp, Warning, TEXT("sphere, Interact"));
	if (!PlayerController) return;
	PlayerController->HandleEnchantmentSphereInteraction();
}