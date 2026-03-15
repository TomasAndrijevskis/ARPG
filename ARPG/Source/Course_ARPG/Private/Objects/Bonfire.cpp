
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
	if (OtherActor != PlayerController->GetPawn()) return;
	Super::OnSphereBeginOverlap(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if (!PlayerController) return;
	PlayerController->SetIsInBonfireRange(true, this);
	UE_LOG(LogTemp, Error, TEXT("Bonfire, Start Overlap"));
}


void ABonfire::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor != PlayerController->GetPawn()) return;
	Super::OnSphereEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
	if (!PlayerController) return;
	PlayerController->SetIsInBonfireRange(false, nullptr);
	UE_LOG(LogTemp, Error, TEXT("Bonfire, End Overlap"));
}


void ABonfire::SetIsFirstTimeUsed(const bool NewIsFirstTimeUsed){bIsFirstTimeUsed = NewIsFirstTimeUsed;}

FString ABonfire::GetBonfireName() const{return BonfireName;}

FString ABonfire::GetMapName() const{return MapName;}

bool ABonfire::IsFirstTimeUsed() const{return bIsFirstTimeUsed;}