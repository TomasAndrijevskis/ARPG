
#include "Objects/Bonfire.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/WidgetComponent.h"
#include "UI/ObjectInteractionText.h"


void ABonfire::SetupWidget() const
{
	Super::SetupWidget();
	Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Bonfire", GetBonfireName(), InteractionKey);
}


void ABonfire::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnSphereBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (!PlayerController) return;
	PlayerController->SetIsInBonfireRange(true, this);
}


void ABonfire::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	if (!PlayerController) return;
	PlayerController->SetIsInBonfireRange(false, nullptr);
}


FString ABonfire::GetBonfireName() const
{
	return BonfireName;
}


FString ABonfire::GetMapName() const
{
	return MapName;
}


bool ABonfire::IsFirstTimeUsed() const
{
	return bIsFirstTimeUsed;
}


void ABonfire::SetIsFirstTimeUsed(const bool NewIsFirstTimeUsed)
{
	bIsFirstTimeUsed = NewIsFirstTimeUsed;
}