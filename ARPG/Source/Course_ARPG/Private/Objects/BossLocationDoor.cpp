
#include "Course_ARPG/Public/Objects/BossLocationDoor.h"
#include "Characters/Boss.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"


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
	Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Mesh->SetVisibility(false);
	if (MeshMaterial)
	{
		Mesh->SetMaterial(0, MeshMaterial);
	}
	SetCollisionSettings(ECR_Ignore, ECR_Ignore, ECR_Overlap);

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &ABossLocationDoor::HandleDoor, .5, false);
}


void ABossLocationDoor::HandleDoor()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABoss::StaticClass(), FoundActors);
	if (FoundActors.Num() > 0)
	{
		UE_LOG(LogTemp, Error, TEXT("FoundBoss"));
		Collision->OnComponentEndOverlap.AddDynamic(this, &ABossLocationDoor::OnEndOverlap);
		OnBossDiedDelegate.AddDynamic(this, &ABossLocationDoor::ReopenDoor);
	}
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
