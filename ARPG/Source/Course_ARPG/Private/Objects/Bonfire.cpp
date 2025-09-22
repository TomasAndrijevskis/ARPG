
#include "Objects/Bonfire.h"
#include "Characters/ARPG_PlayerController.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "UI/ObjectInteractionText.h"


ABonfire::ABonfire()
{
 	PrimaryActorTick.bCanEverTick = true;

	BonfireMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BonfireMesh"));
	BonfireMesh -> SetupAttachment(RootComponent);

	BonfireCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BonfireCollision"));
	BonfireCollision -> SetupAttachment(BonfireMesh);

	InteractionRangeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionRangeCollision"));
	InteractionRangeCollision -> SetupAttachment(BonfireMesh);

	InteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
	InteractionWidgetComponent -> SetupAttachment(BonfireMesh);
}


void ABonfire::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);
	USceneComponent* TransformComp = CameraManager->GetTransformComponent();
	
	FVector TargetLocation = TransformComp->GetComponentLocation();
	FVector CurrentLocation = InteractionWidgetComponent->GetComponentLocation();
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);
	
	InteractionWidgetComponent->SetWorldRotation(NewRotation);
}


void ABonfire::BeginPlay()
{
	Super::BeginPlay();
	InteractionRangeCollision->OnComponentBeginOverlap.AddDynamic(this, &ABonfire::OnSphereBeginOverlap);
	InteractionRangeCollision->OnComponentEndOverlap.AddDynamic(this, &ABonfire::OnSphereEndOverlap);
	PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	SetupWidget();
}


void ABonfire::SetupWidget()
{
	if (InteractionWidgetClass)
	{
		InteractionWidgetComponent->SetWidgetClass(InteractionWidgetClass);
		InteractionWidgetComponent->SetCastShadow(false);
		Cast<UObjectInteractionText>(InteractionWidgetComponent->GetUserWidgetObject())->InitializeText("Bonfire", "B");
		ChangeWidgetVisibility(false);
	}
}


void ABonfire::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//UE_LOG(LogTemp, Error, TEXT("Overlapped"));
	ChangeWidgetVisibility(true);
	if (PlayerController)
	{
		PlayerController->SetIsInBonfireRange(true, this);
	}
}


void ABonfire::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//UE_LOG(LogTemp, Error, TEXT("Stopped"));
	ChangeWidgetVisibility(false);
	if (PlayerController)
	{
		PlayerController->SetIsInBonfireRange(false, nullptr);
	}
}


void ABonfire::ChangeWidgetVisibility(bool bIsVisible)
{
	InteractionWidgetComponent->SetVisibility(bIsVisible);
}



FString ABonfire::GetBonfireName()
{
	return BonfireName;
}


FString ABonfire::GetMapName()
{
	return MapName;
}


bool ABonfire::GetIsFirstTimeUsed()
{
	return bIsFirstTimeUsed;
}


void ABonfire::SetIsFirstTimeUsed(bool NewIsFirstTimeUsed)
{
	bIsFirstTimeUsed = NewIsFirstTimeUsed;
}
