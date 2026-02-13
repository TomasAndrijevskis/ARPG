
#include "Objects/InteractableObject_Base.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/ObjectInteractionText.h"


AInteractableObject_Base::AInteractableObject_Base()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObjectMesh"));
	ObjectMesh -> SetupAttachment(RootComponent);
	ObjectCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BonfireCollision"));
	ObjectCollision -> SetupAttachment(ObjectMesh);
	InteractionRange = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionRangeCollision"));
	InteractionRange -> SetupAttachment(ObjectMesh);
	InteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	InteractionWidgetComponent -> SetupAttachment(ObjectMesh);
}


void AInteractableObject_Base::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	InteractionRange->OnComponentBeginOverlap.AddDynamic(this, &AInteractableObject_Base::OnSphereBeginOverlap);
	InteractionRange->OnComponentEndOverlap.AddDynamic(this, &AInteractableObject_Base::OnSphereEndOverlap);
	SetupWidget();
}


void AInteractableObject_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	if (!CameraManager) return;
	USceneComponent* TransformComp = CameraManager->GetTransformComponent();
	if (!TransformComp) return;
	const FVector TargetLocation = TransformComp->GetComponentLocation();
	const FVector CurrentLocation = InteractionWidgetComponent->GetComponentLocation();
	const FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	InteractionWidgetComponent->SetWorldRotation(NewRotation);
}


void AInteractableObject_Base::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ChangeWidgetVisibility(true);
}


void AInteractableObject_Base::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ChangeWidgetVisibility(false);
}


void AInteractableObject_Base::SetupWidget() const
{
	if (!InteractionWidgetClass) return;
	InteractionWidgetComponent->SetWidgetClass(InteractionWidgetClass);
	InteractionWidgetComponent->SetCastShadow(false);
	ChangeWidgetVisibility(false);
}


void AInteractableObject_Base::ChangeWidgetVisibility(const bool bIsVisible) const
{
	InteractionWidgetComponent->SetVisibility(bIsVisible);
}