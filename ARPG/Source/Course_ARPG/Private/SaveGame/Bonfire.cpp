
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
	InteractionRangeCollision -> SetupAttachment(RootComponent);
}


void ABonfire::BeginPlay()
{
	Super::BeginPlay();
	
}


void ABonfire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

