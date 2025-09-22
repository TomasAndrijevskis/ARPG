
#include "Objects/TeleportDoor.h"

#include "Characters/ARPG_PlayerController.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/ObjectInteractionText.h"


ATeleportDoor::ATeleportDoor()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(GetRootComponent());

	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(Mesh);

	InteractionArea = CreateDefaultSubobject<UBoxComponent>(TEXT("InteractionArea"));
	InteractionArea->SetupAttachment(Mesh);

	InteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	InteractionWidgetComponent->SetupAttachment(Mesh);
}


void ATeleportDoor::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	USceneComponent* TransformComp = CameraManager->GetTransformComponent();
	
	FVector TargetLocation = TransformComp->GetComponentLocation();
	FVector CurrentLocation = InteractionWidgetComponent->GetComponentLocation();
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	
	InteractionWidgetComponent->SetWorldRotation(NewRotation);
}


void ATeleportDoor::BeginPlay()
{
	Super::BeginPlay();
	InteractionArea->OnComponentBeginOverlap.AddDynamic(this, &ATeleportDoor::OnBeginOverlap);
	InteractionArea->OnComponentEndOverlap.AddDynamic(this, &ATeleportDoor::OnEndOverlap);
	PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	SetupWidget();
}


void ATeleportDoor::SetupWidget()
{
	if (InteractionWidgetClass)
	{
		InteractionWidgetComponent->SetWidgetClass(InteractionWidgetClass);
		InteractionWidgetComponent->SetCastShadow(false);
		Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Door to " + DoorName, "F");
		ChangeWidgetVisibility(false);
	}
}


void ATeleportDoor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG(LogTemp, Error, TEXT("OnBeginOverlap"));
	ChangeWidgetVisibility(true);
	PlayerController->SetIsInDoorRange(true);
	PlayerController->SetMapName(DoorName);
}


void ATeleportDoor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//UE_LOG(LogTemp, Error, TEXT("OnEndOverlap"));
	ChangeWidgetVisibility(false);
	PlayerController->SetIsInDoorRange(false);
}


void ATeleportDoor::ChangeWidgetVisibility(bool bIsVisible)
{
	InteractionWidgetComponent->SetVisibility(bIsVisible);
}

