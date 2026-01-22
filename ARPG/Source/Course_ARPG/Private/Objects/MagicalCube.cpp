
#include "Objects/MagicalCube.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "UI/ObjectInteractionText.h"


void AMagicalCube::SetupWidget() const
{
	Super::SetupWidget();
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Magical Cube","Magical Cube", InteractionKey);
}


void AMagicalCube::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (!PlayerController) return;
	PlayerController->SetIsInMagicalCubeRange(true);
	UE_LOG(LogTemp, Error, TEXT("Cube, Start Overlap"));
}


void AMagicalCube::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	PlayerController->SetIsInMagicalCubeRange(false);
	UE_LOG(LogTemp, Error, TEXT("Cube, End Overlap"));
}