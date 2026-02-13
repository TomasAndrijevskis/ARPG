
#include "Objects/MagicalSphere.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "UI/ObjectInteractionText.h"


void AMagicalSphere::SetupWidget() const
{
	Super::SetupWidget();
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Magical Sphere","Magical Sphere", InteractionKey);
}


void AMagicalSphere::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor != PlayerController->GetPawn()) return;
	Super::OnSphereBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (!PlayerController) return;
	PlayerController->SetIsInMagicalSphereRange(true);
	UE_LOG(LogTemp, Error, TEXT("Sphere, Start Overlap"));
}


void AMagicalSphere::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!PlayerController) return;
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	PlayerController->SetIsInMagicalSphereRange(false);
	UE_LOG(LogTemp, Error, TEXT("Sphere, End Overlap"));
}