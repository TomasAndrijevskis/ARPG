
#include "SaveGame/Bonfire.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"


ABonfire::ABonfire()
{
 	PrimaryActorTick.bCanEverTick = true;

	BonfireMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BonfireMesh"));
	BonfireMesh -> SetupAttachment(RootComponent);

	BonfireCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BonfireCollision"));
	BonfireCollision -> SetupAttachment(BonfireMesh);

	InteractionRangeCollision = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionRangeCollision"));
	InteractionRangeCollision -> SetupAttachment(BonfireMesh);
}


void ABonfire::BeginPlay()
{
	Super::BeginPlay();
	InteractionRangeCollision->OnComponentBeginOverlap.AddDynamic(this, &ABonfire::OnSphereBeginOverlap);
}


void ABonfire::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Error, TEXT("Overlapped"));
}

