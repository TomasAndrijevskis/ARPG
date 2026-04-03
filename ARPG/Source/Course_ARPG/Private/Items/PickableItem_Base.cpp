
#include "Items/PickableItem_Base.h"

#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"


APickableItem_Base::APickableItem_Base()
{
	ObjectCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ObjectCollision"));
	RootComponent = ObjectCollision;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(ObjectCollision);
	InteractionRange = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionRange"));
	InteractionRange->SetupAttachment(ObjectCollision);
	InteractionWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	InteractionWidget->SetupAttachment(ObjectCollision);
}


void APickableItem_Base::BeginPlay()
{
	Super::BeginPlay();
	OnPickItemRequestDelegate.AddUObject(this, &APickableItem_Base::DestroyItem);
	InteractionRange->OnComponentBeginOverlap.AddUniqueDynamic(this, &APickableItem_Base::OnSphereBeginOverlap);
	InteractionRange->OnComponentEndOverlap.AddUniqueDynamic(this, &APickableItem_Base::OnSphereEndOverlap);
	PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
}


void APickableItem_Base::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("On item overlap"));
	if (!PlayerController) return;
	PlayerController->SetItemId(ID, true);
}


void APickableItem_Base::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("On item stop overlap"));
	if (!PlayerController) return;
	PlayerController->SetItemId(0, false);
}


void APickableItem_Base::DestroyItem()
{
	this->Destroy();
}


int APickableItem_Base::GetItemID() const{return ID;}