
#include "Obstacles/BossLocationDoor.h"
#include "Components/BoxComponent.h"


ABossLocationDoor::ABossLocationDoor()
{
	Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	Collision->SetupAttachment(GetRootComponent());

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Collision);
}



void ABossLocationDoor::BeginPlay()
{
	Super::BeginPlay();
	//Mesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);

	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh->SetVisibility(false);

	SetCollisionSettings(ECR_Ignore, ECR_Ignore, ECR_Overlap);
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABossLocationDoor::OnBeginOverlap);
	Collision->OnComponentEndOverlap.AddDynamic(this, &ABossLocationDoor::OnEndOverlap);
}


void ABossLocationDoor::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Error, TEXT("OnBeginOverlap"));
}


void ABossLocationDoor::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	CloseDoor();
}


void ABossLocationDoor::SetCollisionSettings(ECollisionResponse OtherResponse, ECollisionResponse CamVisResponse, ECollisionResponse PlayerResponse)
{
	Collision->SetCollisionResponseToAllChannels(OtherResponse);
	Collision->SetCollisionResponseToChannel(ECC_Camera, CamVisResponse);
	Collision->SetCollisionResponseToChannel(ECC_Visibility, CamVisResponse);
	Collision->SetCollisionResponseToChannel(CollisionChannel, PlayerResponse);
}


void ABossLocationDoor::ReopenDoor()
{
	Mesh->SetVisibility(false);
	Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SetCollisionSettings(ECR_Block, ECR_Ignore, ECR_Overlap);
}


void ABossLocationDoor::CloseDoor()
{
	Mesh->SetVisibility(true);
	Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SetCollisionSettings(ECR_Block, ECR_Block, ECR_Block);
}
